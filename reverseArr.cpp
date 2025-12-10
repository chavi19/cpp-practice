//Reverse an Array(use 2 pointer)
//Start(moves fwd ++) & End(moves backward --): 2 pointers
//swap the values

#include <iostream>
#include <vector>
using namespace std;
//Vector Form
void reverseVector(vector<int> &vec){   //& : V.imp otherwise it'll print the same org copy, here we need pass by reference
    int start = 0, end = vec.size() - 1;
    while(start<end){
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}

//Array Form
void reverseArray(int arr[], int size){
    int start = 0, end = size-1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    reverseVector(vec);
    for(int i=0; i < vec.size(); i++){
        cout<<vec[i]<<" ";
    }cout<<endl;

    reverseArray(arr, size);
    for(int i=0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
//TC : O(n)