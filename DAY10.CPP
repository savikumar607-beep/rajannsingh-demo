/* 

Difference between Element Sum and Digit Sum

Approach: Brute Force

Time Complexity: O(n * d)
where d = number of digits in each element.
(If d is considered constant, complexity becomes O(n))

Space Complexity: O(1)

Example:
Input: {1, 15, 6, 9}

Element Sum = 1 + 15 + 6 + 9 = 31
Digit Sum   = 1 + (1+5) + 6 + 9 = 22

Output:
Element Sum - Digit Sum
31 - 22 = 9
*/


#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int differenceOfsum(vector<int>& nums){
    int elesum=0;
    int digisum=0;
    for(int i = 0; i<nums[i]; i++){
        elesum +=nums[i];
        int num = nums[i];
        while(nums[i]>0){
            digisum += nums[i] % 10;
            nums[i] = nums[i]/10;
        }
    }
    return (elesum-digisum);
}
int main(){
    vector<int> nums = {1 ,15 ,6 , 9};
    cout<<"differenceOfsum="<<differenceOfsum(nums);
    return 0;
}






