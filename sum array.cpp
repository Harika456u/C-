#include<iostream>
using namespace std;
int main()
{
	int a[]={1,2,3,4},sum=0,i,n;
	n=sizeof a/sizeof a[0];
	for(i=0;i<n;++i)
	{
		sum=sum+a[i];
	}
	cout<<"sum"<<sum;
}
	

