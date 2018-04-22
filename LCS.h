#ifndef H_GRANDFATHER
#define H_GRANDFATHER
 
	void LCS(char *S1,char *S2,int n,int m,int **L);  

	#define MAX(a,b) (((a)>(b))?(a):(b))

	typedef struct LCS_Subsequence
	{
	    char symbol;
	    int size;
	    LCS_Subsequence*head;
	    LCS_Subsequence*next;

	    extern void (*add)(LCS_Subsequence addArg,LCS_Subsequence *obj); 
	    extern void (*print)(LCS_Subsequence *obj);  
	} Subsequence;

	

	Subsequence *subOne = NULL;

 #endif
