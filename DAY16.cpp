/*
  Problem :  Find Minimum Operations to Make All Elements Divisible by Three

 Approach : 
> Traverse the array and check each element.
> Use the modulo (%) operator to determine whether the element is divisible by 3.
> Use a count variable to count the required operations.
> If nums[i] % 3 != 0, increment count.
> Return count

 Time complesxity : O(n)
 Auxiliary space : O(1)

 Ouput : solution = 3
*/
#include <iostream>
#include <vector>
using namespace std;
int minOperation(vector<int>& nums){
    int count = 0; 
    for(int i = 0; i<nums.size(); i++){
        if(nums[i] % 3 != 0){
            count ++;
        }
    }
    return count ;
}
int main(){
    vector<int> nums = {1,2,3,4};
    int solution = minOperation(nums);
    cout<< "solution = " << solution;
    return 0;
}