#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int size;
    cout << "enter size" << endl;
    cin >> size;
    int element;
    cout << "enter elements" << endl;

    vector<int> v;
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        v.push_back(element);
    }
    // v.pop_back();

    // cout<<v.front()<<endl;
    // cout<<v.back()<<endl;
    
    // if (v.empty())
    // {
    //     cout << "vector is empty";
    //     return 0;
    // }

    for (auto x : v)
    {
        cout << x << " ";
    }
    v.clear();
    cout<<"Vector size is "<<v.size();

    // for (int i = 0; i <(int) v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    return 0;
}