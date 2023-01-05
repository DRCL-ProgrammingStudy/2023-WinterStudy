#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string ans;


    int t;
    stack<int> st;
    
    cin>>t;
    cin.ignore();

    int num = 0;
    st.push(num);
    while(t--)
    {
        int input;
        cin>>input;
        
        while(st.top()<input)
        {
            num +=1;
            st.push(num);
            ans += '+';
               
        }
        if(st.top()==input)
        {
            ans += '-';
            st.pop();
        }
        else{
            cout<<"NO"<<"\n";
            break;
        }
        if(t == 0)
        {
            for(auto x:ans)
            {
                cout<<x<<'\n';
            }
        }

    }

    return 0;
}
