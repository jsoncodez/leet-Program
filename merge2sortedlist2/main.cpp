#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}

};



class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       
        ListNode* newHead = new ListNode;
        ListNode* tailNode = newHead;              
        ListNode* l1Current = list1;
        ListNode* l2Current = list2;
        

  
        while (l1Current != nullptr && l2Current != nullptr) {
            cout << "while" << endl;
            if (l1Current != nullptr) {

                if (l2Current == nullptr || l1Current->val <= l2Current->val) {
                  
                    tailNode->next = l1Current;                   
                    tailNode = tailNode->next;
                    l1Current = l1Current->next;

                }
            }
            if (l2Current != nullptr) {

                if (l1Current == nullptr || l2Current->val < l1Current->val) {
                    tailNode->next = l2Current;
                    
                    tailNode = tailNode->next;
                    l2Current = l2Current->next;

                }
            }


            
        }



        //display
        cout << "DISPLAY: " << endl;
        ListNode* nextNode = newHead->next;
        while (nextNode != nullptr) {
            cout << nextNode->val << endl;
            nextNode = nextNode->next;
        }

        return newHead;

    }


};

int main() {
    vector<int> l1Start = {};
    vector<int> l2Start = {0};
    //vector<int> l2Start = {1,3,4  };



    ListNode* currentNode1 = new ListNode(l1Start[0]);
    ListNode* currentNode2 = new ListNode(l2Start[0]);

    ListNode* startNode1 = currentNode1;
    ListNode* startNode2 = currentNode2;



        for (int i = 1; i < l1Start.size(); i++) {

            ListNode* l1 = new ListNode(l1Start[i]);
            currentNode1->next = l1;
            currentNode1 = l1;



        }
    
 
        for (int i = 1; i < l2Start.size(); i++) {
            ListNode* l2 = new ListNode(l2Start[i]);
            currentNode2->next = l2;
            currentNode2 = l2;

        }
    



    Solution solution;


    solution.mergeTwoLists(startNode1, startNode2);

    return 0;
}