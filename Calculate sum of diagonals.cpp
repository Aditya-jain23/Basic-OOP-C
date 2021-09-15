//Program to calculate sum of diagonals(m by m)
//Using 2D Array 3
#include<iostream.h>
#include<conio.h>
void main()
{
	int a[10][10],i,j,m,p=0;
	clrscr();
	cout<<"Enter row and column of array=";
	cin>>m;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{	//Taking the elements
			cout<<"Enter element=";
			cin>>a[i][j];
		}
	}
	for(i=0;i<m;i++)
	{  	cout<<endl; //Outputing the array
		for(j=0;j<m;j++)
			cout<<a[i][j]<<" ";

	}
	for(i=0;i<m;i++)
		p=p+a[i][i];//Sum of principle diagonal
	for(i=m-1,j=0;i>=0;i--,j++)
	{
		if(i!=j)
			p=p+a[i][j];//Sum of other diagonal
	}
	cout<<"/nSum of diagonals is =="<<p;
	getch();
}


/*Output
Enter row and column of array=4
Enter element=2
Enter element=5
Enter element=667
Enter element=4
Enter element=3
Enter element=7
Enter element=8
Enter element=4
Enter element=5
Enter element=6
Enter element=8
Enter element=89
Enter element=2
Enter element=1
Enter element=4
Enter element=9

2 5 667 4
3 7 8 4
5 6 8 89
2 1 4 9 
Sum of diagonals is ==46
*/






