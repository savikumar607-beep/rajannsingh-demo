/*

 Qn : difrrence between sun and eve

 Approach :-
 > First calculate the total sum of the array.
 > Traverse the array and maintain the left partition sum.
 > Find the right partition sum using:
   rightSum = totalSum - leftSum
 > If the difference between leftSum and rightSum is even,
   increment the counter.
 > Return the count of valid partitions.

 Time Complexity : O(n)
 Auxiliary Space : O(1)


*/
#include <iostream>
#include <vector>
using namespace std;
int diffrenceSumofeven(vector<int>& nums){
    int totalsum = 0;
    int leftsum = 0; 
    int rightsum = 0;
    int count = 0;
    for(int i = 0; i<nums.size(); i++){
        totalsum += nums[i];
    } 
    for(int i = 0; i<nums.size()-1; i++){
        leftsum += nums[i];
        rightsum = totalsum-leftsum;
        if(abs(leftsum-rightsum) % 2 == 0){
            count++;
        }
    }
    return count;
}
int main(){
    vector<int> nums = {10,10,3,7,6};
    cout<<"diffrenceSumofeven = "<<diffrenceSumofeven(nums);
    return 0;
}