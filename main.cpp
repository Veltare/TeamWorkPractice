#include <fstream>
#include <cstdio>
#include <cstring>
//#include "LCS.h"
using namespace std;

const int MAX_NUMBER_OF_PARAMETERES = 1; // maximalnoe chislo parametrov

char names[MAX_NUMBER_OF_PARAMETERES][3] = {"-s"}; // all names of simple parameteres
bool flags[MAX_NUMBER_OF_PARAMETERES]; // flagi of simple parameteres, automaticaly obnulen (ZEROzeroZero) DON'T TOUCH!

int main(int argc, char*argv[]) {
	if (argc > 3) {
		
		ifstream f1(argv[argc - 2]);
		ifstream f2(argv[argc - 1]);
     	for(int i = 1; i < argc - 2; i++) {
			for(int j = 0; j < MAX_NUMBER_OF_PARAMETERES; j++) {
				if(strcmp(names[j], argv[i]) == 0) flags[j] = true;
			}
		}
		
		// LCS(flags, MAX_NUMBER_OF_PARAMETERES);
   }
    else {
      printf("Too few of arguments\n");
   }
   return 0;
}
