//Practice Questions for Array
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//WAF to cal sum & product of all numbers in an array
int sumArr(int arr[], int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}

int prodArr(int arr[], int size){
    int prod=1;
    for(int i=0; i<size; i++){
        prod *= arr[i];
    }
    return prod;
}

//WAF to swap the max & min number of an array
void swapMinMax(int arr[], int size){
    int minIndex = 0, maxIndex = 0;
    for(int i=0; i < size; i++){
        if(arr[i] < arr[minIndex]) minIndex = i;
        if(arr[i] > arr[maxIndex]) maxIndex = i;
    }
    swap(arr[minIndex], arr[maxIndex]);
}

//WAF to Print All Unique Values in an array(NESTED LOOPS)
void printUnique(int arr[], int size){
    for(int i=0; i < size; i++){
        bool isUnique = true;

        for(int j=0; j < size; j++){
            if(i != j && arr[i]==arr[j]){   //shoudn't be on same index & if on different addr shoudn't be equal
                isUnique = false;
                break;
            }             
        }
        if(isUnique){
            cout<<arr[i]<<" ";
        }    
    }
    cout<<endl;        
}

//WAF to print intersection of 2 arrays
void printIntersection(int arr1[], int size1, int arr2[], int size2){
    for(int i=0; i < size1; i++){
        for(int j=0; j < size2; j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }                
        }
    }
}

int main(){
    int arr[]={8, 1, 2, 5, 2, 1};
    int arr1[] = {1, 2, 3, 4, 4};
    int arr2[] = {3, 4, 5};
    int size1 = 5;
    int size2 = 3;
    int size = 6;
    //cin>>n;
    cout<<sumArr(arr, size)<<endl;
    cout<<prodArr(arr, size)<<endl;

    swapMinMax(arr, size);
    for(int i=0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //cout<<"Unique values: "<<printUnique(arr, size); tries to print the returned value of the function but return type is void, so no value exists → compiler error.
    printUnique(arr, size);
    
    printIntersection(arr1, size1, arr2, size2);    //with duplicates from arr1
    return 0;

}