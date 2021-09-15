//Program to calculate the sum of 1+(1+2)+(1+2+3)+(1+2+3+4)...... til n
//Using functions 3
#include<iostream.h>
#include<conio.h>
int series(int);
void main()
{
	clrscr();
	int n,a;
	cout<<"Enter the number = ";
	cin>>n;
	a=series(n);   //Function call
	cout<<"The sum of series = "<<a;
	//After the working of function
	getch();
}
int series(int r)
{
	int t=0,i;
	for(i=1;i<=r;i++)//Loop for the series
		t=t+i*(i+1)/2;
	return t;
}

/*Output
Enter the number = 7
The sum of series = 84
*/





