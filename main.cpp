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

    char c=b[0].at(0);
    cout << c;
    unsigned int amountc=0;
    for(int i=0;i<b[0].length();i++)
    {
        if(b[0].at(i)==c)
        {
            amountc+=1;
        }
    }
    cout << amountc;
    return 0;
}
