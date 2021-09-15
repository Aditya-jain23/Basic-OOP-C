//Program to replace -ve elements with 0
//Using 1D array 3
#include<iostream.h>
#include<conio.h>
void main()
{
	int i,n,A[50];
	clrscr();
    cout<<"Enter the size of array: ";
    //taking the size of array
	cin>>n;
    cout<<endl;
    for(i=0;i<n;i++)
    {
    	cout<<"Enter "<<i<<" of A: ";
        cin>>A[i];
    }
    cout<<"The new array is--\n";
    cout<<endl;
    for(i=0;i<n;i++)
    {
    	if(A[i]<0)
        {
        	A[i]=0;
        }
        cout<<A[i]<<endl;

    }
    getch();
}

/*Output
Enter the size of array: 5

Enter 0 of A: 4
Enter 1 of A: 5
Enter 2 of A: 6
Enter 3 of A: -5
Enter 4 of A: -1000
The new array is--

4
5
6
0
0
*/



