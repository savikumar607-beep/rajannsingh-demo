/*
Added solution for Sum of Multiples problem (O(n))
this problem have first thing brute force 
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int sumOfmultple(int nums){
    int sum = 0;
   for(int i = 0; i<=nums; i++){
    if( i % 3 == 0  || i % 5 == 0  || i % 7 == 0){
        sum = sum + i ;
    }

    }
    return sum;
}
int main () {
    int nums = 7;
    cout<<"sumOfmultple="<< sumOfmultple(nums);
    return 0;
}