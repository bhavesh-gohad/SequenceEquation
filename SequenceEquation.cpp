#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int index1=0,x=0;
	
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	while(++x && x<=n)
	{
		for(int i=0;i<n;i++)
		{
			if(a[i] == x)
			{
				index1 = i+1;
				
				for(int k=0;k<n;k++)
				{
					if(a[k] == index1)
					{
						cout<<k+1<<endl;
						break;
					}
				}
			}
		}
	}
	return 0;
}
