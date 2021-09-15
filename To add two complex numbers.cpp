//Structure to add two complex
//Using structures 4
#include<iostream.h>
#include<conio.h>
struct complex
{
    float real;
    float imag;
};
complex addComplexNumbers(complex, complex);
void main()
{
    clrscr();
    complex N,n1,n2,tN;
    cout << "For 1st complex number," << endl;
    cout << "Enter real and imaginary parts respectively:" << endl;
    cin >> n1.real >> n1.imag;
    cout << endl << "For 2nd complex number," << endl;
    cout << "Enter real and imaginary parts respectively:" << endl;
    cin >> n2.real >> n2.imag;
    tN = addComplexNumbers(n1, n2);
    cout << "Sum = "<<tN.real<<" "<< tN.imag<<"i";
    getch();
}
complex addComplexNumbers(complex n1,complex n2)
{
      complex t;
      t.real = n1.real+n2.real;
      t.imag = n1.imag+n2.imag;
      return(t);
}

/*Output
For 1st complex number,
Enter real and imaginary parts respectively:
67
83

For 2nd complex number,
Enter real and imaginary parts respectively:
123
56
Sum = 190 139i
*/
