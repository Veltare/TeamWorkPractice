#include "lib.h"

int main(){

    Subsequence *subOne = NULL;//Голова очереди

    FILE *sqc1,*sqc2;
    char *text1,*text2;
    int text_size1 = 0;
    int text_size2 = 0;
    int **L;
    sqc1 = fopen("sequenceOne.txt","r");
    sqc2 = fopen("sequenceTwo.txt","r");

    fseek(sqc1,0,SEEK_END);
    fseek(sqc2,0,SEEK_END);

    text_size1 = ftell(sqc1);
    text_size2 = ftell(sqc2);

    text1 = (char*)malloc(text_size2);
    text2 = (char*)malloc(text_size1);
    L = (int**)malloc(text_size1*sizeof(int*));
    for(int i = 0;i<text_size1;i++)
    {
        L[i] = (int*)malloc(text_size2*sizeof(int));
    }

    fseek(sqc1,0,SEEK_SET);
    fseek(sqc2,0,SEEK_SET);
    while(fscanf(sqc1,"%s",text1)!=EOF)
    {
        printf("\n%s",text1);
    }
    while(fscanf(sqc2,"%s",text2)!=EOF)
    {
        printf("\n%s",text2);
    }

    LCS(text1,text2,text_size1-2,text_size2-1,L);
    printf("\n");
    
    for(int i = 0;i<text_size1;i++)
    {
        for(int j = 0;j<text_size2;j++)
        {
           printf("%d",L[i][j]);
        }
        printf("\n");
    }
    //subOne->print(subOne);
    return 0;
}