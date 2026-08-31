#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main()
{
    int insert_value;
    int element;
    cout << "insert elements" << endl;
    stack<int> s;
    for (int i = 0; i < 5; i++)
    {
        cin >> element;
        s.push(element);
    }

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}