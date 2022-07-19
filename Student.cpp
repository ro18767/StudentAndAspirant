#include "Student.h"

using namespace std;


Student::Student() :Student("Vasya", 18, 0)
{
  cout << "Student()" << endl;
}
Student::Student(string _name, int _age, int _learn_points)
  :name{ _name.length() ? _name : "no name" }, age{ _age }, learn_points{ _learn_points }
{
  cout << "Student(string _name, int _age, int _learn_points)" << endl;
}
string Student::get_name() const {
  return name;
}
void Student::set_name(string _name) {
  name = _name.length() ? _name : "no name";
}
int Student::get_age() const {
  return age;
}
void Student::set_age(int _age) {
  age = _age;
}
int Student::get_learn_points() const {
  return learn_points;
}
void Student::learn() {
  learn_points++;
}
