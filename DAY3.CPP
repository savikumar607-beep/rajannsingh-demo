/*# Maximum Consecutive Ones

## Problem
Find the maximum number of consecutive `1`s in a binary array.

## Approach
- Traverse the array once.
- Increment the current count when the element is `1`.
- Reset the count when the element is `0`.
- Update the maximum count whenever the current count is greater.

## Complexity
- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

## Example
**Input:** `[1, 1, 0, 1, 1, 1, 0, 0]`

**Output:** `3`

## Key Learning
Array traversal, conditional statements, and tracking maximum consecutive elements.
*/
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int maxxNumber(vector<int>& nums){
    int count = 0;
    int maxx = 0;
    for(int i = 0; i<nums.size(); i++){
        if(nums[i] == 1){
            count ++;
            if(count>maxx){
                maxx = count;
            }
        }else{
            count = 0;
        }
    }
    return maxx;
}
int main(){
    vector<int> nums = {1,1,0,1,1,1,0,0};
    cout<<maxxNumber(nums);
    return 0;
}