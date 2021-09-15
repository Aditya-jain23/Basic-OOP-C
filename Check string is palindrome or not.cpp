//Program to check the string is palindrome or not..
//Using strings 1
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	int l,i;
	clrscr();
	char a[25],ch;
	ch=2;
	cout<<"Enter the string:: ";
	gets(a);
	i=0;
	while(a[i]!='\0')
		i++;
	l=i-1;
	for(i=0;i<l/2;i++)
	{
		if(a[i]!=a[l-i])
			goto Q;
	}
	cout<<"It is a palindrom.."<<ch;
	goto P;
	Q: cout<<"Not palindrom..";
	P:getch();

}

/*Output
Enter the string:: PrathamahtarP
It is a palindrom..☻
*/





