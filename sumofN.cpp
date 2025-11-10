#include <iostream>
using namespace std;
int main() {    
    int N; 
    cout<<"Enter value of N: ";
    cin>>N;
/*     
    int count=1, sum=0;
    while(count<=N) {
        sum = sum + count;
        count +=1;     //or count++;
    } */ 

    int sum=0;
    for(int count=1; count<=N; count+=2) {     //or count++ for every no.  //if(count%2 != 0) {
                                              
        sum += count;
    }

    cout<<"Sum of odd numbers from 1 to "<<N<<" is: "<<sum<<endl;
    return 0;

} 

/* can use i as count also i=1; i<=n; i++
while loop = you manage count separately.
for loop = you combine it all neatly in one line.
also, sum = N * (N + 1) / 2
 */
