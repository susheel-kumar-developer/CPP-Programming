#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> seen;
        int maxSum = 0, currentSum = 0, left = 0;

        for (int right = 0; right < nums.size(); ++right) {
            while (seen.count(nums[right])) {
                seen.erase(nums[left]);
                currentSum -= nums[left];
                left++;
            }
            seen.insert(nums[right]);
            currentSum += nums[right];
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {4, 2, 4, 5, 6};
    int result = solution.maximumUniqueSubarray(nums);
    cout << "Maximum Unique Subarray Sum: " << result << endl;
    return 0;
}