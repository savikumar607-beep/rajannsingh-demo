
/*

Find the Maximum Achievable Number

Approach : - 
No need a  loop
this problem solve by straight forward solution use formula x = ( num +1 * t);

Time complexity : -  o(1)
Auxiliary space : - o(1)


*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int maximumnumAchievablex(int num , int t){
    return num + 1  * t;
}
  int main (){
   int num = 4;
   int t = 1;

   int  ans=maximumnumAchievablex(num ,t);

   cout << ans;
   
   return 0;

  }