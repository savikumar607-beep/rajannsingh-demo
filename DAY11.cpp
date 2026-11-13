/*
## Number of Employees Meeting the Target

**Problem Description:**
Given an array of employee working hours and a target value, count the number of employees whose working hours are greater than or equal to the given target.

**Approach:**
- Traverse the array using a loop.
- Compare each employee's working hours with the target.
- Increment the counter whenever the condition is satisfied.
- Return the total count.

**Example:**
- Input: `hours = [0, 1, 2, 3, 4]`
- Target: `3`
- Output: `2`

**Complexity Analysis:**
- Time Complexity: `O(n)`
- Space Complexity: `O(1)`

**Language:** C++
*/
#include <iostream>
#include <vector> 
#include <algorithm>
#include <climits>
using namespace std;
int  numberOfemployemeettarget(vector<int>& hours ,int target){
    int cnt = 0; 
    for(int i = 0; i<hours.size(); i++){
        if(hours[i] >= target){
            cnt ++;
        }
    }
    return cnt;
}
int main(){
    vector<int> hours={0,1,2,3,4}; 
    int target = 3;
    cout<<" numberOfemployemeettarget="<< numberOfemployemeettarget(hours , target);
    return 0;
}


