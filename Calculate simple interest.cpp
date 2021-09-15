//Function to calculate simple intrest
//Using function 7
#include<iostream.h>
#include<conio.h>
int rate(int ,int ,int);
void main()
{
	clrscr();
	int p,r,t,si;
	cout<<"Enter principle ";//Taking the priciple
	cin>>p;
	cout<<"Enter rate ";//Taking the rate 
	cin>>r;
	cout<<"Enter time ";//taking time in years
	cin>>t;
	si=rate(p,r,t);//Fuction call
	cout<<"\nSimple Intrest == "<<si;
	getch();
}
int rate(int a,int b,int c)
{
	int i;
	i=a*b*c/100;
	return i;
}
/*Output
Enter principle 100
Enter rate 12
Enter time 5

Simple Intrest == 60
*/







