#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string str;
    cin>>str;

    int t;
    cin>>t;

    list<char> l(str.begin(),str.end());
    auto cursor = l.end();

    while(t--)
    {
        char cmd;
        cin >> cmd;

        if(cmd=='L')
        {
            if(cursor!=l.begin())
            {
                --cursor;
            }
        }
        if(cmd=='D')
        {
            if(cursor!=l.end())
            {
                ++cursor;
            }
        }
        if(cmd=='B')
        {
            if(cursor!=l.begin())
            {
                cursor=l.erase(--cursor);
            }
        }
        if(cmd=='P')
        {
            char c;
            cin>>c;
            l.insert(cursor,c);
        }


    }

    for(auto i=l.begin();i!=l.end();i++)
    {
        cout<<*i;
    }
    cout<<"\n";
    return 0;
}
