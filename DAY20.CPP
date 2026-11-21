/*
Problem : compare alternating sum 

Approach : 
1. Traverse the array using a loop.
2. If the index is even, add the element to evensum.
3. If the index is odd, add the element to oddsum.
4. Return evensum - oddsum

Time complexity : o(n)
Auxiliary space : o(1);

Output : -4

*/
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int alternatSum(vector<int>& nums){
    int evensum = 0;
    int oddsum = 0;
    for(int i = 0; i<nums.size(); i++){
        if(i % 2 !=0){
            oddsum += nums[i];
        }else{
            evensum +=nums[i];
        }
    }
    return (evensum - oddsum);
}
int main(){
    vector<int> nums = {1,3,5,7};
    
    cout<<"alternatesum=" << alternatSum(nums);
    return 0;
}