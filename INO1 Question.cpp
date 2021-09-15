//INOI Question
//INOI 1
#include<iostream.h>
#include<conio.h>
int summax(int[],int[],int);
void main()
{
	int n,i,j,a[10],b[10];
    clrscr();
    cout<<"Enter the numbers";
    cin>>n;
    for(i=0;i<n;i++)
    	{
        	cout<<i<<" for a==";
            cin>>a[i];
            cout<<i<<" for b==";
            cin>>b[i];
		}
    i=summax(a,b,n);
    cout<<"the max sum of these array ==  "<<i;
    getch();
}
int summax(int c[],int d[],int g)
{
	int i,j,m,sum,maxx;
    maxx=c[0];
    for(i=0;i<g;i++)
    {
    	for(j=0;j<g;j++)
        {   if(j>=i)
        	{
        		sum=c[i]+c[j];
            	if(i==j)
					sum=sum-c[i];
                {
                	for(m=i+1;m<j;m++)
                    {
                    	sum=sum+d[m];
					}
               	    maxx=(sum>=maxx)?sum:maxx;
			  	}
			}
            else
            {
             	sum=c[i]+c[j];
                for(m=i;m<g;m++)
                	sum=sum+d[m];
                for(m=0;m<j;m++)
                	sum=sum+d[m];
                maxx=(sum>=maxx)?sum:maxx;
			}
		}
	}
    return maxx;
}
	


