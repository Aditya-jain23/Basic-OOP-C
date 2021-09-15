//Program to find Largest no. of the three
// Using if Else 3
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n1,n2,n3,m;
	cout<<"Enter number 1== ";
	cin>>n1;
	cout<<"Enter number 2== ";
	cin>>n2;
	cout<<"Enter number 3== ";
	cin>>n3;               
	//Taking the three numbers
	if(n1>n2)
	{
		if(n1>n3)
			m=n1;
		else
			m=n3;
	}
	else
	{
		if(n2>n3)
			m=n2;
		else
			m=n3;
	}
	cout<<"The largest of these 3 is "<<m;
	getch();
}

/*Output
Enter number 1== 2743
Enter number 2== -3432
Enter number 3== 4764
The largest of these 3 is 4764
*/



