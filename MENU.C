#include<stdio.h>
#include<conio.h>
void main()
{
	int ch,n,i,fact=1,count=0;
	clrscr();
	while(ch!=4)
	{
		printf("***MENU***\n");
		printf("1.Factorial of a number\n2.Prime or not\n3.Odd or even\n4.EXIT\n");
		printf("ENTER YOUR CHOICE");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
		printf("FACTORIAL OF NUMBER\n");
		printf("ENTER A NUMBER:");
		scanf("%d",&n);
		for(i=n;i>0;i--)
		{
			fact=fact*i;
		}
		printf("Factorial of %d is %d",n,fact);
		break;
		case 2:
		printf("PRIME OR NOT\n");
		printf("ENTER A NUMBER:");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			count++;
		}
		if(count==2)
			printf("%d is prime number",n);
		else
			printf("%d is not a prime number",n);
		break;
		case 3:
		printf("ODD OR EVEN\n");
		printf("ENTER A NUMBER:");
		scanf("%d",&n);
		if(n%2==0)
			printf("%d is even number",n);
		else
			printf("%d is odd number",n);
		break;
		case 4:
			printf("EXIT");
			break;
		}
		getch();
}
	}