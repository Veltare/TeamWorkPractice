typedef struct LCS_Subsequence //Очередь для хранения наибольшей последовательности
	{
	    char symbol; //символ
	    int size;
	    struct LCS_Subsequence*head;
	    struct LCS_Subsequence*next;

	    void (*add)(struct LCS_Subsequence addArg, struct LCS_Subsequence *obj); //Функция для добавления символа в очередь
	    void (*print)(struct LCS_Subsequence *obj);  //Печать очереди
	} Subsequence;