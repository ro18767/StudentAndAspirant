#pragma once
#include "Student.h"

using namespace std;



class Aspirant :public Student
{
protected:
  string topic;
  bool ready_for_defense;
public:
  Aspirant();
  Aspirant(string _name, int _age, bool _ready_for_defense);
  bool get_ready_for_defense() const;
  void set_ready_for_defense(bool _ready_for_defense);
  string get_topic() const;
  void set_topic(string _topic);
  void defense();
};