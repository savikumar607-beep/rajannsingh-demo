/*

Problem: concatnate with array in reverse

Algorithm:
>ans ko nums se initialize karo.
>nums ko reverse order me traverse karo.
>Har element ko ans me push_back() karo.
>ans return kar do.

Time complexity : O(n)
Auxiliary space : O(1)

Ouput : [1,2,3,3,2,1]
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> concatReverse(vector<int>& nums){
    vector<int> ans;
    for(int i = 0; i<nums.size(); i++){
        ans.push_back(nums[i]);
    }
    // append the reverse array element 
    for(int i = nums.size() - 1; i>=0; i++){
        ans.push_back(nums[i]);
    }
    return ans;
}
