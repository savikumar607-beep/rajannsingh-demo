// HOW TO FIND LARGEST NUMS IN ARRAY FOR BASIC KNOWLEDGE
// BY - Rajann 
// take you forward to advance level in DSA

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int largestNumber(vector<int>&nums){
    int largest = INT_MIN;
    for(int i = 0 ; i<nums.size(); i++){
        if(nums[i]>largest){
            largest = nums[i];
        }
    }
    return largest;

}
int main (){
    vector<int>nums = {3,3,6,1};
    
   cout<<largestNumber(nums) << endl; // OUTPUT = 6
    return 0;

}