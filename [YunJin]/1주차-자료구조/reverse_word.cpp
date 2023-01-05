#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();

    while(t--){
        string s ="";
        getline(cin,s);
        s += ' ';

        int size = s.length();
        stack<char> st ;
        for (int i=0; i < size; i++)
        {
            if(s[i]==' ')
            {
                while(true){
                    cout<<st.top();
                    st.pop();

                    if(st.empty())
                    {
                        cout<<' ';
                        break;
                    }

                }


            }
            else{
                st.push(s[i]);
            }
            
        }
    cout<<"\n";
    }
    return 0;
}
