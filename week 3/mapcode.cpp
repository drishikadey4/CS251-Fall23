#include <iostream>
#include <map>


using namespace std;
///
int main()
{
    map <string  , int> Data;
    Data["Drishika"] = 4; // find or ADD :(
    Data.emplace("Adam",12); //memory constraints - use this !
    Data.insert(pair<string  , int>("Ethan",3));

    cout<<"Printing the map values  "<<endl;

    int num1 = Data["Drishika"];
    int num2 = Data["Dale"];

    for(pair<string  , int>num :Data)
    {
        cout<<num.first<<num.second<<endl; // Alphabetical !
    }


    return 0;
}