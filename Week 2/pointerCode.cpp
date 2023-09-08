#include <iostream>
using namespace std;
int main(){
    int not_ptr = 0;
    cout<<&not_ptr<<endl;
    int *a = &not_ptr;
    cout<< a <<endl;
    cout<<*a<<endl;
    *a = 10;
    cout<< a <<endl;
    cout<<*a<<endl;



    return 0;

}