#include <iostream>
using namespace std;

int main()
{
   int m,n,i,temp;
   cin>>m>>n;
   if(m<n)
   {
   	temp = m;
   	m  = n;
   	n = temp;
   }
   
   for(i=m;i>0;i++)
		if(i%m==0 && i%n==0)
   			{
				cout<<i;
   				break;
   			}
      
    return 0;
}
