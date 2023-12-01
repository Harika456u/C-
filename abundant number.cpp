#include<iostream>
using namespace std;
int main()
{
	int i,n,o,factor=0;
	cin>>n;
	o=n;
	for(i=0;i<n/2;++i)
	if(n%i==0)
	factor=factor+i;
	if(factor>o)
	cout<<"abundant number"<<endl;
	else
	cout<<"not abundant number"<<endl;
	}

