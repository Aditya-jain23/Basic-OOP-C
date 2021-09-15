//Program to print Fibonacci series
//Using for loop 2
#include<iostream.h>
#include<conio.h>
void main()
{
	int a1,a2,i,Nn,N;
    clrscr();
    a1=0;
    a2=1;
    cout<<"Enter the no. of digits of the series==  ";
    cin>>Nn;
    //Taking no. of terms from user
    cout<<"The series is\n";
    cout<<a1<<" ";
    cout<<a2<<" ";
    //Outputting the 1st 2 terms
    for(i=3;i<=Nn;i++)
    {
    	N=a1+a2;
        cout<<N<<" ";
        a1=a2;
        a2=N;
	}
    getch();
}

/*Output
Enter the no. of digits of the series==  13
The series is
0 1 1 2 3 5 8 13 21 34 55 89 144
*/




