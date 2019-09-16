//Generating Electricity Bill

#include<stdio.h>
#include<conio.h>

void main()
{
	long serno,pre,cur,units;    //Variable Declaration
	char name[20];               //Variable Declaration
	float amt;                   //Variable Declaration

	 	printf("Enter Service no: ");
	 	scanf("%ld" ,&serno);
	 	printf("Enter Name: ");
	 	scanf("%s" ,&name);
	 	printf("Enter previous month reading: ");
	 	scanf("%ld" ,&pre);
	 	current:
	 	printf("Enter current month reading: ");
	 	scanf("%ld" ,&cur);

	 		units=cur-pre;
	 		
	 	if(units<0)
	 	{
	 		printf("/a ...Check current month reading...");
	 		goto current;
	 	}	
	 	if(units<=50)
	 		amt=units*1.45;

	 	     else if(units<=100)
	 		{
	 			amt=50*1.45;
	 			amt=amt + (units-50)*2.8;
	 		}

	 		else if(units<=200)
	 		{
	 			amt=50*1.45;
	 			amt= amt + 50*2.8;
	 			amt= amt + (units-100)*3.05;
	 		}

	 		else if(units<=300)
	 		{
	 			amt=50*1.45;
	 			amt= amt + 50*2.8;
	 			amt= amt + 100*3.05;
	 			amt= amt + (units-200)*4.75;
	 		}

	 		else if(units<=500)
	 		{
	 			amt= 50*1.45;
	 			amt= amt + 50*2.8;
	 			amt= amt + 100*3.05;
	 			amt= amt + 100*4.75;
	 			amt= amt + (units-300)*6
	 		}

	 		else
	 		{
	 			amt= 50*1.45;
	 			amt= amt + 50*2.8;
	 			amt= amt + 100*3.05;
	 			amt= amt + 100*4.75;
	 			amt= amt + 200*6;
	 			amt= amt + (units-500)*6.25;
	 		}
	 	if(amt<67)
	 		amt=67;

	 			printf("Amount: %.2f" ,amt);
}