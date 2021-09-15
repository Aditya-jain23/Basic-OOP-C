//Program to print the maximum of each column
//Using 2D Array 1
#include<iostream.h>
#include<conio.h>
void main()
{
	int a[10][10],i,j,n,m,p;
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
	for(j=0;j<n;j++)
	{
		cout<<endl;  //Comparising..._______
		p=a[0][j];
		for(i=1;i<m;i++)
			p=(p>a[i][j])?p:a[i][j];
		cout<<"Max no. in column "<<j+1<<" is= "<<p;
	}
	getch();
}


/*Output
Enter row and column of array=3
3
Enter element=45
Enter element=67
Enter element=89
Enter element=90
Enter element=37
Enter element=87
Enter element=34
Enter element=76
Enter element=53

45 67 89
90 37 87
34 76 53
Max no. in column 1 is= 90
Max no. in column 2 is= 76
Max no. in column 3 is= 89
*/




