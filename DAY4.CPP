/* 🚀 What was the problem?
The previous implementation of rotateByOne had an out-of-bounds access bug inside the for loop. When the loop variable i reached n - 1, the statement nums[i] = nums[i + 1] attempted to access nums[n],
 which is outside the valid index range (0 to n - 1) of a vector of size n. This resulted in undefined behavior or a potential segmentation fault.

🛠️ How was it fixed?
Added an early return check (if (n <= 1)) to handle edge cases for empty or single-element vectors safely.

Fixed the loop boundary condition from i < nums.size() to i < n - 1 so that nums[i + 1] never exceeds the valid vector indices.

Added a verification loop in main() to print the rotated vector elements for testing.

🧪 Expected Behavior (After Fix)
For an input vector {1, 2, 3, 4, 5}, the function successfully 
performs a left rotation by one position and outputs:{2,3,4,5,1}

*/
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
void rotateByOne(vector<int>& nums) {
    int n = nums.size();
    int temp = nums[0];
    if (n <= 1) return;

    for(int i = 0; i<n-1; i++){
        nums[i] = nums[i+1];
    
}
    nums[n-1] = temp;
}
int main(){
    vector<int>nums= {1,2,3,4,5};
    rotateByOne(nums);
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}