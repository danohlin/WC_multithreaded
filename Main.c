#include "Definition.h"
#include "ExternalVar.h"
#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <string.h>

extern int WC();

char list_file[] = "list_file.txt";
FILE *listFile;
int ch;
int fileCount = 0;
int numOfFilesRemainder;
int t1_numOfFiles;
int t2_numOfFiles;
int t3_numOfFiles;
int t4_numOfFiles;
pthread_t thread_ID[4];
int rc[4];


int main( int argc, char *argv[] )  
{

//attempt to open the list file
listFile = fopen(list_file, "r");
if (listFile == NULL){
	printf("Unable to open the list file.\n");
	exit(1);
}

//check how many lines are in the list file
while (!feof(listFile)){
	ch = fgetc(listFile);
	if (ch == '\n'){
		fileCount++;
	}
}

// create struct array to hold file names and corresponding WC counts
arrFileWc = (struct fileWc*)malloc(sizeof(struct fileWc) * fileCount);
rewind(listFile);

int k;
for (k = 0; k < fileCount; k++){
	char tempName[11];
	fgets (tempName, 11, listFile);
	char *token = strtok(tempName, "\n");
	strcpy(arrFileWc[k].name, token);
}

fclose(listFile);


// determine how many files to process per thread
numOfFilesRemainder = fileCount % 4;
t1_numOfFiles = (fileCount - numOfFilesRemainder) / 4;
t2_numOfFiles = t1_numOfFiles;
t3_numOfFiles = t1_numOfFiles;
t4_numOfFiles = t1_numOfFiles + numOfFilesRemainder;

//store this info in the along with the threadNumber and file number to start with
arrFilesToDo[0].threadNumber = 1;
arrFilesToDo[1].threadNumber = 2;
arrFilesToDo[2].threadNumber = 3;
arrFilesToDo[3].threadNumber = 4;

arrFilesToDo[0].startingFile = 0;
arrFilesToDo[0].numOfFiles = t1_numOfFiles;
arrFilesToDo[1].startingFile = t1_numOfFiles;
arrFilesToDo[1].numOfFiles = t2_numOfFiles;
arrFilesToDo[2].startingFile = t1_numOfFiles + t2_numOfFiles;
arrFilesToDo[2].numOfFiles = t3_numOfFiles;
arrFilesToDo[3].startingFile = t1_numOfFiles + t2_numOfFiles + t3_numOfFiles;
arrFilesToDo[3].numOfFiles = t4_numOfFiles;

//create threads
printf("Counting files ...\n");
rc[0] = pthread_create(&thread_ID[0], NULL, WC, (void *) 0);
rc[1] = pthread_create(&thread_ID[1], NULL, WC, (void *) 1);
rc[2] = pthread_create(&thread_ID[2], NULL, WC, (void *) 2);
rc[3] = pthread_create(&thread_ID[3], NULL, WC, (void *) 3);
pthread_join(thread_ID[0], NULL);
pthread_join(thread_ID[1], NULL);
pthread_join(thread_ID[2], NULL);
pthread_join(thread_ID[3], NULL);

//print results
int l;
for (l = 0; l < 4; l++){
	int m;
	for (m = 0; m < fileCount; m++){
		if (arrFileWc[m].tid == l){
			printf("Threadid %d processes %s which has %d characters, %d words and %d lines\n", l+1, arrFileWc[m].name, arrFileWc[m].charCount, arrFileWc[m].wordCount, arrFileWc[m].lineCount);
		}
	}
	printf("-------------------------Processes finished for Thread %d ------------------------------\n", l+1);
}

free(arrFileWc);
return 0;
}
