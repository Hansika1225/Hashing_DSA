#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0];
        int count = 0;

        for(int x : nums){
            if(count == 0){
                candidate = x;
            }

            if(x == candidate){
                count++;
            } else {
                count--;
            }
        }

        return candidate;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    int result = obj.majorityElement(nums);

    cout << "Majority Element: " << result << endl;

    return 0;
}