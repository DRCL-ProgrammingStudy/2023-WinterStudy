#include <iostream>

#define MAX 1000000

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int arr[MAX+1] = {0,};
    int M, N ;

    cin>>M>>N;

    for(int i = 2 ; i<=N ; i++)
    {
        arr[i] = i;
    }

    for(int i = 2 ; i<=N; i++)
    {
        if(arr[i]==0)
        {
            continue;
        }
        for(int j = 2 ; i*j<=N; j++)
        {
            arr[i*j] = 0;
        }
    }

    for(int i=M; i<=N ; i++)
    {
        if(arr[i]!=0)
        {
            cout<<i<<"\n";
        }
    }



    return 0;
}
