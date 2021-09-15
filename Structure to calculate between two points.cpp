//Structure to calculate distance b/w two points
//Using structure 2
#include<iostream.h>
#include<conio.h>
#include<math.h>
struct cordnts
{
	float x,y;
};
void main()
{
	cordnts c1,c2;
	float dis;
	clrscr();
	cout<<"Enter coordinates 1=";  //taking the coordinates
	cin>>c1.x>>c1.y;
	cout<<"Enter coordinates 2=";
	cin>>c2.x>>c2.y;
	dis=sqrt((c1.x-c2.x)*(c1.x-c2.x)+(c1.y-c2.y)*(c1.y-c2.y));//formula
	cout<<"\nThe distance b/w 2 given points is "<<dis;
	getch();
}

/*Output
Enter coordinates 1=67
4
Enter coordinates 2=54
9

The distance b/w 2 given points is 13.928389
*/
of





