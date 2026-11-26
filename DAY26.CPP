/*
Problem : stone removal game
Approach:
 We simulate the game by removing stones in the sequence 10, 9, 8, ..., 1. After each move, the turn switches between Alice and Bob. When the remaining stones are fewer than the required stones to remove, the current player cannot make a move and loses. If it's Alice's turn, return false; otherwise, return true.

Time Complexity: O(1)
 Space Complexity: O(1)
*/
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int canAcliewin(int n ){
    int stoneTOremove = 10;
    bool  aliceturn = true;
    while(n>= stoneTOremove){
        n -=stoneTOremove;
        stoneTOremove--;
        aliceturn = !aliceturn; 
    }
    if(aliceturn==true){
        return false;
    }else{
        return true;
    }
}
int main(){
    int n = 12;
     bool ans  = canAcliewin(n);
      cout<< "ans = "<< ans ;
     return 0; 
}
