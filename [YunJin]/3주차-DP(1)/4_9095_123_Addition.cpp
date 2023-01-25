#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cout.tie(0); cin.tie(0);

    int arr[10000] = {0,1,2,4,7,};
    int n;
    cin>>n;

    while(n)
    {
        int num;
        cin>>num;

        for(int i = 5; i<=num; i++)
        {
            arr[i] = arr[i-1] +arr[i-2]+arr[i-3];
        }

        cout<<arr[num]<<"\n";



        n--;
    }

    return 0;
}
