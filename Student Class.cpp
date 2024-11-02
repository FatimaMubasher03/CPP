
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student{
private:
	string name;
    int age;
    int marks;

public:
    Student(string name, int age, int marks) {
        setname(name);
        setage(age);
        setmarks(marks);
    }

    //setters
    void setname(string name){
        if (name.length()<3){
           this-> name="Unknown";
        } else if (name.empty()){
            this->name="NAME";
        } else{
            this->name=name;
        }
    }

    void setage(int age){
        if (age<5 || age>20){
            this->age=5;
        } else{
            this->age=age;
        }
    }

    void setmarks(int marks){
        if (marks<0 || marks>100){
            this->marks=50;
        } else{
            this->marks=marks;
        }
    }

    //Functions
    void printStudentDetails(){
        cout <<"Name:"<<name<<",Age:"<<age<<",Marks:"<<marks<<endl;
    }
    bool isPassed() {
        return marks>=50;
    }

    char getGrade() {
        if (marks>=85) return 'A';
        if (marks>=70) return 'B';
        if (marks>=50) return 'C';
        return 'F';
    }
};

int main(){
    Student s1("Fatima", 21, 92);
    s1.printStudentDetails();
   	if (s1.isPassed()){
   		cout << "Student passed "<<endl;
   		}else{
   			cout <<"Student failed "<<endl;
		   }
	   
    cout << "Grade: " << s1.getGrade() << endl;
}
