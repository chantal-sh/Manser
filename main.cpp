#include <iostream>
#include <vector>

using namespace std;
class Student{
    public:
    Student(string id, string name):id(id),name(name){
        cout << "Student created";
    }
    Student()=default;
    ~Student(){
        delete ptr;
        ptr = nullptr;
    }
    void addGrade(double grade){
        grades.push_back(grade);
    }
    void display(){
        cout << "Student - " << id << " " << name  << " age: " << age << endl;
        for (double grade : grades)
    {
        cout << grade << " ";
    }
    cout << endl;
    cout << "ptr value: " << *ptr << endl;
     }
    void setptr(int value){
        *ptr = value;
    }
    private:
    string id;
    string name;
    vector<double> grades;
    int age;
    int* ptr = new int(10);
};
int main()
{
    Student s1("4440","abc");
    Student s3("4ggg440","abc");
    s1.display();
    
       Student s2(s1);
       s2.display();
       s2.setptr(20);
    
    s1.display();
    return 0;
}