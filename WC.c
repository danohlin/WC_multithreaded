#include "Definition.h"
#include "ExternalVar.h"
#include <pthread.h>
#include <stdio.h>
#include <string.h>
#include <pthread.h>


extern int Readline(FILE *f),CountWord(),CountsUpdate(int LineChars,int LineWords);

__thread char Line[MaxLine];  /* one line from the file */

__thread int NChars = 0,  /* number of characters seen so far */
	     NWords = 0,  /* number of words seen so far */
	     NLines = 0,  /* number of lines seen so far */
	     LineLength;  /* length of the current line */ 

__thread FILE *fileToWc;
__thread char folder[18] = "CountingFolder/"; //name of subfolder containing actual files to WC
__thread char path[30];


void *WC(void * threadid)
{

int tid = (int) threadid;

//loop through all files assigned to this pthread for WC processing
int i;
int limit = arrFilesToDo[tid].startingFile + arrFilesToDo[tid].numOfFiles;
for (i = arrFilesToDo[tid].startingFile; i < limit; i++){

	//attempt to open the file
	memset(path, '\0', sizeof(path));
	strcpy(path, folder);
	strcat(path, arrFileWc[i].name);
	fileToWc = fopen(path, "r");

	if (fileToWc == NULL){
	printf("Unable to open file:%s\n", arrFileWc[i].name);
		continue;
	}

	LineLength = 0;
	int LineChars = Readline(fileToWc);
	int LineWords;

	while (LineChars > 0){
        	
	       LineWords = CountWord();
	       CountsUpdate(LineChars, LineWords);
	       LineChars = 0;
	       LineWords = 0;

//uncomment below listed ToString() function call, to print the text of the file to the screen
//ToString();

        	LineChars = Readline(fileToWc);

        }

        fclose(fileToWc);

	//save this info to the main array
	arrFileWc[i].tid = tid; 
	arrFileWc[i].charCount = NChars;
	arrFileWc[i].wordCount = NWords;
	arrFileWc[i].lineCount = NLines;
	NChars = 0;
	NWords = 0;
	NLines = 0;
}

pthread_exit(NULL);
}
