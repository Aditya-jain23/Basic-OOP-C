//Program to print Floyd's triangle
//Using nestign of loops 5
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int range,i,j,k=1;
	cout<<"Enter the no.of lines..=" ;
	//No.of lines;
	cin>>range;
	cout<<"\nFloyd's Triangle==\n";
	//Start of triangle
	for(i=1;i<=range;i++)
	{
		for(j=1;j<=i;j++,k++)
			cout<<k<<" ";
		cout<<"\n";
	}
	getch();
}

/*Output
Enter the no.of lines..=7

Floyd's Triangle==
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
22 23 24 25 26 27 28
*/




