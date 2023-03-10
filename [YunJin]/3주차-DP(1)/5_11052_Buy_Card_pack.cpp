#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cout.tie(0); cin.tie(0);

    int N, card;
    cin>>N;
    card = N;

    int pack[1001]={0,};
    int dp[10001]={0,};

    for(int i=1;i<=N;i++)
    {
        cin>>pack[i];
    }

    for(int i = 1; i<=N; i++)
    {
        for(int j = 1 ; j<=i;j++)
        {
            dp[i] = max(dp[i],dp[i-j]+pack[j]);
        }        
    }

    cout<<dp[N]<<"\n";

    return 0;
}
