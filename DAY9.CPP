/*
  THREE CONSECUTIVE ODD NUMBER 
   
  Approach : -
  this is simple brute force approach.

  time complexity:- o(n)

  Ouput : - 
     5, 7, 23  this is the odd number in this arr . this arr return value is true.


*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
bool threeConsecutiveodd(vector<int>& nums){
    int cnt = 0;
    for(int i = 0; i<nums.size(); i++){
        if(nums[i] % 2 != 0){
            cnt++;
            if(cnt==3){
                return true;
            }
        }else{

                cnt = 0;

        }
    }
    return false;
}
int main(){
    vector<int> nums = {1, 2, 34, 3, 4, 5, 7, 23, 12}; // ouput = 5 7 23 
    cout<<"threeConsecutiveodd=" << threeConsecutiveodd(nums);
    return 0;

}