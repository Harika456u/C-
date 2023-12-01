#include<iostream>
using namespace std;
int main()
{
	int i,gcd,n1,n2;
	cout<<"enter two numbers"<<endl;
	cin>>n1>>n2;
	for(i=0;i<=n1&&i<=n2;++i)
	{
		if(n1%i==0&&n2%i==0)
		{
			gcd=i;
		cout<<"the gcd of two numbers is "<<gcd;	
		}
	}
}
