//Program to print a pattern(3)
// Using nesting of loop 2
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,x,k,j,i;
	k=0;
	cout<<"Enter the number";
	cin>>n;
	cout<<"\n";
	x=n+1;
	for(i=1;i<=2*n-1;i++)
	{
		(i<=n)?x--:x++;
		if((i==1)||i==(2*n-1))
		{
			for(j=1;j<=(2*n-1);j++)
			{
				if(j<=n)
					k++;
				else
					k--;
				cout<<k;
			}
			k=0;
			cout<<endl;
		}
		else
		{
			for(j=1;j<=x;j++)
				cout<<j;
			for(j=1;j<=(2*n-1-2*x);j++)
				cout<<" ";
			for(j=x;j>=1;j--)
				cout<<j;
			cout<<endl;

		}
	}
	getch();
}


/*Output
Enter the number9

12345678987654321
12345678  87654321
1234567     7654321
123456         654321
12345            54321
1234               4321
123                  321
12                      21
1                         1
12                      21
123                  321
1234               4321
12345           54321
123456        654321
1234567    7654321
12345678 87654321
12345678987654321

*/





