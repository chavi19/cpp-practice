#include <iostream>
#include <vector>
#include<climits>
using namespace std;
int main(){
    int size = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int maxSum = INT_MIN;
    for(int st=0; st<size; st++){   //to print all the possible subarrays
        int currSum = 0;    //at every subarray we will need it from 0
        for(int end=st; end<size; end++){
            currSum += arr[end];    //BRUTE FORCE: O(n^2)
            maxSum = max(currSum, maxSum);

           /*  for(int i=st; i<=end; i++){      //O(n^3)
                cout<<arr[i];
            }
            cout<<" "; */
        }

    }
    cout<<"Max subarray sum = "<<maxSum<<endl;
    return 0;
}
//Optimised Approach is by using Kadane's Algorithm O(n): 53
/* 
    int maxSubArray(vector<int>& nums) {
        int currSum = 0, maxSum = INT_MIN;
        for(int val: nums){
            currSum += val;
            maxSum = max(currSum, maxSum);
                if(currSum < 0){
                    currSum = 0;
                }            
        }
        return maxSum;    
    } */
