#include <iostream>

using namespace std;
class Student{
    public:
    Student(string id, string name):id(id),name(name){
        cout << "Student created";
    }
    void display(){
        cout << "Student - " << id << " " << name  << endl;
     }
    private:
    string id;
    string name;
};
int main()
{
    Student s1("4440","abc");
    s1.display();
    return 0;
}