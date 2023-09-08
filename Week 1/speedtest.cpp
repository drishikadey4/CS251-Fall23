#include <iostream>
#include <vector>
#include <string>

using namespace std;

int useStrings(const vector<string> &, string);
int useInts(const vector<int> &, int);
int useStringsR(const vector<string> &, string);
int useIntsR(const vector<int> &, int);

int main()
{
    vector<string> v1 = {"1", "2", "3", "4", "5", "6"};
    vector<int> v2 = {1, 2, 3, 4, 5, 6};

    cout << useStrings(v1, "3") << endl;    
    cout << useInts(v2, 3) << endl;

    cout << useStringsR(v1, "3") << endl;
    cout << useIntsR(v2, 3) << endl;
}

int useStrings(const vector<string> &v, string c)
{
    int count = 0;

    for (int i = 0; i < 100000000; i++)
    {
        for (auto element : v)
        {
            if (c == element)
            {
                count++;
            }
        }
    }
    return count;
}

int useInts(const vector<int> &v, int c)
{
    int count = 0;

    for (int i = 0; i < 100000000; i++)
    {
        for (auto element : v)
        {
            if (c == element)
            {
                count++;
            }
        }
    }
    return count;
}

int useStringsR(const vector<string> &v, string c)
{
    int count = 0;

    for (int i = 0; i < 100000000; i++)
    {
        for (auto &element : v)
        {
            if (c == element)
            {
                count++;
            }
        }
    }
    return count;
}

int useIntsR(const vector<int> &v, int c)
{
    int count = 0;

    for (int i = 0; i < 100000000; i++)
    {
        for (auto &element : v)
        {
            if (c == element)
            {
                count++;
            }
        }
    }
    return count;
}