#include <iostream>
using namespace std;

int main()
{
    
    int n1, n2, n3, smallest, largest;

    cout << " Enter the three numbers :  \n\n\n";
    cin >> n1 >> n2 >> n3;

    smallest = n1;
    largest = n2;

    if (n2 < smallest)
    {
        smallest = n2;
    }

    if (n3 < smallest)
    {
        smallest = n3;
    }
    if (n3 > largest)
    {
        largest = n3;
    }

    if (n2 > largest)
    {
        largest = n2;
    }

    cout << "\n\n The Smallest number among ( " << n1 << ", " << n2 << ", " << n3 << " ) is : " << smallest;
    cout << "\n\n The Largest number among ( " << n1 << ", " << n2 << ", " << n3 << " ) is : " << largest;

    cout << "\n\n\n";

    return 0;
}

