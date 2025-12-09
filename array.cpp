#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int main() {
     //int marks[] = {1, 2, 4, 7}  //4 automatically
    //int marks[5];
//    int sizes = 5;   //used for loop
    //int marks[5] = {48, 85, 98, 78, 55};
//    int marks[sizes]; 
    //marks[3] = 11;
/*     for(int i=0; i<sizes; i++){
        cin>>marks[i];
    }
    //loop: 0 to size-1
    for(int i=0; i<sizes; i++){
        cout<<marks[i]<<endl;
    } */
    //cout<<marks[3]<<endl;
    //cout<<sizeof(marks)/sizeof(int)<<endl;
 
//to find smallest & largest number in an array, then their index 
    int nums[]={5,15,1,-15,22,24};
    int size = 6;
    int smallest = INT_MAX; //#include <climits>
    int largest = INT_MIN;
    int smallestIndex = -1;
    int largestIndex = -1;
    for(int i=0; i<size; i++){
        if(nums[i]<smallest){
            smallest=nums[i];
            smallestIndex = i;
        }
        //also instead of using "if" we can use min func
        //smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
        largestIndex = i;
        
        
    }
    cout<<"Smallest: "<<smallest<<" at index "<<smallestIndex<<endl;
    cout<<"Largest: "<<largest<<" at index "<<largestIndex<<endl;
    return 0;
}
/* 
int minNum(int arr[], int size){
    int smallest = INT_MAX;
    for(int i=0; i < size; i++){
        smallest = min(arr[i], smallest);
    }
    return smallest;
}
int maxNum(int arr[], int size){
    int largest = INT_MIN;
    for(int i=0; i < size; i++){
        largest = max(arr[i], largest);
    }
    return largest;
} */