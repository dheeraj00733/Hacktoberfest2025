#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    // Binary Search implementation
    // Returns index of target if found, -1 if not found
    int binarySearch(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            // Found the target
            if (nums[mid] == target) {
                return mid;
            }
            
            // Target is in the right half
            if (nums[mid] < target) {
                left = mid + 1;
            }
            // Target is in the left half
            else {
                right = mid - 1;
            }
        }
        
        // Target not found
        return -1;
    }
    
    // Function to demonstrate the usage
    void demonstrateSearch() {
        vector<int> sortedArray = {1, 3, 5, 7, 9, 11, 13, 15, 17};
        int target = 7;
        
        int result = binarySearch(sortedArray, target);
        if (result != -1) {
            cout << "Element " << target << " found at index " << result << endl;
        } else {
            cout << "Element " << target << " not found in array" << endl;
        }
    }
};

// Main function to demonstrate the binary search implementation
int main() {
    Solution solution;
    solution.demonstrateSearch();
    return 0;
}
