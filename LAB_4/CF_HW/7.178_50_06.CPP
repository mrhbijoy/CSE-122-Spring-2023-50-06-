//CODEFORCES PROBLEM NO - 263A
//CODEFORCES PROBLEM NAME - Beautiful Matrix
#include<iostream>
using namespace std; 
 
void display(int x,int y)
{
int out=abs(3-x)+abs(3-y);
cout<<abs(out)<<endl;
}
int m,n;
 
main( ) 
{  
      int  s[5][5];
      int  i, j;
	  for(i=0;i<5;i++)
	  {
	  	for(j=0;j<5;j++)
	  	{
	  		cin>>s[i][j];
               if(s[i][j]==1){
                m=i+1;
                n=j+1;
             }
		}
	  }
 
      display(m,n);
}