//a) Deklarera en lokal variabel av datatypen int döpt num1 och tilldela heltalet - 3.
//b) Skriv ut innehållet ur variabeln num1 i terminalen.
//c) Deklarera en pekare döpt ptr1 och sätt denna till att peka på variabeln num1.
//d) Tilldela heltalet 4 till innehållet som pekaren ptr1 pekar på.
//e) Skriv återigen ut innehållet ur variabeln num1 i terminalen.Vilket heltal skrivs ut och varför ?

#include <stdio.h>

int main(void)
{
	int num1 = -3;
	int* ptr1 = &num1;

	*ptr1 = 4;

	printf("num1 = %d\n", num1);

	return 0;
}

/********************************************************************************
* Heltalet 4 skrivs ut eftersom 
********************************************************************************/