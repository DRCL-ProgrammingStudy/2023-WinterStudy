#include <iostream>
#include <algorithm>

using namespace std;

long long cnt(int n, int x)
{
    int temp=0;
    for(long long i=x;n/i>=1;i*=x)
    {
        temp += n/i;
    }     
    return temp;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n,m;
    cin>>n>>m;


    long long cnt5 = cnt(n,5) -cnt(n-m,5) -cnt(m,5);
    long long cnt2 = cnt(n,2) -cnt(n-m,2) -cnt(m,2);

    cout<<  min(cnt2,cnt5) <<"\n";
        
    return 0;
}
