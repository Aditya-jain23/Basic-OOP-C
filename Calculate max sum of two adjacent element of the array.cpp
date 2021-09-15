//Program to calculate max sum of two adjacent element of the array
//Using function 8
#include<iostream.h>
#include<conio.h>
int max(int a[],int);
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
	t=max(A,n);
	cout<<"The max sum of adjacent elements of the array=="<<t;
	getch();
}
int max(int a[],int b)
{
	int i,j,max;
	max=a[0]+a[1];
	for(i=1;i<b-1;i++)
		max=(max>(a[i]+a[i+1]))?max:a[i+1]+a[i];
	return max;
}
/*Output
Enter any the size of the array  == 5
Enter any no.==74
Enter any no.==15
Enter any no.==19
Enter any no.==86
Enter any no.==63
The max sum of adjacent elements of the array==149
*/
