//Program to print dimond pattern..
//Using nesting of loops-3
#include<iostream.h>
#include<conio.h>
void main()
{
	int n,j,i;
	clrscr();
	cout<<"Enter the value n:";
	//taking the numbers
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i);j++)
		//loops for spaces
			cout<<" ";
		for(j=1;j<=i;j++)
			cout<<j;
		for(j=i-1;j>=1;j--)
			cout<<j;
		cout<<"\n";
	}
	for(i=n-1;i>=1;i--)
	{
		for(j=1;j<=(n-i);j++)
			cout<<" ";
		for(j=1;j<=i;j++)
			cout<<j;
		for(j=i-1;j>=1;j--)
			cout<<j;
		cout<<"\n";
	}
	getch();
}
/*Output
Enter the value n:5
        1
      121
    12321
  1234321
123454321
  1234321
    12321
      121
    1

*/





