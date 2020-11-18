#include <iostream>
using namespace std;

class Student
{
private:
    int rollno;
    string name;
    int marks[3];
    int total_marks;

public:
    Student(int rollno, string name);
    int getRollNo();
    string getName();
    void setMarks();
    int totalMarks();
    char grade();
};

Student::Student(int rollno, string name)
{
    this->rollno = rollno;
    this->name = name;
}
int Student::getRollNo()
{
    return this->rollno;
}

string Student::getName()
{
    return this->name;
}

void Student::setMarks()
{
    for (int i = 0; i < 3; i++)
    {
        cin >> this->marks[i];
    }
}

int Student::totalMarks()
{
    int sum = 0;
    for (int j = 0; j < 3; j++)
    {
        sum += this->marks[j];
    }
    this->total_marks = sum;
    return sum;
}
char Student::grade()
{
    float average = this->total_marks / 3;
    if (average > 60)
        return 'A';
    else if (average >= 40 && average < 60)
        return 'B';
    else
        return 'C';
}

int main()
{
    Student s1(15, "Bhushan");
    cout << s1.getRollNo() << endl;
    cout << s1.getName() << endl;
    s1.setMarks();
    cout << s1.totalMarks() << endl;
    cout << s1.grade() << endl;
    return 0;
}
