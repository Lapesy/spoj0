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
/*    for(int j=0;j<a;j++)
    {*/
        int l=0;
        for(unsigned int i=0;i<b[0].length();i++)
        {
            if(acter[l]!=b[0].at(i))
            {
                acter[l]=b[0].at(i);
                amount[l]+=1;
                l++;
            }
            else
            {
                amount[i]+=1;
            }
        }
 //   }
    int k=0;
    while(amount[k]!=0)
    {
        cout << acter[k] << "_" << amount[k];
        k++;
    }
    return 0;
}
