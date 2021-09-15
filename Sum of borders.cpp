//Program to print the sum of borders
//Using nesting of loops-4
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[10][10];
	int i,j,r,s=0 ;
x: 	cout<<"Enter the no of rows= ";
	cin>>r;
	if(r>10)
	{
		cout<<"enter less then 100";
		goto x;
	}
	for(i=0;i<r;i++) //body of loop for taking the values
	{
		for(j=0;j<r;j++)
		{
			cout<<"\n enter elements of array= ";
			cin>>a[i][j];
		}
	}
	for(i=0;i<r;i++) //sum of vertical columns
		s=s+a[i][0]+a[i][r-1] ;
	for(i=1;i<r-1;i++) //sum of rows
	s=s+a[0][i]+a[r-1][i];
	cout<<"sum of borders is ="<<s; //sum of border
	getch();
}
/*Output
Enter the no of rows= 2

 enter elements of array= 5

 enter elements of array= 8

 enter elements of array= 6

 enter elements of array= 4
 sum of borders is =23
*/
