/*## 🔍 Missing Number – DSA Problem

**Problem:** Find the missing number in an array containing distinct numbers from `0` to `n`.

**Approach:**
- Traverse the array to identify the missing number.
- Apply logical problem-solving techniques.
- Practice array manipulation and indexing.

**Concepts Used:**
- Arrays
- Loops
- Conditional Statements
- Problem Solving

**Language:** C++

**Goal:** Improving DSA skills through daily coding practice.

#DSA #CPP #CodingPractice #ProblemSolving #MissingNumber
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int missingNumber(vector<int>& nums){
    int n = nums.size();
    int sum = 0;
    for(int i = 0 ; i<n; i++){
        sum += nums[i];
    }
    int totalsum = n*(n+1)/2;
    return totalsum-sum;

}
int main(){
    vector<int>nums = {3,0,1};
    cout<<"missingNumber=" << missingNumber(nums);
    return 0; 
}