//Program to calculate volume of 4 3D objects
//Switch case 1
#include<iostream.h>
#include<conio.h>
void main()
{   int K;
	float A,B,C,D;
    clrscr();
	cout<<"ENTER 1 FOR VOLUME OF CONE ";
	cout<<"\nENTER 2 FOR VOLUME OF SPHERE " ;
	cout<<"\nENTER 3 FOR VOLUME OF CYLINDER ";
	cout<<"\nENTER 4 FOR VOLUME OF CUBE"<<"\n"; //Menu for user
	cin>>K;     //Taking the object no. as per the menu..
    switch (K)
    {
    case 1:cout<<"ENTER THE RADIUS OF CONE== ";//Cone
		   cin>>A;
           cout<<"THE HEIGHT OF CONE== ";
           cin>>B;
           D=0;
           C=(3.14)*A*A*B/3;
           cout<<"THE VOLUME OF THIS CONE ==" <<C;
           break;
    case 2:cout<<"ENTER THE RADIUS OF SPHERE== ";//Spere
           cin>>A;
           B=0 ;
           C=0;
           D=(4/3)*(3.14)*A*A*A;
           cout<<"VOLUME OF THE SPHERE=="<<D;
           break;
	case 3:cout<<"ENTER THE RADIUS OF CYLINDER== ";//Cylinder
           cin>>A;
           cout<<"ENTER THE HIEGHT OF CYLINDER== ";
           cin>>B;
           C=0;
           D=(3.14)*A*A*B;
           cout<<"VOLUME OF THE =="<<D;
           break;
	case 4:cout<<"ENTER THE SIDE OF CUBE== ";//Cube
           cin>>A;
           B=0 ;
           C=0;
           D=A*A*A;
           cout<<"VOLUME OF THE CUBE=="<<D;
           break;
	default : cout<<"SORRY. YOU GAVE THE CASE OUT OF MENU......" ;
    }
	getch();
}


/*Output
ENTER 1 FOR VOLUME OF CONE
ENTER 2 FOR VOLUME OF SPHERE
ENTER 3 FOR VOLUME OF CYLINDER
ENTER 4 FOR VOLUME OF CUBE
4
ENTER THE SIDE OF CUBE== 17
VOLUME OF THE CUBE==4913
*/








