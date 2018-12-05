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

    unsigned int amount[24];
    char acter[24];
    for(int j=0;j<a;j++)
    {
        for(int i=0;i<b[j].length();i++)
        {
            if(b[j].at(i)==b[j].at(0))
            {
                amount[0]+=1;
            }
            else if(b[j].at(i)==b[j].at(i-1))
            {
                amount[i-1]+=1;
            }
            else
            {
                acter[i]=b[j].at(i);
            }
        }
    }
    int k=0;
    while(amount[k]!=0)
    {
        cout << acter[k] << amount[k];
        k++;
    }
    return 0;
}
