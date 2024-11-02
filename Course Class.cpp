
#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Course {
private:
    string courseName;
    int courseCode;
    int credits;

public:
    Course(string courseName, int courseCode, int credits) {
        setCourseName(courseName);
        setCourseCode(courseCode);
        setCredits(credits);
    }

    // Setters
    void setCourseName(string courseName) {
        if (courseName.empty()) {
            this->courseName = "COURSE";
        } else {
            this->courseName = courseName;
        }
    }

    void setCourseCode(int courseCode) {
        if (courseCode <= 0) {
            this->courseCode = 0;
        } else {
            this->courseCode = courseCode;
        }
    }

    void setCredits(int credits) {
        if (credits < 1 || credits > 6) {
            this->credits = 1;
        } else {
            this->credits = credits;
        }
    }

    //Functions
    void printCourseDetails() {
        cout << "Course Name: " << courseName << ", Course Code: " << courseCode << ", Credits: " << credits << endl;
    }

    bool isGreater(Course& c) {
        return this->credits > c.credits;
    }
};
int main() {
Course c1("Mathematics", 101, 3);
    c1.printCourseDetails();
    Course c2("Physics", 102, 4);
    cout << "Is Physics course credits greater than Mathematics? " << (c2.isGreater(c1) ? "Yes" : "No") << endl;
    
    return 0;
}
