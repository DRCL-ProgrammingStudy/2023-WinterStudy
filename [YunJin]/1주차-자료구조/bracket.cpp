#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    cin.ignore();

    stack<char> st ;
    while(t--)
    {
        string s;
        cin >> s;
        int len = s.length();
        for(int i=0;i<len;i++)
        {
            if(s[0] == ')')
            {
                st.push(s[0]);
                break;
            }
            else if(s[i]== '(')
            {

                st.push(s[i]);
            }
            
            if(!st.empty())
            {
                if(s[i]!=st.top())
                    {
                        st.pop();
                    }
            }
            else if(st.empty()&&s[i]==')')
            {
                st.push(s[i]);
                break;
            }


        }
        if(st.empty())
        {
            cout<<"YES"<<"\n";
        }
        else{
            
            cout<<"NO"<<"\n";
            while(!st.empty())
            {
                st.pop();
            }
        }
    }
    
    

    return 0;
}
