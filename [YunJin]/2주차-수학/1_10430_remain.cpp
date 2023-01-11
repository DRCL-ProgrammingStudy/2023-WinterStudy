#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int A,B,C;
    cin>>A; cin>>B; cin>>C;

    cout<< (A+B)%C << "\n";
    cout<< ((A%C) + (B%C))%C << "\n";
    cout<<  (A*B)%C << "\n";
    cout<< ((A%C) * (B%C))%C << "\n";

    return 0;
}
