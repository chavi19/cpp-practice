//Given an array find the target value if it exists -> return it's index value
//if not return -1(Invalid Index)
//LinearSearch: says start a loop at each index from 0 to last
#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int target){
    for(int i=0; i < size; i++){
        if(arr[i]==target){
            return i;
        }     
    }
    return -1;  //NOT FOUND
}
int main(){
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;
    int target = 8;

    cout<<linearSearch(arr, size, target)<<endl;
    return 0;
}
//Time Complexity of LS is O(n) 
//n that's y it is called Linear