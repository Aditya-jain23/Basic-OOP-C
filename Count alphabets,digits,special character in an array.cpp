//Program to count aphabets,digits,special character in an array
//Using string 4
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
    clrscr();
    char a[20];
    int alphabets=0,digits=0,special=0,i=0;
    cout<<"Enter the string = ";
    gets(a);
    while(a[i]!='\0')
    {
	if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
		alphabets++;
	else if(a[i]>='0' && a[i]<='9')
		digits++;
	else
		special++;

	i++;
    }
    cout<<"No.of alphabets=="<<alphabets;
    cout<<"\nNo.of digits=="<<digits;
    cout<<"\nNo.of special charaters=="<<special;
    getch();
}

/*Output
Enter the string = 29states**!!
No.of alphabets==6
No.of digits==2
No.of special charaters==4
*/




