//Function to swap two numbers(Call by reference)
//Using functions 6
#include<iostream.h>
#include<conio.h>
void swap( int &a, int &b )//Function
{
   int s;
   s=a;
   a=b;
   b=s;
}
int main( )
{
	 int n1,n2;
	 clrscr();
	 cout<<"Enter two numbers= ";
	 cin>>n1>>n2;
	 swapnum(&n1, &n2);//Function call
	 cout<<"After interchanging the values:\n";
	 cout<<"n1="<<n1<<"  n2="<<n2;//After interchanging_
	 getch();
}
/*Output
Enter two numbers= 7415
8085
After interchanging the values:
n1=8085  n2=7415
*/






