#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[1000];
    int f=0;
    cout<<"Enter a string: "<<" ";
    cin>>str;

    int len=strlen(str);
    if(len!= 6)
    {
        cout<<"Invalid"<<"\n";
        return 0;
    }
    else
    {
        for(int i=0; i<len; i++)
        {
            if(str[i]=='a' || str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u')
            {
                f=1;
                break;
            }
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

