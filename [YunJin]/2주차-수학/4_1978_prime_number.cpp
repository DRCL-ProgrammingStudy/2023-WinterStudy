#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int N,counter=0;
    cin>> N;

    while(N--)
    {
        int num;
        cin>>num;
        
        for(int i = 2; i<=num ; i++)
        {
            if(num == i)
            {
                counter++;
            }
            else if(num%i ==0)
            {
                break;
            }
        }
    }
    cout<<counter<<"\n";
    

    return 0;
}
