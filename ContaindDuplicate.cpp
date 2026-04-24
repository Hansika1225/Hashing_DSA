#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;

        for(int x : nums){
            if(st.find(x) != st.end()){
                return true;
            }
            st.insert(x);
        }

        return false;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 2, 3, 1};

    if(obj.containsDuplicate(nums)){
        cout << "Contains Duplicate" << endl;
    } else {
        cout << "No Duplicate" << endl;
    }

    return 0;
}