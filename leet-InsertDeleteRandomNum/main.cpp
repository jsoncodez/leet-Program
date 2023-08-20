#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <unordered_set>


using namespace std;
class RandomizedSet {
public:
    
    unordered_set<int> numSet;

    RandomizedSet() {

    }

    bool insert(int val) {
        if (numSet.find(val) == numSet.end()) {
            numSet.insert(val);

            return true;
        }
        return false;
    }

    bool remove(int val) {
        cout << "remove" << endl;
        if (numSet.find(val) != numSet.end()){
        
            numSet.erase(*numSet.find(val));
            return true;
        }
        return false;
    }

    int getRandom() {

        int randIdx = rand() % numSet.size();

        auto it = next(numSet.begin(), randIdx);

        return *it;
       
    }
};

/**
Input
["RandomizedSet", "insert", "remove", "insert", "getRandom", "remove", "insert", "getRandom"]
[[],              [1],        [2],      [2],       [],         [1],     [2],       []]
Output
[null, true, false, true, 2, true, false, 2]
**/

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */

int main() {

    //RandomizedSet solve;

    RandomizedSet* obj = new RandomizedSet();
    
 
    obj->insert(1);
    bool param_1 = obj->remove(2);
    cout << "param_1 remove t/f = " << param_1 << endl;

    obj->insert(2);
    bool param_2 = obj->remove(2);
    cout << "param_2 insert t/f = " << param_2 << endl;

    int param_3 = obj->getRandom();
    cout << "param_3 getrand = " << param_3 << endl;

    bool param_4 = obj->remove(1);
    cout << "param_4 remove t/f = " << param_4 << endl;

    
    obj->insert(2);

    int param_5 = obj->getRandom();
    cout << "param_5 getrand = " << param_5 << endl;
    
    
    /*
    obj->insert(NULL);
    obj->insert(1);
    obj->insert(2);
    obj->insert(NULL);
    
    bool param_1 = obj->insert(1);

    bool param_2 = obj->remove(2);
    int param_3 = obj->getRandom();
    */
	return 0;
}
