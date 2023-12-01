#include<iostream>
using namespace std;
int main()
{
	int i,n,m,sum=0;
	cout<<"enter a number"<<endl;
	cin>>n;
	while(n>0)
	{
		m=n%10;
		sum=sum+m;
		n=n/10;
		cout<<"the sum of digits"<<sum;
	}
}
