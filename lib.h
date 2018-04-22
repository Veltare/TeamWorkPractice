#ifndef H_LIB
#define H_LIB

#include "struct.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX(a,b) (((a)>(b))?(a):(b)) //Макрос для нахождение наибольшего числа

void LCS(char *S1,char *S2,int n,int m,int **L);//Функция для вычисления наибольшей последовательности
void add(struct LCS_Subsequence addArg, struct LCS_Subsequence *obj);
void print(struct LCS_Subsequence addArg, struct LCS_Subsequence *obj);
void LCS(char *S1,char *S2,int n,int m,int **L);

#endif