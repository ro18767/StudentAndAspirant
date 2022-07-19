#include "Passport.h"


Passport::Passport() :Passport("Vasya", "Pupkin", "Alexandrovich")
{
}
Passport::Passport(string _owner_f_name, string _owner_s_name,
  string _owner_m_name, int _valid_until_year)
  :owner_f_name{ _owner_f_name.length() ? _owner_f_name : "no name" },
  owner_s_name{ _owner_s_name.length() ? _owner_s_name : "no name" },
  owner_m_name{ _owner_m_name.length() ? _owner_m_name : "no name" },
  valid_until_year{ _valid_until_year }
{}
Passport::Passport(const Passport& _passport)
  :Passport(
    _passport.owner_f_name,
    _passport.owner_s_name,
    _passport.owner_m_name
  ) {}
string Passport::get_owner_f_name() const {
  return owner_f_name;
}
void Passport::set_owner_f_name(string _owner_name) {
  owner_f_name = _owner_name.length() ? _owner_name : "no name";
}
string Passport::get_owner_s_name() const {
  return owner_s_name;
}
void Passport::set_owner_s_name(string _owner_name) {
  owner_s_name = _owner_name.length() ? _owner_name : "no name";
}
string Passport::get_owner_m_name() const {
  return owner_m_name;
}
void Passport::set_owner_m_name(string _owner_name) {
  owner_m_name = _owner_name.length() ? _owner_name : "no name";
}
bool Passport::is_valid() const {
  return valid_until_year <= current_year;
}