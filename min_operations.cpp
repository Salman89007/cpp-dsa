#include <iostream>
using namespace std;
class Solution {
public:    int minOperations(int n) {
        int ans = 0;
        for (int i = 0; i < n / 2; i++) {
            ans += n - 1 - 2 * i;
        }
        return ans;   }
};
int main() {    Solution s;
    int n;
    cin >> n;
    cout << s.minOperations(n) << endl;    return 0;
}