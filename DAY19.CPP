/*
problem : Add two integer

Approach : 
> sum two integer num1 , num2 then return the expected value

Time complexity : O(1)
Auxiliary space : O(1);

output : 17
*/
#include <iostream> 
using namespace std;
int sum(int num1 , int num2){
    return (num1 + num2);

}
int main (){
    int num1 = 12 ;
    int num2 = 5;
    int sol = sum (num1 ,num2);
    cout << "sol = " << sol;
    return 0;
}