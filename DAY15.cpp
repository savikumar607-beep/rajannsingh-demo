/*
Problem : -  Minimum Operations to Make Array Sum Divisible by K

Approach : - 
- Compute the sum of all elements in the array.
- Find the remainder using (sum % k).
- The remainder gives the minimum operations needed to make the sum divisible by k

Time complexity : - o(n)
Auxiliary space : - o(1)

Ouput : ans = 4
*/
#include <iostream>
#include <vector>
using namespace std;
int minOperation(vector<int>& nums, int k){
    int sum = 0;
    for(int i = 0; i<nums.size(); i++){
        sum += nums[i];
    }
    return (sum % k);
}
int main(){
    vector<int> nums = {3,9,7};
    int k = 5;
    int ans = minOperation(nums , k);
    cout<<"ans ="<< ans;
    return 0;
}
