#include <iostream>
#include<vector>
using namespace std;
void V(vector <int> &v){
    
    int x;
    for (int i= 2; i<5; i++)
    {
        cout<<"index "<<i+1<<" insert data"<<endl;
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;
    cout<<"***********************"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}
int main(){
    vector <int> V_bulshit;
    V_bulshit.push_back(1);
    V_bulshit.push_back(2);
    cout<<V_bulshit[0]<<endl;
    V(V_bulshit);
    return 0;
}