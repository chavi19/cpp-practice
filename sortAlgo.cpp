#include <iostream>
using namespace std;
//for array to be sorted in desc order just change the > signs at each sort

void bubbleSort(int n, int arr[]){  //O(n^2)
    bool isSwap = false;    //initially considering until any swaps happens
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){    //no swaps, already sorted array(special cases)
            return;
        }
    }
}

void selectionSort(int n, int arr[]){   //O(n^2)
    for(int i=0; i<n-1; i++){
        int si = i; //Smallest Index    //unsorted part ka st index
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[si]){     
                si = j;
            }
        }
        swap(arr[i], arr[si]);
    }
}

void insertionSort(int n, int arr[]){   //O(n^2)
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] > curr){   //jb tk arr[prev] ki value greater h curr se tabhi jgh bnane ki zrurat h
            arr[prev+1] == arr[prev];
            prev--;
        }
        arr[prev] == curr; //placing the curr el in it's right position
    }
}

int main(){
    int n=5;
    int arr[]={4,1,5,2,3};
    bubbleSort(n, arr);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    selectionSort(n, arr);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    insertionSort(n, arr);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}