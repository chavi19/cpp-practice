#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> arr, int target){ 
    int start=0, end = arr.size()-1;
    while(start <= end){
        int mid = start + (end - start)/2;   //save from overflow //(start + end)/2;  //after every move

        if(target > arr[mid]){  
            start = mid + 1;    ////search in 2nd half
        }else if(target < arr[mid]){
            end = mid - 1;  //search in 1st half
        }else{
            arr[mid]==target;
            return mid;
        }  
    }
    return -1;
}
int main(){
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};    //odd
    int target1 = 12;

    vector<int> arr2 = {-1, 0, 3, 5, 7, 9, 12};    //even
    int target2 = 0;

    cout<<binarySearch(arr1, target1)<<endl;
    cout<<binarySearch(arr2, target2)<<endl;

    return 0;

}