#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
  int num[6] = {0};
  int temp;
  
  srand((unsigned)time(NULL));
  for(int i=0;i<10000;i++)
  {
  	temp = 1+rand()%6;
  	num[temp-1]++;
  }
  
  for(int i=0;i<6;i++)
  	cout<<i+1<<": "<<num[i]<<"´Î"<<endl;
  	
    return 0;
}
