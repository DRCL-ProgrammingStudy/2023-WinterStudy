#include <iostream>

using namespace std;

bool is_oddPrime(int a)
{
    if(a==3)
    {
        return true;
    }
    else if(a==2 || a==1)
    {
        return false;
    }
    else if(a%2)
    {
        for(int i=2;i<a;i++)
        {
            if(!(a % i))
            {
                return false;
            }
        }
        return true;
    }

}


int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int N, a, b;

    while(true)
    {
        cin>>N;
        if(N==0)
        {
            break;
        }
        if(N<6)
        {
            continue;
        }
        if(!(N%2))
        {
            for(int i= N/2;i>=0;--i)
            {
                a= N/2 -i;  b=N-a;

                if(is_oddPrime(a) && is_oddPrime(b))
                {
                    cout<< N<<" = "<<a<<" + "<<b<< "\n";
                    break;
                }
                
                if(i==0)
                {
                    cout<< "Goldbach's conjecture is wrong."<< "\n";
                    break;
                }

                
            }
        }

    
    }
    
    return 0;
}
