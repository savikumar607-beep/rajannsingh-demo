/* Problem : Number of good pair
  
Approach : 
>Use two nested loops to check every possible pair in the array.
>For each pair (i, j), check:
>i < j
>nums[i] == nums[j]
>If both conditions are true, increment the counter.
>Return the counter at the end.

Time compelexity : O(n^2) n square
Auxiliary space : O(1)

Output : 4 good pairs
*/
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int numOfgoodpair(vector<int>& nums){
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i+1; j < nums.size(); j++){
            if(i<j && nums[i] == nums[j]){
                count ++;
            }
        }  
    }
    return count ;
}
 int main(){
    vector<int> nums = {1,2,3,1,1,3};
    int ans = numOfgoodpair(nums);
    cout<< "ans=" << ans;
    return 0;  
 }