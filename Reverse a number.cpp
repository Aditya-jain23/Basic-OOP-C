//Program to reverse a no.
//Using while 1
#include<iostream.h>
#include<conio.h>
void main()
{
	int no,fno,r,a;
    clrscr();
    cout<<"Enter any no.  == ";//Taking the no.
    cin>>no;
    a=no;
    fno=0;
    while(no>0)//While loop for reversing
    {
    	r=no%10;
        fno=fno*10+r;
        no=no/10;
	}
    cout<<"\nReverse of "<<a<<" is "<<fno;
    getch();
}

/*Output
Enter any no.  == 5453

Reverse of 5453 is 3545
*/




