/*
  Problem : Mirror Distance of an Integer
  
  Apporach : 
  Reverse the given integer.
  Find the difference between the original number and the reversed number.
  Return the absolute value of the difference

  Time complexity : o(n)
  Auxiliary space : o(1)

  output : 27
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int mirorrDistance(int n){
    int orignial = n;
    int reverse = 0;
    while( n>0 ){
        int digit = n%10;
        reverse = reverse * 10 + digit;
        n = n % 10;

    }
    return (abs(orignial-reverse));
}
int main (){
    int n = 25 ;
    int sol = mirorrDistance(n);
    cout<<"sol = " << sol;
    return 0;
}