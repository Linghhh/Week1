#include <iostream>
using namespace std;

int main()
{
	int a[3][3] = {{3,2,1},{6,7,8},{4,3,7}};
					
	int rmax,cmin;
	int r,c;
	int flag = 0;
	for(int i=0;i<3;i++)
	{
		rmax = a[i][0];
		c = 0;
		for(int j=1;j<3;j++)
		{
			if(rmax<a[i][j])
			{
				rmax = a[i][j];
				c = j;
			}	
		}
		
		cmin = a[i][c];
		r = 0;
		for(int m=0;m<3;m++)
		{
			if(cmin>a[m][c])
			{
				cmin = a[m][c];
				r = m;
			}
		}
		
		if(i == r)
		{
			cout<<"鞍点："<<a[i][c]<<endl;
			flag++;
		}
		
	}
	
	if(flag == 0)
	{
		cout<<"没有鞍点！";
	}
	return 0;
}
