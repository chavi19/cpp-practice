#include <iostream>
#include <string>
using namespace std;
class Student{
public:
    string name;    //this is getting stored statically
    //double cgpa;
    double* cgpaPtr;    //cgpa not storing directly we made an ptr out of it 

    Student(string name, double cgpa){      //constructor
        this->name = name;
        //this->cgpa = cgpa;
        //points to new memory
        cgpaPtr = new double; //initially cgpaPtr was not pointing anywhere, but now it points to double(data will be stored) in heap
        *cgpaPtr = cgpa;    //dereference //& stored cgpa at new memory
    }

    //destructor
    ~Student(){
        cout<<"I delete everything"<<endl;
        delete cgpaPtr;
    }

    /* Student(Student &obj){  //custom constructor-shallow copy
        this->name = obj.name;
        this->cgpaPtr = obj.cgpaPtr;
    }   */ 

    Student(Student &obj){      //deep copy constructor - dynamically alloc memory
        this->name = obj.name;
        cgpaPtr = new double; //new heap memory
        *cgpaPtr = *obj.cgpaPtr;    //initially jo val org m stored i.e. 8.9 vhi new mem m bhi store hogi, then main m change krdenge
    }

    void getInfo(){
        cout<<"we r learning abt shallow & deep copy here"<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"cgpa: "<<*cgpaPtr<<endl;
    }
};

class Teacher {
private:        //won't be accessible outside => we create getter setter for access that is still fine here 
    double salary;
public:
    //obj properties=attr=qualities
    string name;
    string dept;
    string subject;

    //non-parametrised constructor
    Teacher(){      //function with nooo return type //always in public not pvt
        cout<<"Hey, I am constructor!"<<endl;       //we made this constructor, not compiler.
        dept = "CSE";
    }
    
    //parameterised
    Teacher(string name, string dept, string subject, double salary){
        this->name = name;      //name=n;
        this->dept = dept;
        this->subject = subject;    //subject=s;
        this->salary = salary;
    }

    //methods=member functions=functions but it is just inside the class
    void changeDept(string newDept){
        dept = newDept;
    }

    //setter => to set pvt values
    /* void setSalary(double s){
        salary = s;
    }
    //getter => to get the pvt values value
    double getSalary(){
        return salary;
    } */

    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"subject: "<<subject<<endl;
    }
};

int main(){
    /* 
    Teacher t1;     //when we create this obj, constructor automatically gets called
    t1.name = "Chavi";
    t1.subject = "C++";
    t1.setSalary(25000);
    cout<<t1.getSalary()<<endl;
    cout<<t1.name<<endl;
    cout<<t1.dept<<endl; 
    */
   Teacher t1("Chavi", "CSE", "C++", 25000);
   t1.getInfo();

   Teacher t2(t1);  //default copy constructor -invoked //we never def conditions for t2, but still it worked=> copy constructor
   t2.getInfo();

   Student s1("ron", 8.9);    //obj
   s1.getInfo();

   Student s2(s1);      //default copy instructor invoked or we can create our own
   //s2.getInfo();
   *(s2.cgpaPtr) = 9.2;     //i changed in s2, but it reflected on s1??(issue: shallow copy)
   s1.getInfo();
   s2.name = "chavi";
   s2.getInfo();
    return 0;
}