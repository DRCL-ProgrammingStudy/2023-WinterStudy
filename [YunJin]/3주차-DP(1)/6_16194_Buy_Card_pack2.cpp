#include <iostream>
#include <algorithm>

#define MAX_VALUE 10001
#define MAX_VALUE_SIZE 1000

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cout.tie(0); cin.tie(0);

    int N, card;
    cin>>N;
    card = N;

    int pack[1001]={0,};
    int dp[MAX_VALUE_SIZE];
    fill_n(dp,MAX_VALUE_SIZE,MAX_VALUE);
    
    for(int i=1;i<=N;i++)
    {
        cin>>pack[i];
    }
    
    dp[0] = 0;
    dp[1] = pack[1];

    for(int i = 2; i<=N; i++)
    {
        for(int j = 1 ; j<=i;j++)
        {
            dp[i] = min(dp[i],dp[i-j]+pack[j]);
        }        
    }

    cout<<dp[N]<<"\n";

    return 0;
}
