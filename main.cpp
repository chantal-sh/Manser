#include <iostream>
#include <vector>

using namespace std;
class Student{
    public:
    Student(string id, string name):id(id),name(name){
        cout << "Student created";
    }
    void addGrade(double grade){
        grades.push_back(grade);
    }
    void display(){
        cout << "Student - " << id << " " << name  << endl;
        for (double grade : grades)
    {
        cout << grade << " ";
    }
    cout << endl;
     }
    private:
    string id;
    string name;
    vector<double> grades;
};
int main()
{
    Student s1("4440","abc");
    s1.display();
    return 0;
}