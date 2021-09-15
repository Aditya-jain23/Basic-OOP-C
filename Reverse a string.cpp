//Program to reverse a string
//Using strings 2
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	char str[20], temp;
	int i=0, j;
	cout<<"Enter the String : ";
	//Taking the string
	gets(str);
	while(str[i]!='\0')
	//Loop for string length
		i++;
	j=i-1;
	i=0;
	while(i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	cout<<"Reverse of the String = "<<str;
	getch();
}

/*Output
Enter the String : Pratham
Reverse of the String = mahtarP
*/






