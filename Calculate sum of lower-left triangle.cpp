//Program to calculate sum of lower-left triangle(including diagonals)
//Using 2D Array 4
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
			if(i>=j)
				p=p+a[i][j];
			//Taking the sum side by side
		}
	}
	for(i=0;i<m;i++)
	{  	cout<<endl; //Outputing the array
		for(j=0;j<m;j++)
			cout<<a[i][j]<<" ";

	}
	cout<<"/nThe sum of lower left triangle is "<<p;
	getch();
}


/*Output
Enter row and column of array=3
Enter element=456
Enter element=856
Enter element=234
Enter element=916
Enter element=453
Enter element=567
Enter element=781
Enter element=658
Enter element=987

456 856 234
916 453 567
781 658 987 /nThe sum of lower left triangle is 4251
