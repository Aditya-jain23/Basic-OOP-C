//Program to check character is vowel or not
//Using if Else 4
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	char a;
	cout<<"Enter the character= "; //Taking the char..
	cin>>a;
	if(a=='a'||a=='A'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'
                                         ||a=='U'||a=='e'||a=='E')
	//Condition of being a vowel..
		cout<<"The character is a vowel";
	else
		cout<<"The character is not a vowel";
	getch();
}

/*Output
Enter the character= T
The character is not a vowel
*/
