#include <iostream>
#include <string>

using namespace std;

struct StringStack
{
    char arr[20000];
    int last = -1;

    bool empty(){
        return (last<0);
    }

    void push(string data){
        int size = data.size();
        int i = -1;
        for(;size--;){
            arr[++last]=data[++i];
        }
    }

    int size(){
        return last+1;
    }

    char pop(){
        if(empty()){
            return -1;
        }

        return arr[last--];
    }

    int top(){
        if(empty()){
        return -1;
        }     
        return arr[last];
    }

    void reverse(){
    while(!empty()){
        cout<<pop();
    }
    cout<<"\n";
}
};

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    StringStack s ;
    int input_N ;
    int i=0 ;
    cin>> input_N;
    cin.ignore();
    while(input_N--)
    {
        string str = "";
        getline(cin,str);
        s.push(str);
        s.reverse();

    }

    return 0;
}