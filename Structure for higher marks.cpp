//Structure for higher marks
//Using structure 1
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct student      //declaring the structure
	{
		int mark;
		char name[15];
	}
void main()
{
	clrscr();
	student s1,s2;
	cout<<"Enter name of both student=";
	gets(s1.name);    //Names of student1 & student 2
	gets(s2.name);
	cout<<"Marks of "<<s1.name<<"= ";
	cin>>s1.mark;
	cout<<"Marks of "<<s2.name<<"= ";
	cin>>s2.mark;
	if(s1.mark>s2.mark)  //Marks comparisen
		cout<<"Marks of "<<s1.name<<" is higher..";
	else
		cout<<"Marks of "<<s2.name<<" is higher..";
	getch();
}

/*Output
Enter name of both student=Pratham
Aditya
Marks of Pratham= 95
Marks of Aditya= 93
Marks of Pratham is higher..
*/
