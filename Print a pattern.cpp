//Program to print a pattern
// Using if else 1..
#include<conio.h>
#include<iostream.h>
void main()
{
	int i,j,N; char m;
    clrscr();
    cout<<"Enter the no. == "; //Taking the no.
    cin>>N;
    cout<<"Enter the character = "; //Taking a character
    cin>>m;
    for(i=1;i<=N;i++)//Loop of for the pattern..
    {   cout<<"\n";
    	if(i%2==0)
        {	for(j=1;j<=i;j++)
        	cout<<m;
        }
        else
        	{
			for(j=1;j<=i;j++)
        	cout<<j;
            }
	}
    getch();
}


/*Output
Enter the no. == 9
Enter the character = &

1
&&
123
&&&&
12345
&&&&&&
1234567
&&&&&&&&
123456789
*/

