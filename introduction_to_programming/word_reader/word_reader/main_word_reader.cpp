#pragma warning(disable:4996)

#include "Word_Reader_core.h"

#include "String_core.h"
#include "String_Ext.h"

int main()
{
	WR::Data my_last_words;
	WR::load_File(&my_last_words, "words.txt");

	printf("number of words read: %d\n", my_last_words.n_words);
	char* word = new char;
	
	for (int i = 0; i < my_last_words.n_words; i++)
	{
		printf("%d: %s\n", i, my_last_words.words[i]);

		int result = Str_Ops::is_Palindrome(word);
		if (result == 1)
		{
			printf("%d: %s\n", i, my_last_words.words[i]);
			printf("Number of Palindromes: %s\n", i, my_last_words.words[i]);
			printf("Percentage of Palindromes: %s\n", i, my_last_words.words[i]);
		}
	}

	getchar();
	return 0;
}