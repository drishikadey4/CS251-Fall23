#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    q.push(12);
    q.push(15);
    q.pop();
    q.pop();
    cout<<"Size"<<q.size()<<endl;
    q.pop();
    cout<<"Size"<<q.size()<<endl;
    cout<<"Queue is:";
    while(q.size()>0)
    {
        cout<< q.front()<<":" ;
        q.pop();
    }
    // cout<<q.size()<<endl;
    cout<<endl;

}