/*
 problem : find in a secondlargest nums in array

 Approach : 

1. Initialize `largest` with the first element of the array.
2. Initialize `slargest` with `INT_MIN`.
3. Traverse the array using a loop.
4. If the current element is greater than `largest`, update `slargest` with `largest` and update `largest`.
5. Otherwise, if the current element is smaller than `largest` but greater than `slargest`, update `slargest`.
6. Ignore duplicate largest elements.
7. If no second largest element exists, return `-1`; otherwise, return `slargest`.


 Time complexity : o(n)
 Auxiliary space : o(1)


 output : 7
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int secondLargest(vector<int> & nums){
    int largest = nums[0];
    int slargest = INT_MIN;
    for(int i = 1; i< nums.size(); i++){
        if(nums[i] > largest){
            slargest = largest;
            largest = nums[i];
        }else if(nums[i] < largest && nums[i] > slargest){
            slargest= nums[i];
        }
    }
    if(slargest == INT_MIN){
        return -1;
    }
    return slargest;
}
int main(){
    vector <int> nums = { 8, 8, 7, 6, 5};
    int sol = secondLargest(nums);
    cout<<"sol = "<< sol;
    return 0;
}