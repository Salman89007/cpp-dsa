#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main()
{
    int insert_value;
    int element;
    cout << "insert elements" << endl;
    queue<int> q;
    for (int i = 0; i < 5; i++)
    {
        cin >> element;
        q.push(element);
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}