//Program to calculate sum of series 1+2^2+3^3+4^4+_______+n^n
//Using while 2
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int i=1,n,p;
	long int sum=0;
	cout<<"Enter the number = ";
	cin>>n;          //taking the number
	while(i<=n)
	{
		p=pow(i,i); 
		//Pow gives ans. in float. So stored int
		sum=sum+p;
		i++;
	}
	cout<<"The sum of the series= "<<sum;
	getch();
}

/*Output
Enter the number = 5
The sum of the series= 3413
*/


