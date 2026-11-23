/*
   Problem : Transform array of parity

   Approach : 
   > Traverse the array once.
   > Replace every even number with 0 and every odd number with 1.
   > Sort the transformed array so that all 0s appear before all 1s.
   > Return (or use) the modified array.
   
   Time complexinty : 
     Transforming element : O(n);
     Sorting array : O(n log n)
   
     Output : [0,0,1,1]
   
*/
#include <iostream> 
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
vector<int> transformArray (vector<int>& nums){
    for(int i = 0; i< nums.size(); i++){
        if(nums[i] % 2 == 0){
            nums[i] = 0;
        }else{
            nums[i] = 1;
        }
    }
    sort(nums.begin() , nums.end());
    return nums;

}
int main (){
    vector<int> nums = {4,3,2,1 };
        transformArray(nums);
    for(int x  : nums){
        cout<< x << " ";
    }
    return 0;
}