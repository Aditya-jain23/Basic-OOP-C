//Program to insert an element at any position
//Using 1D Array 7
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[15],u,i,n,k;
	cout<<"Enter no. of elements in aray<14=";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element=";
		cin>>a[i];
	}
	cout<<"Enter an element which you want to insert=";
	cin>>k;
	cout<<"give the position== ";
	cin>>u;
	for(i=n;i>u-1;i--)
		a[i]=a[i-1];
	a[u-1]=k;
	cout<<"Now the Array is==\n";
	for(i=0;i<=n;i++)
		cout<<a[i]<<" ";
	getch();
}

/*Output
Enter no. of elements in aray<14=5
Enter element23
Enter element45
Enter element67
Enter element89
Enter element65
Enter an element which you want to insert=100
give the position== 3
Now the Array is==
23 45 100 67 89 65
*/

