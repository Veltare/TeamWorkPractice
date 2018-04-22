#include <stdio.h>
#include <stdlib.h>
#include "LCS.h"


void add(LCS_Subsequence addArg,LCS_Subsequence *obj)
	{
	    LCS_Subsequence*temp;
	    addArg.next = obj;
	    obj = &addArg;
	    addArg.size = addArg.size + 1;
	}
void print(LCS_Subsequence addArg,LCS_Subsequence *obj)
	{
	    LCS_Subsequence*temp = obj;
	    printf("\n");
	    while(temp->next != NULL)
	    {
		printf("%c",temp->symbol);
		temp->head = temp->next;
	    }
	}
void LCS(char *S1,char *S2,int n,int m,int **L)    
{
    Subsequence *newArg = (Subsequence*)malloc(sizeof(LCS_Subsequence));
    for(int i = n;i>=0;i--)
        for(int j = m;j>=0;j--)
        {
            if(S1[i]=='/0' || S2[j] == '/0')
                L[i][j] = 0;
            //if(i == 0|| j == 0)
                //L[i][j] = 0;    
            else    
            if(S1[i] == S2[j])
                L[i][j] = 1 + L[i+1][j+1];
            else
                L[i][j] = MAX(L[i+1][j],L[i][j+1]);
        }
    for(int i = 0,j = 0;L[i][j]!=0 && i < n && j < m;)
    {

        if(S1[i] == S2[j])
        {
            newArg->symbol = S1[i];
            newArg->add(*newArg,subOne);
            i+=1;
            j+=1;
            newArg = (Subsequence*)malloc(sizeof(LCS_Subsequence));
        }
        else
        {
            if(L[i][j] == L[i+1][j])
            {
                i+=1;
            }
            else
            {
                j+=1;
            }
        }
    }    
}
