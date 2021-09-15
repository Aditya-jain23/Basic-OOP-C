//Program to calculate sum of element each row
//Using 2D Array 2
#include<iostream.h>
#include<conio.h>
void main()
{
	int a[10][10],i,j,n,m,p=0;
	clrscr();
	cout<<"Enter row and column of array=";
	cin>>m>>n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{	//Taking the elements
			cout<<"Enter element=";
			cin>>a[i][j];
		}
	}
	for(i=0;i<m;i++)
	{  	cout<<endl; //Outputing the array
		for(j=0;j<n;j++)
			cout<<a[i][j]<<" ";

	}
	for(i=0;i<m;i++)
	{
		cout<<endl;  //Sum of each row___
		for(j=0;j<m;j++)
			p=p+a[i][j];
		cout<<"The sum of row "<<i+1<<" is= "<<p;
		p=0;
	}
	getch();
}




/*Output
Enter row and column of array=3
3
Enter element=45
Enter element=67
Enter element=89
Enter element=23
Enter element=51
Enter element=67
Enter element=83
Enter element=56
Enter element=81

45 67 89
23 51 67
83 56 81
The sum of row 1 is= 201
The sum of row 2 is= 141
The sum of row 3 is= 220
*/





