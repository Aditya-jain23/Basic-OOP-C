//Program to calculate sum of all digits
//Using do while 1
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,a,i,sum=0;
	cout<<"Enter a number = ";
	//Taking the number
	cin>>n;
	a=n;
	do
	{
		sum=sum+n%10;
		n=n/10; //Loop for counting
	}while(n>0);
	cout<<"Sum of all digits of "<<a<<" is "<<sum;
	getch();
}

/*Output
Enter a number = 7415
Sum of all digits of 7415 is 17
*/
