//Program to shift the array k times in anticlockwise direction..
//Using 1D Array 6
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	int i=0, n, k, j;
	char ch, a[20];
	cout<<"Enter the string==  ";
	gets(a);
	cout<<"Enter a number== ";
	cin>>k;
	i=0;
	while(a[i]!='\0')
	{
		i++;
	}
	n=i;
	for(i=1;i<=k;i++)
	 {
		ch=a[n-1];
		for(j=n-2;j>=0;j--)
		{
			a[j+1]=a[j];
		}
		a[0]=ch;
	 cout<<"After step "<<i<<" the array is==\n";
	 cout<<a;
	 cout<<endl;
	 getch();
	 }
	getch();
}

/*Output
Enter the string==  Pratham
Enter a number== 4
After step 1 the array is==
mPratha
After step 2 the array is==
amPrath
After step 3 the array is==
hamPrat
After step 4 the array is==
thamPra
*/



