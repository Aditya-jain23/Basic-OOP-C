//Program to calculate max difference b/w two array’s element
//Using 1D Array 8
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int diff,large,arr[50],n,i,small;
	cout<<"Enter Array Size (max 50) : "; //Size
	cin>>n;
	cout<<"Enter array elements : ";
	for(i=0; i<size; i++)        //Elements
	{
		cout<<"Enter elements= ";
		cin>>arr[i];
	}
	large=arr[0];
	small=arr[0];
	for(i=0; i<size; i++)
	{
		if(large<arr[i])
			large=arr[i];
		if(small>arr[i])
			small=arr[i];
	}
	diff=large-small;
	cout<<"The max difference b/w two numbers is this array is "<<diff;
	getch();
}

/*Output
Enter Array Size (max 50) : 5
Enter array elements : Enter elements= 23
Enter elements= 45
Enter elements= 5
Enter elements= 5
Enter elements= 67
The max difference b/w two numbers is this array is 62
*/

