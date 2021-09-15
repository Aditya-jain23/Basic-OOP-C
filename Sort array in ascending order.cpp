//Program to sort a array in assending order
//Using 1D Array 4
#include<iostream.h>
#include<conio.h>
void main()
{
	int i,n,j,A[50],t;
    clrscr();
    P: cout<<"Enter any the size of the array  == ";
	cin>>n;
    if(n>50)
    	{
    		cout<<"PLZ ENTER SIZE OF ARRAY <50";
    		goto P;
		}
    for(i=0;i<n;i++)
		{
    		cout<<"Enter any no.==";
    		cin>>A[i];
		}
    for(j=0;j<n;j++)
    {
    	for(i=0;i<n-1;i++)
    	{
        	if(A[i]>A[i+1])
            {
            		t=A[i];
                	A[i]=A[i+1];
            	    A[i+1]=t;
			}
		}
	}
    cout<<"\nARRAY IS== \n";
    for(i=0;i<n;i++)
    	cout<<" "<<A[i];
    getch();

}

/*Output
Enter any the size of the array  == 7
Enter any no.==15
Enter any no.==32
Enter any no.==51
Enter any no.==1
Enter any no.==25
Enter any no.==13
Enter any no.==14

ARRAY IS==
 1 13 14 15 25 32 51
*/

