/*

3232. Find if Digit Game Can Be Won

Ouput :- 
canAlicewin: 1

Time complexity :- o(n)
auxiliary space :- o(1)

    Approach:
    -> Traverse the array and calculate the sum of one-digit numbers.
    -> Calculate the sum of all other numbers separately.
    -> Compare both sums.
    -> Return true if the sums are not equal, else return false.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
bool canAlicewin(vector<int>& nums){
    int alicesum = 0; 
    int bobsum = 0;
    for(int i = 0; i<nums.size(); i++){
        if(nums[i] < 10){
            alicesum += nums[i];
            
        }else{
            bobsum += nums[i];
        }
    }
    
    return alicesum != bobsum;

}
int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 14};
    cout <<"canAlicewin" << canAlicewin(nums);
    return 0;
}
