//Program to change the case of a character
//Using if else 2
#include<conio.h>
#include<iostream.h>
void main()
{
char k;
clrscr();
cout<< "Enter a character=  ";
cin>> k;
if(k>='A' && k<='Z')//Checkinng the condition of uppercases.
 	{
 		cout<<"\nIt is in uppercase";
 k=k+32;
 		cout<< "\nIts lower case is " <<k;
 	}
else if(k>='a'&&k<='g')//Checking the condition of lowercase.
 	{
 cout<<"\nIt is in lowercase";
 		k=k-32;
 		cout<<"\nIts uppercase is "<<k;
 }
else//Condition for an alphabet..
 	cout<<"Not an alphabet";
getch();
}


/* Output
Enter a character=  H

It is in uppercase
Its lower case is h */



