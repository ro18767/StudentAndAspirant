#include "Aspirant.h"

constexpr int learn_points_to_defense = 3;

Aspirant::Aspirant() :Aspirant("Vasya", 18, false)
{
  cout << "Aspirant()" << endl;
}
Aspirant::Aspirant(string _name, int _age, bool _ready_for_defense)
  :Student(_name, _age), ready_for_defense{ _ready_for_defense }
{
  cout << "Aspirant(string _name, int _age, bool _ready_for_defense)" << endl; 
}
bool Aspirant::get_ready_for_defense() const {
  return ready_for_defense;
}
void Aspirant::set_ready_for_defense(bool _ready_for_defense) {
  ready_for_defense = _ready_for_defense;
}
string Aspirant::get_topic() const {
  return topic;
}
void Aspirant::set_topic(string _topic) {
  topic = _topic;
}

void Aspirant::defense() {
  if (get_learn_points() >= learn_points_to_defense) {
    cout << "success" << endl;
    return;
  }
  cout << "fail" << endl;
}
