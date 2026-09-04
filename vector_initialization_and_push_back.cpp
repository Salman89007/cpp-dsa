#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(5, 1);
    int n;
    cout << "enter size" << endl;
    cin >> n;
    int element;
    cout << "enter elements" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> element;
        v.push_back(element);
    }

    cout << "SIZE IS " << v.size() << endl;
    cout << "FIRST ELEMENT " << v.front() << endl;
    cout << "LAST ELEMENT " << v.back() << endl;
    cout << "ALL ELEMENTS : " << endl;

    for (auto x : v)
    {
        cout << x << " ";
    }

    return 0;
}