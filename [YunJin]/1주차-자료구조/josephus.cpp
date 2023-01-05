#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int N,K,lit = 1;
    cin>>N;
    cin>>K;

    queue<int> q;  
    
    for(int i=1;i<=N;i++)
    {
        q.push(i);
    }
    cout << "<";
    
    while(N-1)
    {
        if(lit%K !=0){
            q.push(q.front());
            q.pop();
            
        }
        else
        {
            cout<<q.front()<<", ";
            q.pop();
            N--;
        }

        lit++;
    }
    cout<<q.front();   
    cout << ">" <<"\n";
    
    return 0;
}