#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cout.tie(0); cin.tie(0);

    int N , ans=1;
    cin>> N;

    for(int i = 1;i<=N; i++)
    {
        ans = ans*i;
    }

    cout<<ans<<"\n";

    return 0;
}
