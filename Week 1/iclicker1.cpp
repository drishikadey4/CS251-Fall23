#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str = "I love CS 251";
    string value1= str.substr(7);
    string value2 = str.substr(13);
    string value3= "";//str.substr(300);
    cout <<"Value1 :" << value1<< " Value2 :"<<value2<< " Value3 :"<<value3;
    return 0;
}