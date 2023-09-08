#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int> v = {1,2,3};
   //v[3]=0;
   v.at(3)=0;
   
   for (auto e : v){
    cout << e <<endl;
   }
}