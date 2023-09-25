#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;

int main()
{
    // set <int> Numbers;
    // Numbers.insert(0);
    // Numbers.insert(10);
    // Numbers.insert(5);

    // cout<<"Printing the set values  "<<endl;
    // for(auto &num :Numbers)
    // {
    //     cout<<num<<endl;
    // }
    unordered_set <int> Numbers;
    Numbers.insert(0);
    Numbers.insert(10);
    Numbers.insert(5);

    cout<<"Printing the set values  "<<endl;
    for(auto &num :Numbers)
    {
        cout<<num<<endl;
    }


    return 0;
}