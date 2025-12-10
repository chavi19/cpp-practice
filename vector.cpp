//Vectors 
#include <iostream>
#include <vector>
using namespace std;
int main(){
    //vector<int> vec;    //0     //include header file
    vector<int> vec = {1, 2, 3};    //3
    vector<int> v (3,0);    //another way- 3: 3 spaces to store & 0: stores number 0 in each position of(0,1,2)
    vector<char> vect = {'a', 'b', 'c', 'd', 'e'};
    //Functions: size, push_back, pop_back, front, back, at
    vector<int> vt;
    cout<<"Size: "<<vt.size()<<endl;
    vt.push_back(25);
    vt.push_back(35);
    vt.push_back(45);
    vt.pop_back();      //auto pops last value - deletes 45
    cout<<vt.front()<<endl;     //front - prints 1st value
    cout<<vt.end()<<endl;       //end - prints last value
    for(int val : vt){
        cout<<"After push back: "<<val<<endl;
    }

    for(char i : vect){ //for each loop
        cout<<i<<endl;  //instead of i use other names as val, etc
    }
    cout<< vec[0] <<endl;
    cout<< v[0] <<endl;
    cout<< v[2] <<endl;
    return 0;
}
//problem - 136