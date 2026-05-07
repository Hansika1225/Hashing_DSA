#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;

        for(string s : strs){

            string temp = s;

            // Sort to create key
            sort(temp.begin(), temp.end());

            mp[temp].push_back(s);
        }

        vector<vector<string>> result;

        for(auto it : mp){
            result.push_back(it.second);
        }

        return result;
    }
};

int main() {

    Solution obj;

    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

    vector<vector<string>> ans = obj.groupAnagrams(strs);

    cout << "Grouped Anagrams:\n";

    for(auto group : ans){

        cout << "[ ";

        for(string word : group){
            cout << word << " ";
        }

        cout << "]\n";
    }

    return 0;
}