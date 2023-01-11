#include <iostream>

using namespace std;

int gcd(int a,int b)
{
    int c;
    while(b!=0)
    {
        c = a%b;
        a = b;
        b = c;
    }
    return a;
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int A,B,t;

    cin>>t;
    while(t--)
    {
        cin>>A; cin>>B;
        cout<<lcm(A,B)<<"\n";
    }
    




    return 0;
}
