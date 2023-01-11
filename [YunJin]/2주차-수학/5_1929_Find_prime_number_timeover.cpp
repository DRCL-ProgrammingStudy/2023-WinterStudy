#include <iostream>
#include <queue>


using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    queue<int> q;

    int M,N;
    cin>>M>>N;

    for(int i = M ;i<=N;i++)
    {
        q.push(i);

    }

    while(!q.empty())
    {
        int temp = q.front();

        for(int i=2; i<= temp ;i++)
        {   
            if(temp==i)
            {
                cout<<i<<"\n";
            }
            else if (temp%i==0)
            {
                break;
            }
            
        }
        q.pop();
        
    }
    

    return 0;
}
