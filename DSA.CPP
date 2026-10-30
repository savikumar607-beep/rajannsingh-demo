// DSA QUEAUE IMPLEMENTATION USING ARRAYS
// BY RAJAN SINGH
// BASIC TO ADVANCE
// ARRYAS BASIC PYQ  TO FIND LARGEST ELEMENT IN ARRAY 
#include <iostream>
using namespace std;
int main(){
    int largest = 0;
    int arr [] = {1,2,2,3,5};
    int size = 5;
    for (int i = 0 ; i<size; i++){
        if(arr[i]>largest){
            largest= arr[i];
        }
    }
    cout<< largest; // OUPUT = 5 
    return 0 ;
}
