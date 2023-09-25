#include <iostream>
#include <stack>

using namespace std;

class Queue
{
    private:
        stack<int> stack1;
        stack<int> stack2;
    public:
        void pop();
        int front();
        void push(int n);
        int size();
        // think of empty ??
   
};

void Queue:: push(int n)
{
    stack1.push(n);
}

void Queue::pop()
{
    if(stack2.empty())
    {    while(!stack1.empty())
        {
            stack2.push(stack1.top());
            stack1.pop();
        }
    }

    stack2.pop();
}

int Queue::front()
{
    if(stack2.empty())
    {    while(!stack1.empty())
        {
            stack2.push(stack1.top());
            stack1.pop();
        }
    }

    return stack2.top();
}

int Queue::size()
{
    return stack1.size()+stack2.size();
}
bool test_size()
{
    Queue q;
    if(q.size()!=0)
    {
        return false;
    }
}
bool test_push()
{
    Queue q;
    q.push(1);
    if(q.size()!=1)
    {
        return false;
    }
}

int main()
{
    Queue trial_q;
    trial_q.push(1);
    trial_q.push(2);
    cout<<trial_q.size()<<endl;
    cout<<trial_q.front()<<endl;
    trial_q.pop();
    cout<<trial_q.size()<<endl;
    cout<<trial_q.front()<<endl;



    return 0;
}


