#include <iostream>

#include <algorithm>  
using namespace std;
bool isPalindrome(string str5){
    rev = reverse(str5.begin(), str5.end);
    if(rev == str5) return true;
    else return false;
}
int main(){
    string str = "hello world.";     //dynamic => runtime resize
    string str1 = "chavi";
    string str2 = "chavi";
    string str4;
    string st5 = "madam";
    cout<<"Enter a str: ";
    //cin>>str4;  //hello world => hello(coz when encountering a space it'll stop ) to improve this we use getline
    getline(cin, str4);
    for(int i=0; i<str.length(); i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    //or u can also use a for each loop
   /*  for(char ch: str){
        cout<<ch<<" ";
    }
    cout<<endl; */
    cout<<str4<<endl;
    cout<<(str1==str2)<<endl;
    cout<<str1.length()<<endl;
    cout<<str<<endl;
    reverse(str.begin(), str.end());    //#include <algorithm>  
    cout<<str<<endl;
    cout<<isPalindrome(str5)<<endl;
    return 0;
}