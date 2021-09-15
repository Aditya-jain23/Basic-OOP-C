//Program to convert decimal no. to binary no.
//Using do while 2
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int binum[10],n, rem, quot, i=1, j;
	cout<<"Enter any decimal number : ";
	cin>>n;     //Taking the numbers
	quot=n;
	do
	{
		binum[i++]=quot%2;    
		//Taking the binary in an array
		quot=quot/2;
	}while(quot!=0);
	cout<<"Equivalent binary value of "<<n<<" :\n";
	for(j=i-1; j>0; j--)
	{
		cout<<binum[j];
	}
	getch();
}
/*Output
Enter any decimal number : 30
Equivalent binary value of 30 :
11110
*/




