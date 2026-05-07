#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st(nums.begin(), nums.end());

        int longest = 0;

        for(int x : st){

            // Check if x is starting point
            if(st.find(x - 1) == st.end()){

                int current = x;
                int count = 1;

                // Count consecutive numbers
                while(st.find(current + 1) != st.end()){
                    current++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};

int main() {

    Solution obj;

    vector<int> nums = {100,4,200,1,3,2};

    int result = obj.longestConsecutive(nums);

    cout << "Longest Consecutive Sequence Length: "
         << result << endl;

    return 0;
}