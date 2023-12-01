#include<iostream>
using namespace std;
int main()
{
int n,reverse=0,r,o;
cout<<"enter a number"<<endl;
cin>>n;
while(n>0)	
{
	r=n%10;
	reverse=reverse*10+r;
	n=n/10;
	if(0==reverse)
	{
		cout<<" is a palindrome"<<n;
	}
	else
	{
		cout<<"is not palindrome"<<n;
	}
	}
}

