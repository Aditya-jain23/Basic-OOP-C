//Program to print a Pattern(2)
//Using nesting of loops 1.. 
#include<iostream.h>
#include<conio.h>
void main()
{
 int i,j,n;
 clrscr();
 cout<<"Enter any number==  ";   //Taking an interger
 cin>>n;
 cout<<"\n";
 for(i=1;i<=n;i++)                //Loop for pattern
 {
 	cout<<"\n";
    for(j=1;j<=i;j++)
    	cout<<j;
    for(j=(2*n-1)-2*i;j>=1;j--)
    	cout<<" ";
    if(i==n)
    	j=n-1;
    else
    	j=i;
    for(;j>=1;j--)
    	cout<<j;
 }
 getch();
}


/*Output
Enter any number==  9


1                      1
12                   21
123                321
1234             4321
12345          54321
123456       654321
1234567    7654321
12345678 87654321
12345678987654321
*/
