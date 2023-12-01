#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3,max;
	cout<<"enter three numbers"<<endl;
	cin>>n1>>n2>>n3;
	if(n1>=n2&&n1>=n3)
	{
		cout<<"n1 is greater "<<endl;
	}else if(n2>=n1&&n2>=n3)
	{
		cout<<"n2 is greater"<<endl;
	}
	else
	{
		cout<<"n3 is greater "<<endl;
	}	
	}
