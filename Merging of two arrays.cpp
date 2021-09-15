//Programs to merging of two arrays[1d and 2d]
//Using 1D Array 2
#include<iostream.h>
#include<conio.h>
void main()
{
	int a[10],b[10][10]={0},i,j,na;
    clrscr();
	P:cout<<"Enter the size of array= ";
    cin>>na;
	if(na>10)
    	goto P;
    for(i=0;i<na;i++)
    {
    	cout<<"\nEnter the no.  ";
        cin>>a[i];                //Taking the value of 1d array
	}
	//Two loops for placing values in 2d array on borders
     for(j=0;j<na;j++)
    {
    	b[0][j]=a[j];
        b[j][0]=a[j];
	}
    for(i=0;i<na;i++)
    {
    	b[i][na-1]=a[na-1-i];
        b[na-1][i]=a[na-1-i];
    }
    cout<<"\nThe new array is== ";
    for(i=0;i<na;i++)
    {	cout<<"\n";
        for(j=0;j<na;j++)
        {
         	cout<<" "<<b[i][j];
		}
	}
    getch();

}


/*Output
Enter the size of array= 5

Enter the no.  5

Enter the no.  8

Enter the no.  3

Enter the no.  6

Enter the no.  4

The new array is==
5 8 3 6 4
8 0 0 0 6
3 0 0 0 3
6 0 0 0 8
4 6 3 8 5
*/




