#include <iostream>
#define endl "\n"
#define MAX_SEQ_SIZE 1001
using namespace std;

int main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int length;
    int sequence[MAX_SEQ_SIZE]={0,};

    cin>>length;

    for(int i=1;i<=length;i++)
    {
        cin>>sequence[i];
    }

    int temp = sequence[1];
    int size = 1;
    for(int i=2;i<=length;i++)
    {
        if(temp < sequence[i])
        {
            size++;
            temp = sequence[i];
        }
    }

    cout<<size<<endl;


    return 0;
}
