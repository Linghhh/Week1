#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  float R;
  float x1,x2,y1,y2,z1,z2;
  float d;
  cout<<"ÊäÈëR£º";
  cin>>R;
  cout<<"ÊäÈëx1,x2,y1,y2£º";
  cin>>x1>>x2>>y1>>y2;
  z1 = sqrt(R*R-x1*x1-y1*y1);
  z2 = sqrt(R*R-x2*x2-y2*y2);
  d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2*y1)+(z2-z1)*(z2-z1));
  
  cout<<d;
  
    return 0;
}
