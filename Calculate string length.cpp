//Function to calculate string lenght
//Using Function 2
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int length(char[]);    //Function
void main()
{
	int a;
	char A[20];
	clrscr();
	cout<<"Enter string =";
	gets(A);       //The string
	a=length(A);    //Function call
	cout<<"\nNo.of character = "<<a;
	getch();
}
int length(char c[])
{
	int b,i;
	for(i=0,b=0;c[i]!='\0';i++)
		b++; //Counting the character
	return b;
}


/*Output
Enter string =Pratham

No.of character = 7
*/






