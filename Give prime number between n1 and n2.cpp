//Program to give Prime no. b/w n1 & n2
//Using fuctions 4
#include<iostream.h>
#include<conio.h>
int checkPN(int);
void main()
{
	clrscr();
    	int n1,n2,ch;
	cout<<"Enter two positive integers=";
   	cin >> n1 >> n2;
	cout << "Prime numbers between " << n1 << " and " << n2 << " are: ";
	for(int i = n1+1; i < n2; ++i)
    	{
        // If i is a prime number, ch will be equal to 1
        ch=checkPN(i);
	if(ch!=0)
    	    cout << i << " ";
    	}
    getch();
}
// user-defined function to check prime number
int checkPN(int n)
{
    int c=1,j;

    for(j=2;j<=n/2;++j)
    {
        if (n%j == 0)
        {
            c=0;
            break;
        }
    }
    return c;
}


/*Output
Enter two positive integers=12
34
Prime numbers between 12 and 34 are: 13 17 19 23 29 31
