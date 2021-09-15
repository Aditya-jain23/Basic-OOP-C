//Program to check array is same or not
//Using 1D array-1
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
    cout<<"Enter the size of array: ";
    int n; cin>>n;
    int A[500],B[500];
    cout<<endl<<endl;
    int i;
    for(i=0;i<n;i++)
    {
    	cout<<"Enter "<<i<<" of A: ";  //Array A
        cin>>A[i];
    }
    cout<<endl;
    int c=0;
    for(i=0;i<n;i++)
    {
    	cout<<"Enter "<<i<<" of B: ";           //Array B
        cin>>B[i];
    }
    for(i=0;i<n;i++)
    {
    	if(A[i]!=B[i])   //Comparing
        {
        	c++;
        }
    }
    if(c==0)
    	cout<<"\nThe arrays are exactly same!";
    else
    	cout<<"\nThe arrays are not exactly same!";
    getch();
}

/*Output
Enter the size of array: 4


Enter 0 of A: 0
Enter 1 of A: 1
Enter 2 of A: 2
Enter 3 of A: 3

Enter 0 of B: 0
Enter 1 of B: 12
Enter 2 of B: 2
Enter 3 of B: 12

The arrays are not exactly same!
*/




