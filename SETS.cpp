#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    int insert_value;
    set<int> s;
    cout<<"insert value"<<endl;
    for (int i = 0; i < 6; i++)
    {
        cin>>insert_value;
        s.insert(insert_value);
    }
    for (auto x : s)
    {
        cout<<x<<" ";
    }
    
    return 0;
}