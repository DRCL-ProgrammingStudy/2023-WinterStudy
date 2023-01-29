#include <iostream>
#define endl "\n"
#define dp_size 91
using namespace std;

int main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int N;
    cin>>N;

    long long dp[dp_size]={0,1,1,2};

    for(int i=3;i<=N;i++)
    {
        dp[i] = dp[i-2]+dp[i-1];
    }

    cout<<dp[N]<<endl;

    return 0;
}
