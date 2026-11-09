/*
subtract the product and sum of digit an integer
i have been solve this problem brute force 

 →approach
 use modulo operator

 time complexity (o(n)) 


*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int subtractProductAndssum(int n ){
    int sum = 0;
    int product = 1;
    while(n>0){
        int rem = n % 10 ;
        product *= rem;
        sum += rem;
        n = n/10;

    }
    return (product - sum);
}
int main(){
    int n = 234;
    cout<<"subtractProductAndssum="<< subtractProductAndssum(n);
    return 0; 
}
