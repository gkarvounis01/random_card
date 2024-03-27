#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main(void)
{

int arithmos, zari, flag = 0;
char symvolo, xaraktiras, flagch;

srand(time(NULL));

system("CHCP 1253>nul");

do
{
    zari = rand() % 13 + 1;
    symvolo = rand() % 4 + 1; 
    
    if (symvolo == 1)
    {
    symvolo	 = '\3';
    system("color F4");
	}
	else if (symvolo == 2)
    {
    symvolo	 = '\4';
    system("color F4");
	}
	else if (symvolo == 3)
    {
    symvolo	 = '\5';
    system("color F0");
	}
	else if (symvolo == 4)
    {
    symvolo	 = '\6';
    system("color F0");
	}
		
	arithmos = zari;
	
	if (arithmos == 10)
	
	{
	printf(" _______________\n");
	printf("|               |\n");
	printf("| %d            |\n", arithmos);
	printf("|  %c            |\n", symvolo);
	printf("|               |\n");
	printf("|               |\n");
	printf("|               |\n");
	printf("|      %d       |\n", arithmos);
	printf("|               |\n");
	printf("|               |\n");
	printf("|               |\n");
	printf("|            %c  |\n", symvolo);
	printf("|           %d  |\n", arithmos);
	printf("|_______________|\n\n");
	}
	
	else
	{
		if (zari  == 1)
    {
    	xaraktiras = 'A';
	}
	
	else if (zari == 11)
	{
    	xaraktiras = 'J';
	}
	
	else if (zari == 12)
	{
    	xaraktiras = 'Q';
	}
	
	else if (zari == 13)
	{
    	xaraktiras = 'K';
	}
	
	else
	{
		xaraktiras = zari + '0';
	}
		
	printf(" _______________\n");
	printf("|               |\n");
	printf("|  %c            |\n", xaraktiras);
	printf("|  %c            |\n", symvolo);
	printf("|               |\n");
	printf("|               |\n");
	printf("|               |\n");
	printf("|       %c       |\n", xaraktiras);
	printf("|               |\n");
	printf("|               |\n");
	printf("|               |\n");
	printf("|            %c  |\n", symvolo);
	printf("|            %c  |\n", xaraktiras);
	printf("|_______________|\n\n");
	}

printf("\n\nΕπόμενη κάρτα: Ναι(0), Έξοδος(1) ");
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

printf("Ευχαριστούμε που έπαιξες!\n\n");		
		
    return 0;
}
