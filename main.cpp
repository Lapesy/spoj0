#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a;

    cin>>a;

    string b[a];

    for(int f=0;f<a;f++)
    {
        cin>>b[f];
    }

    unsigned int amountc=0;
    for(int i=0;i<b[0].length();i++)
    {
        if(b[0].at(i)==b[0].at(0))
        {
            amountc+=1;
        }
        else{}
    }
    cout << amountc;
    return 0;
}
