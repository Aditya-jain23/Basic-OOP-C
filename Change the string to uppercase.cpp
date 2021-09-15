//Program to change the string to uppercase
//Using string 3
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	int i,l;
	char a[15];
	cout<<"Enter the string= ";
	gets(a);   //Taking the string
	i=0;
	while(a[i]!='\0')
		i++;
	l=i;//Length of string
	cout<<"\nThe Array is "<<a;//Once outputing the array
	for(i=0;i<l;i++)
	{
		if(a[i]>='a'&&a[i]<='z')
			a[i]=a[i]-32;//Changing the array
	}
	cout<<"\nAfter the change::\n"<<a;
	getch();
}

/*Output
Enter the string= Pratham

The Array is Pratham
After the change::
PRATHAM
*/





