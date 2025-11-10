#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age <= 0) {
        cout << "Invalid age entered!";
    } 
    else if (age >= 18) {
        cout << "You are eligible for a driving license.";
    } 
    else {
        cout << "You are not eligible for a driving license.";
    }

    return 0;
}

/* | Can we remove `{}`? -- Yes, if there’s only one statement — but braces are safer.      
| Why not `return 0;` after each `if`? | Not required — only use it if you want to stop the program early. 
 */