//Program to calculate sum of border
//Using 2D Array 5
#include<iostream.h>
#include<conio.h>
void main()
{
	int a[10][10],i,j,m,sum=0;
	clrscr();
	cout<<"Enter row and column of array=";
	cin>>m;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{	//Taking the elements
			cout<<"Enter element=";//Taking the elements 
			cin>>a[i][j];
		}
	}
	for(i=0;i<m;i++)
	{  	cout<<endl; //Outputing the array
		for(j=0;j<m;j++)//once outputting
			cout<<a[i][j]<<" ";

	}
	for (i=0;i<m;i++)
	{
		for (j=0;j<m;j++)
		{
			if (i==0||i==m-1||j==0||j==m-1)//sum
				sum += a[i][j];
		}
	}
	cout<<"Sum of the border element== "<<sum;
	getch();
}

/*Output
Enter row and column of array=3
Enter element=45
Enter element=72
Enter element=49
Enter element=81
Enter element=40
Enter element=98
Enter element=38
Enter element=23
Enter element=95

45 72 49
81 40 98
38 23 95 Sum of the border element== 501
*/
