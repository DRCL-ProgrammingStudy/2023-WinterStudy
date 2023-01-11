#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int N, count=0;
    cin>> N;
    
    for(int i = 2;i<=N; i++)
    {
        if(i%5==0) count++;
        if(i%25==0) count++;
        if(i%125==0) count++;
        
    }

    cout<<count<<"\n";

    return 0;
}
