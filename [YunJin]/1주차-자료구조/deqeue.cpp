#include <iostream>
#include <string>
#include <list>

using namespace std;


int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;
    cin.ignore();

    list<int> d;

    while(t--)
    {
        string str;
        cin>> str;
        int data;
        if(str=="push_back"){
            cin>>data;
            d.push_back(data);
        }
        if(str=="push_front"){
            cin>>data;
            d.push_front(data);
        }
        if(str=="front"){
            if(d.empty())
            {
                cout<<-1<<"\n";
                
            }
            else
            {
                cout<<d.front()<<"\n";
            }
            
        }
        if(str=="back"){
            if(d.empty())
            {
                cout<<-1<<"\n";
                
            }
            else{
                cout<<d.back()<<"\n";
            }
            
        }
        if(str=="size"){
            cout<<d.size()<<"\n";
        }
        if(str=="empty"){
            cout<<d.empty()<<"\n";
        }
        if(str=="pop_front"){
            if(d.empty())
            {
                cout<<-1<<"\n";
                
            }
            else{
            cout<<d.front()<<"\n";
            d.pop_front();  
            }

        }
        if(str=="pop_back"){
            if(d.empty())
            {
                cout<<-1<<"\n";
                
            }
            else{
                cout<<d.back()<<"\n";
                d.pop_back();
            }
            
        }
    }

    return 0;
}
