/*
  Problem : Even smallest multiple

  Approach : 
  
- If n is already even, then n itself is the smallest even multiple.
- If n is odd, multiply it by 2 to get the smallest even multiple.
- Check whether n is even or odd using the modulus operator (n % 2).

  Time complexity : o(1);
  Auxiliary sapce : o(1)

  Output : 10
*/
#include <iostream>
using namespace std;
int smallestMultiple(int n ){
      if(n % 2 == 0){
        return n ;
      }
      return 2 * n ;
}
int main (){
    int n = 5 ;
    int ans = smallestMultiple(n);
    cout<< "ans = " << ans;
    return 0;
}