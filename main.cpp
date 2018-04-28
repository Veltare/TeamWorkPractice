#include "lib.h"
#include <iostream>
#include <cstdio>
#include <fstream>
#include <cstring>
using namespace std;

const int MAX_NUMBER_OF_PARAMETERES = 1; // максимальное количество параметров

char names[MAX_NUMBER_OF_PARAMETERES][3] = {"-s"}; // имена параметров; при добавлении своего параметра увеличьте 
//MAX_NUMBER_OF_PARAMETERES на единицу; если параметр описывается большим количеством символов, то увеличьте массив
bool flags[MAX_NUMBER_OF_PARAMETERES]; // DON'T TOUCH!

int main(int argc, char*argv[]) {// синтаксис: [имя исполнительного файла.exe][параметры через пробел][имя первого файла]
	//[имя второго файла]	
	
	if (argc > 3) {
		ifstream f1(argv[argc - 2]);
		ifstream f2(argv[argc - 1]);
     	for(int i = 1; i < argc - 2; i++) {
			for(int j = 0; j < MAX_NUMBER_OF_PARAMETERES; j++) {
				if(strcmp(names[j], argv[i]) == 0) flags[j] = true;
			}
		}
		
		string str1, str2, line;
		if (f1.is_open() && f2.is_open())
	    {
	        while (!f1.eof())
	        {
	            getline (f1, line);
	            str1 += line + '\n';
	        }
			while (!f2.eof())
	        {
	            getline (f2, line);
	            str2 += line + '\n';
	        }
	        f1.close();	f2.close();
	    }
	    printf("ERROR! Unable to open files\n");
	 	
	//LCS(str1, str2, str1.length(), str2.length(), flags, MAX_NUMBER_OF_PARAMETERES, невозможно давать в параметры 
	//указатель на массив указателей);
   }
    else {
      printf("Too few of arguments\n");
   }
   return 0;
}
