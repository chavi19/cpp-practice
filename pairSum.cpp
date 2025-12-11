//PAIRSUM - to find the pair which sums upto the target value
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){      //at start it would be vector<int> not int coz it returns a vector int ans 
    vector<int> ans;
    int n = nums.size();
/* 
    for(int i=0; i<n; i++){   //Instead of typing nums.size() 2-3 times, initialize it
        for(int j=i+1; j<n; j++){
            if(nums[i] + nums[j]==target){
                ans.push_back(i);   //PB is property of vector so create a vector named ans
                ans.push_back(j);
                return ans;
            }  //O(n^2)              
        }        
    } */
    int i=0, j=n-1;
    while(i<j){     //O(n)        
        int pairSum = nums[i] + nums[j];    //understand the flow
        if(pairSum > target){
            j--;
        }
        else if(pairSum < target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;     // empty if no pair found    
} 

int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 26;
    vector<int> ans = pairSum(nums, target);
    cout<<ans[0]<<", "<<ans[1]<<endl;
    return 0;
}