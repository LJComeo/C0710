#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//typedef struct
//{
//	int a;
//	char b;
//	short c;
//	short d;
//}AA_t;

void SwitchSpace(char * a)
{
	int n = strlen(a);
	int i;
	for (i = 0; i < n; ++i)
	{
		if (a[i] == ' ')
		{
			a[i] = '%20';
		}
	}
}

int main()
{
	char str[10] = {'a','b','c',' ','d','e',' ','e','f'};
	SwitchSpace(&str);
	printf("%s\n", str);

	//char str[6] = { '\0' };
	//char str[7] = "string";
	//char str[10];str = "string";
	//char str[6] = "g";
	//const char * p = "Hello!";
	//printf("%c\n", *p);
	//int a = 10;
	//a += a *= a -= a / 3;
	//printf("%d\n", a);
	/*int i = 0;
	while (i < 10)
	{
		if (i < 1)
		{
			i++;
			continue;
		}
			
		if (i == 5)
			break;
		i++;
	}
	printf("%d\n", i);
	printf("%d ", sizeof(AA_t));*/
	system("pause");
	return 0;
}