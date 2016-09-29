extern __thread char Line[MaxLine];  
extern __thread int NChars,NWords,NLines,LineLength;
extern struct fileWc
{
	int tid;
	char name[11];
	int charCount;
	int wordCount;
	int lineCount;
};
extern struct filesToDo
{
        int threadNumber;
        int startingFile;
        int numOfFiles;
};
struct filesToDo arrFilesToDo[4]; //hold work assignments for individual pthreads
struct fileWc *arrFileWc; //main storage array for the program results
