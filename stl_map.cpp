#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    // vector<pair<string, int>> p = {{"Salman", 19},{"Amna", 18},{"Jacob", 20}};

    // vector<pair<string, int>> p;
    // int age;
    // string name;
    // cout<<"enter name then age"<<endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     cin>>name>>age;
    //     p.push_back({name,age});

    // }
    map<string, int> v;
    v["SALMAN"] = 19;
    v["ALI"] = 191;
    v["JACOB"] = 91;
    if (v.count("SALMAN"))
    {
        cout << "FOUND" << endl;
    }
    v.erase("ALI");

    for (auto x : v)
    {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}