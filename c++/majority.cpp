// majority of element 
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size() / 2;

        // Find the maximum element in nums
        int maxe = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            maxe = max(nums[i], maxe);
        }

        // Initialize the frequency vector
        vector<int> freq(maxe + 1, 0);

        // Count the frequencies of each element in nums
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        // Find the majority element
        for (int j = 0; j <= maxe; j++) {
            if (freq[j] > n) {
                return j;
            }
        }

        return -1; // If no majority element is found
    }
};