/*
## Move Zeroes – DSA Problem

**Problem Description:**

Given an integer array `nums`, move all zeros to the end of the array while maintaining the relative order of all non-zero elements.

The operation must be performed in-place without making a copy of the array.

**Approach:**
- Traverse the array to identify non-zero elements.
- Move all non-zero elements to the beginning.
- Place all zeros at the end.
- Maintain the original order of non-zero elements.

**Complexity Analysis:**
- Time Complexity: O(n)
- Space Complexity: O(1)

**Language:** C++

**Topic:** Arrays | Two Pointers | In-place Algorithm

leetcode :- 283 

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
void moveZeroes(vector<int>& nums){
    int lastNonZeroFoundAt = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[lastNonZeroFoundAt], nums[i]);
            lastNonZeroFoundAt++;
        }
    }
}
int main(){
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    return 0;
}