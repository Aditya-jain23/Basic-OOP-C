//Program to calculate factorial
//Using for loop 3
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,i,j=1;
	cout<<"Enter a number== ";//Taking the number
	cin>>n;
	for(i=1;i<=n;i++)
		j=j*i;    //Loop for factorial..
	cout<<"The factorial of "<<n<<" is "<<j;
	getch();
}

/*Output
Enter a number== 7
The factorial of 7 is 5040
*/



