#include<iostream>
using namespace std;
int main()
{
	int a[]={1,2,3,4},i,n,sum=0;
	float avg;
	n=sizeof a/sizeof a[0];
	for(i=0;i<n;++i)
	{
		sum=sum+a[i];
	}
	avg=(float)sum/n;
	cout<<"avg"<<avg;
}
	
