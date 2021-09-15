//Function of calculating HCF
//Using function 1
#include<iostream.h>
#include<conio.h>
int HCF(int,int);
void main()
{
	int x,y,z;
	clrscr();
	cout<<"\nEnter 1st no. :";
	cin>>x;                   //taking no.1
	cout<<"\nEnter 2nd no. :";
	cin>>y;                   //taking no.2
	z=HCF(x,y);               //function call and taking value in z
	cout<<"\nThe H.C.F. is :"<<z;
	getch();
}
int HCF(int x,int y)
{
	int p=1,i;
	for(i=2;i<=x;i++)  //loop for finding the hcf in p
	{
		if(x%i==0&&y%i==0)
		{
		x=x/i;
		y=y/i;
		p=p*i;
		i--;
		}
    }
return p;               //returning the value of p..
}


/*Output
Enter 1st no. :17

Enter 2nd no. :153

The H.C.F. is :17
*/


