#include <iostream>
#include <string>
using namespace std;

int main()
{
   string a;
   
   cin>>a;
   
   for(int i=0;i<a.length();i++)
   {
   	if(!(a[i] >= 'A' && a[i] <= 'z'))
   		continue;
   	
   	if(a[i] >='a' && a[i] <='z' )
   	{
   		a[i] -= 'a'-'A';
	   }
   }
   
   cout<<a;
   
      
    return 0;
}
