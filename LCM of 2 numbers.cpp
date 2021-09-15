//Function to calculate LCM of two no.
//Using function 5
#include<iostream.h>
#include<conio.h>
int lcm(int,int);
void main()
{
    int a,b,lc;
    clrscr();
    cout<<"Enter two numbers: ";
    cin>>a;
    cin>>b;
    lc=lcm(a,b);
    cout<<"LCM of "<<a<<" and "<<b<<" is "<<lc;
    getch();
}

//function to calculate l.c.m
int lcm(int a,int b)
{
    int m,n;
	m=a;
	n=b;
	while(m!=n)
	{
		if(m < n)
			m=m+a;
		else
			n=n+b;
	}
	return m;
}
/*Output
Enter two numbers: 4 5
LCM of 4 and 5 is 20
*/



