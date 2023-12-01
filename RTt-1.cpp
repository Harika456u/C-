#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cout<<"enter an number"<<endl;
	cin>>n;
	for(i=0;i<n;++i)
	{
		for(k=0;k<=n-i;++k)
		{
			cout<<"";
		}
		for(j=1;j<=i;++j)
		{
			cout<<i,j,k,n;
		}
		cout<<"\n";
	}
		}
		
	

