//Structure of 4 Voters and  showing the ones whose age>60
//Using structures 3
#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct voter
{
	int idno;
	char name[20];
	char address[60];
	int age;
};

void main()
{
	clrscr();
	voter ward[4];		//Array of stucture
	for(int i=0; i<4; i++)  //Taking information of only 4 voters
	{
		cout<<"Voter No. "<<i+1;
		cout<<"\nEnter id no: ";
		cin>>ward[i].idno;
		cout<<"Enter Name: ";
		gets(ward[i].name);
		cout<<"Enter Address: ";
		gets(ward[i].address);
		cout<<"Enter Age: ";
		cin>>ward[i].age;
		cout<<"\n";
	}
	cout<<"Voters with age more than 60 are:\n";
	for(i=0; i<4; i++)
	{
		if(ward[i].age > 60)                //Checking the age
		{
cout<<"\nId no: "<<ward[i].idno;//showing idno.                                                                    
			cout<<"\nName: "<<ward[i].name;//showing name.
			cout<<"\n";
		}
	}
	getch();
}

/*Output
Enter id no: 7787
Enter Name: Pratham
Enter Address: Indore
Enter Age: 50

Enter id no: 8769 
Enter Name: mugdha
Enter Address: Agra
Enter Age: 67

Voter No. 3
Enter id no: 8765
Enter Name: manu
Enter Address: bhopal
Enter Age: 67

Voter No. 4
Enter id no: 6534
Enter Name: sandeep
Enter Address: kanpur
Enter Age: 90

Voters with age more than 60 are:

Id no: 8769
Name: mugdha

Id no: 8765
Name: manu

Id no: 6534
Name: sandeep

*/




