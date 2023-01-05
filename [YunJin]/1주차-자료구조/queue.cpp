#include <iostream>
#include <string>

using namespace std;


struct queue
{
    int arr[10000];
    int lit = -1;
    int size_checker = 0;

    void push(int data){
        arr[++lit] = data;
    }

    int size()
    {
        return lit + 1 -size_checker;
    }

    bool empty(){
        return (size()==0);
    }

    int front(){
        if(empty()){
            return -1;
        }

        return arr[-(size()-lit)+1];
    }

    int back(){
        if(empty()){
            return -1;
        }
        return arr[lit];
    }
    int pop(){
        if(empty())
        {
            return -1;
        }
        
        size_checker++;
        return arr[-(size()-lit)];
    }
};




int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;
    cin.ignore();

    queue q;

    while(t--)
    {
        string cmd ;
        cin>> cmd;

        if(cmd=="push")
        {
            int data;
            cin>>data;
            q.push(data);
        }
        if(cmd=="front")
        {
            cout<<q.front()<<"\n";
        }
        if(cmd=="back")
        {
            cout<<q.back()<<"\n";
        }
        if(cmd=="size")
        {
            cout<<q.size()<<"\n";
        }
        if(cmd=="empty")
        {
            cout<<q.empty()<<"\n";
        }
        if(cmd=="pop")
        {
            cout<<q.pop()<<"\n";
        }

    }

    return 0;
}
