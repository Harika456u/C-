#include<iostream>
#include<cstring>
using namespace std;
void Encrypt(char T[])
{
    for (int i = 0; T[i] != '\0'; i += 2)
        if (T[i] == 'A' || T[i] == 'E')
            T[i] = '#';
        else if (islower(T[i]))
            T[i] = toupper(T[i]);
        else
            T[i] = '@';
}
int main()
{
    char text[]="SaVE EArtH";
    Encrypt(text);
    cout << text << endl;
    return 0;
}

