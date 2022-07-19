#pragma once
#include <string>
#include <iostream>
using namespace std;



class Student
{
protected:
  string name;
  int age;
  int learn_points;
public:
  Student();
  Student(string _name, int _age, int _learn_points = 2);
  string get_name() const;
  void set_name(string _name);
  int get_age() const;
  void set_age(int _age);
  int get_learn_points() const;
  void learn();
};

