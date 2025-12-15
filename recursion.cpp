#include <iostream>
#include <vector>
using namespace std;
//print name N times using recusrion
void printName(int i, int n){
    //base case
    if(i > n){
        return;
    }
    cout<<"Chavi"<<endl;
    printName(i+1, n);
}

//print num 1 to N using recusrion
void print1toN(int i, int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    print1toN(i+1, n);
}

//print num N to 1 using recusrion
void printNto1(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    printNto1(n-1);
}

//print num 1 to N using backtracking(not using i+1,n)
void p1toNbacktr(int i, int n){
    if(i<1){
        return;
    }
    p1toNbacktr(i-1, n);
    cout<<i<<" "<<endl;
}
//PARAMETERISED RECURSION:
//print sum N using recusrion(N → 1)
void printSum(int i, int sum){
    if(i < 1){
        cout<<sum<<endl;
        return;
    }
    printSum(i-1, sum+i);
}

//recursion to go from (1 → N)
void printSum2(int i, int n, int sum){
    if(i > n){
        cout << sum << endl;
        return;
    }
    printSum2(i + 1, n, sum + i);
}
//i - 1 works without n because the base is fixed (0 / 1)
//i + 1 always needs n because the stop point must be known

//Functional RECURSION: returns value
int sum3(int n){
    if(n==0) return 0;
    return n + sum3(n-1);   //sum3 is declared void but returns a value -> int
}

int fact(int n){    //factorial
    if(n==1) return 1;
    return n * fact(n-1);   
}

void reverseArr(int i, vector<int>& arr){
    int n = arr.size();
    if(i >= n/2) return;
    swap(arr[i], arr[n - i - 1]);
    reverseArr(i + 1, arr);
}
//single vs two pointer does NOT change space complexity.

bool revStr(int i, string &s){
    if(i >= s.size()/2) return true;
    if(s[i] != s[s.size()-i-1]) return false;
    return revStr(i+1, s);
}//TC & SC: O(n/2)

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    reverseArr(0, arr);
    for(int x : arr) cout << x << " ";
    cout << endl;

    string s= "MADAM";
    cout<<revStr(0, s);

    printName(1, n);
    print1toN(1, n);
    printNto1(n);
    p1toNbacktr(n, n);
    printSum(n, 0);
    printSum2(1, n, 0);
    cout<<sum3(n)<<endl;
    cout<<fact(n)<<endl;
    return 0;
}