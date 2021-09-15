//Program to a pattern(4)
//Using nesting of loops 6
#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int i,j,n;
    cout<<"Enter a number=";  //taking the number
    cin>>n;e
    for(i=1; i<=n; i++)
    {
	for(j=i; j<n; j++)
	    cout << " ";loops of spaces
	for(j=1; j<=(2*i-1); j++)
	{
	    if(i==n || j==1 || j==(2*i-1))
		cout << "*";  //* on the border
	    else
		cout << " ";//Spaces inside the triangle
	}
	cout <<endl;
    }
	getch();
}

/*Output
Enter a number=10
            *
         *      *
       *          *
      *             *
     *                *
    *                   *
   *                      *
  *                         *
 *                            *
*******************

*/

