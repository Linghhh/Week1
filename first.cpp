#include <iostream>
using namespace std;

int main()
{
    int a[20],sum = 0;
    for(int i=0;i<20;i++)
        cin>>a[i];
    
    for(int i=0;i<20;i++)
        for(int j=0;j<20-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    
    for(int i=0;i<20;i++)
        sum += a[i];
    
    cout<<"Max:"<<a[19]<<endl;
    cout<<"Min:"<<a[0]<<endl;
    cout<<"Average:"<<sum/20<<endl;
    
    
    
    return 0;
}
