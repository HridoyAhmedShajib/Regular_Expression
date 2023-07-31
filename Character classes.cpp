#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,len,f=0;
    char str[1000];

    cout<<"Enter a string: "<<" ";
    cin>>str;

    len=strlen(str);

    for(int i=0; i<len; i++)
        {
            if(str[i]<'a' || str[i]>'m')
            {
                f=1;
                break;
            }
        }
    if(f==1)
    {
        cout<<"Invalid"<<"\n";
    }
    else
    {
        cout<<"Valid"<<"\n";
    }
    return 0;
}


