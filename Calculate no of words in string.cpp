//Program to calculate no. of words in a string
//Using 1D Array 5
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	char a[100];
	int i,l,c=0;
	clrscr();
	cout<<"Enter string== ";
	gets(a);              //Taking the string
	l=0;
	while(a[l]!=0)        //For checking no. of spaces
		l++;
	for(i=0;i<l;i++)
		{
			if(a[i]==' ')
				c++;
		}
	cout<<"No. of words ==  "<<c+1;
	//No. of words =no. of spaces +1
	getch();
}


/*Output
Enter string== I need full marks ma'am
No. of words ==  5
*/





