#include <iostream>
#include <vector>
#include <map>
#include <algorithm>


using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {


        // order greatest to lowest
        
        int n = citations.size();

        sort(citations.begin(), citations.end(), greater<int>());
        cout << "after" << endl;
        int hIdx = 0;
        int i = 0;

        while (i < n && hIdx < citations[i]) {
            
            hIdx++;
            i++;
        }
        
        return hIdx;
    }
};

int main() {

    Solution solve;

    vector<int> citations = { 1 };
    // 0 1 3 5 6 -> 3
    // 1 1 3 -> 1
    // 6 5 3 1 0 -> 3

    solve.hIndex(citations);
    return 0;

}
