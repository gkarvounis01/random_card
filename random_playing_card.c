#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main(void)
{

int number, dice, flag = 0;
char symbol, character, flagch;

srand(time(NULL));

do
{
    dice = rand() % 13 + 1;
    symbol = rand() % 4 + 1; 
    
    if (symbol == 1)
    {
    symbol	 = '\3';
    system("color F4");
	}
	else if (symbol == 2)
    {
    symbol	 = '\4';
    system("color F4");
	}
	else if (symbol == 3)
    {
    symbol	 = '\5';
    system("color F0");
	}
	else if (symbol == 4)
    {
    symbol	 = '\6';
    system("color F0");
	}
		
	number = dice;
	
	if (number == 10)
	
	{
	printf(" _______________\n");
	printf("|               |\n");
	printf("| %d            |\n", number);
	printf("|  %c            |\n", symbol);
	printf("|               |\n");
	printf("|               |\n");
	printf("|               |\n");
	printf("|      %d       |\n", number);
	printf("|               |\n");
	printf("|               |\n");
	printf("|               |\n");
	printf("|            %c  |\n", symbol);
	printf("|           %d  |\n", number);
	printf("|_______________|\n\n");
	}
	
	else
	{
		if (dice  == 1)
    {
    	character = 'A';
	}
	
	else if (dice == 11)
	{
    	character = 'J';
	}
	
	else if (dice == 12)
	{
    	character = 'Q';
	}
	
	else if (dice == 13)
	{
    	character = 'K';
	}
	
	else
	{
		character = dice + '0';
	}
		
	printf(" _______________\n");
	printf("|               |\n");
	printf("|  %c            |\n", character);
	printf("|  %c            |\n", symbol);
	printf("|               |\n");
	printf("|               |\n");
	printf("|               |\n");
	printf("|       %c       |\n", character);
	printf("|               |\n");
	printf("|               |\n");
	printf("|               |\n");
	printf("|            %c  |\n", symbol);
	printf("|            %c  |\n", character);
	printf("|_______________|\n\n");
	}

printf("\n\nNext card: Yes(0), Exit(1) ");
flagch = getch();

if (flagch == '0')
{
	flag = 0;
}
if (flagch == '1')
{
	flag = 1;
}

system("cls");

}while (flag == 0);

printf("Thank you for playing!\n\n");		
		
    return 0;
}
