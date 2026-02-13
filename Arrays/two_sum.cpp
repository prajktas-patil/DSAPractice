
Problem: Two Sum
Platform: LeetCode
Difficulty: Easy
Approach: Brute Force (Check every pair)
Time Complexity: O(n^2)
Space Complexity: O(1)


#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    
    for(int i = 0; i < nums.size(); i++) {
        for(int j = i + 1; j < nums.size(); j++) {
            
            if(nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    
    return {};
}

