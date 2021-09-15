//Program of a Simple Calculator
//Using switch case 2
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	float a, b, res;
	char choice, ch;
	do
	{
		cout<<"1.Addition\n";
		cout<<"2.Subtraction\n";
		cout<<"3.Multiplication\n";
		cout<<"4.Division\n";
		cout<<"5.Exit\n\n";
		cout<<"Enter Your Choice : ";
		cin>>choice;
		switch(choice)
		{
			case '1' : cout<<"Enter two number : ";
				cin>>a>>b;
				res=a+b;
				cout<<"Result = "<<res;
				break;
			case '2' : cout<<"Enter two number : ";
				cin>>a>>b;
				res=a-b;
				cout<<"Result = "<<res;
				break;
			case '3' : cout<<"Enter two number : ";
				cin>>a>>b;
				res=a*b;
				cout<<"Result = "<<res;
				break;
			case '4' : cout<<"Enter two number : ";
				cin>>a>>b;
				res=a/b;
				cout<<"Result = "<<res;
				break;
			case '5' : goto P;
				break;
			default : cout<<"Wrong Choice..!!";
				break;
		}
		cout<<"\n------------------------------------\n";
	}while(choice!=5);
P:	getch();
}

/*Output

Enter Your Choice : 1
Enter two number : 56
76
Result = 132
------------------------------------
1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Exit

Enter Your Choice : 2
Enter two number : 35
243
Result = -208
------------------------------------
1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Exit

Enter Your Choice : 5

*/




