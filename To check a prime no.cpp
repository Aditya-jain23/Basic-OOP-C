//Program to check a no. is Prime no. or if not prime no. of factors
//Using for loop 1
#include<iostream.h>
#include<conio.h>
void main()
{
	int n,i,c=2;
    clrscr();
    cout<<"Enter a number==  ";//Enter the no.
    cin>>n;
    cout<<"Factors are \n1 ";  //1 is a factor of all
    for(i=2;i<=(n/2);i++)
    {
    	if(n%i==0)
           {	cout<<"\n"<<i;
            	c=c+1;
           }
	}
    cout<<"\n"<<n;
    cout<<"\nTotal no. of factors are "<<c; //No. of factors
    if(c==2)
    	cout<<"\nThe given no. is prime";
	//If only two factors its prime
    getch();
}


/*Output of prime
Enter a number==  19
Factors are
1
19
Total no. of factors are 2
The given no. is prime



Output for composite no.
Enter a number==  36
Factors are
1
2
3
4
6
9
12
18
36
Total no. of factors are 9
*/




