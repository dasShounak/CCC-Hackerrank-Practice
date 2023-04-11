#include <stdio.h>

int main()
{
	char ch;
	scanf("%c", &ch);
	switch(ch)
	{
		case 'a' : printf("vowel"); break;
		case 'e' : printf("vowel"); break;
		//write the cases for i, o, and u.
        case 'i' : printf("vowel"); break;
        case 'o' : printf("vowel"); break;
        case 'u' : printf("vowel"); break;
	

		default : printf("not vowel"); break;
	}	
	return 0;
}
