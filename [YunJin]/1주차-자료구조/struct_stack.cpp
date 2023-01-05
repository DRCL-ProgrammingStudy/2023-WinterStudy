#include <iostream>
#include <string>

using namespace std;

struct stack
{
    int arr[10000];
    int last = -1;

    bool empty(){
        return (last<0);
    }

    void push(int data){
        arr[++last] = data;
    }

    int size(){
        return last+1;
    }

    int pop(){
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

};

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    stack s ;
    int command_N ;
    cin >> command_N;
    for(;command_N--;){
            
        int data;
        string str;
        cin>>str;
        if(str == "push"){
            cin>>data;
            s.push(data);
        }
        if(str == "top"){
            cout<<s.top()<<"\n";
        }
        if(str == "pop"){
            cout<<s.pop()<<"\n";
        }
        if(str == "empty"){
            cout<<s.empty()<<"\n";
        }
        if(str == "size"){
            cout<<s.size()<<"\n";
        }
        
    }

    
    return 0;
}

