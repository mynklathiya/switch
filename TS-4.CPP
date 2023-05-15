#include<stdio.h>
#include<conio.h>
main()
{       int n;
	clrscr();
	printf("enter the month of number");
	scanf("%d",&n);

	printf("\nprees 1");
	printf("\nprees 2");
	printf("\nprees 3");
	printf("\nprees 4");
	printf("\nprees 5");
	printf("\nprees 6");
	printf("\nprees 7");
	printf("\nprees 8");
	printf("\nprees 9");
	printf("\nprees 10");
	printf("\nprees 11");
	printf("\nprees 12");
	printf("enter your choice:-");
	scanf("%d",&n);

	switch(n)
	{
	 case 1 :
		  printf("january");
		  break;

	 case 2 :
		  printf("febuary");
		  break;

	 case 3 :
		  printf("march");
		  break;

	 case 4 :
		  printf("april");
		  break;

	 case 5 :
		  printf("may");
		  break;

	 case 6 :
		  printf("june");
		  break;

	 case 7 :
		  printf("july");
		  break;

	 case 8 :
		  printf("august");
		  break;

	 case 9 :
		  printf("september");
		  break;

	 case 10 :
		  printf("october");
		  break;

	 case 11 :
		  printf("november");
		  break;

	 case 12 :
		  printf("december");
		  break;

	default:
		printf("please enter proper choice value!");

}
 getch();
}