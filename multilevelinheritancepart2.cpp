#include <iostream>
#include <string>
using namespace std;

// Base class: Person
class Person {
public:
    string name;
    int age;
    int id;

public:
    Person(string personName, int personAge, int personId)
        : name(personName), age(personAge), id(personId) {}

    void displayPersonInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << id << endl;
    }
};

// Derived class: Student (inherits from Person)
class Student : public Person {
protected:
    string department;
    float gpa;

public:
    Student(string studentName, int studentAge, int studentId,
            string dept, float studentGPA)
        : Person(studentName, studentAge, studentId),    //Before I do anything else, please call the Person constructor with these values to set up the name, age, and id fields
          department(dept), gpa(studentGPA) {}//same as department = dept and gpa=student gpa omside the {}

    void displayStudentInfo() const {
        displayPersonInfo();
        cout << "Department: " << department << endl;
        cout << "GPA: " << gpa << endl;
    }
};

// Derived class: GraduateStudent (inherits from Student)
class GraduateStudent : public Student {
    string researchTopic;

public:
    GraduateStudent(string gradName, int gradAge, int gradId,
                    string dept, float gradGPA, string topic)
        : Student(gradName, gradAge, gradId, dept, gradGPA),
          researchTopic(topic) {}

    void displayGraduateStudentInfo() const {
        displayStudentInfo();
        cout << "Research Topic: " << researchTopic << endl;
    }
};


int main() {
    GraduateStudent gradStudent("keshav", 35, 8, "Computer Science", 8.3, "cyber security");

    cout << "Graduate Student Information:" << endl;
    gradStudent.displayGraduateStudentInfo();

    return 0;
}