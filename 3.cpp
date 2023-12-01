#include <iostream>
using namespace std;
int main()
{
	int ch,n;
	int a[]={1,2,3,4,5};
	n=sizeof(a)/sizeof(a[0]);
	cout<<"Type 1 for Reverse"<<endl;
	cout<<"Type 2 for Search by index"<<endl;
	cout<<"Type 3 for Swap by index"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
			{
				cout<<"Reverse Array"<<endl;
				break;	
			}
		case 2:
			{
				cout<<"Search by Index"<<endl;
				break;
			}
		case 3:
			{
				cout<<"swap by index"<<endl;
				int x, y,temp;
    			cout << "Enter the indices of the elements to swap: ";
    			cin >> x >> y;

    			temp = a[x];
    			a[x] = a[y];
    			a[y] = temp;

    			cout << "Array after swapping elements at indices " << x << " and " << y << ": ";
    			for (int i = 0; i < n; i++) {
        			cout << a[i] << " ";
    		}
    	}
				break;
			
		default:
			{
				cout<<"Invalid input";
				break;
			}
	}
	return 0;
}
