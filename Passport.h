#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Variables.h"

using namespace std;



class Passport
{
protected:
  string owner_f_name;
  string owner_s_name;
  string owner_m_name;
  int valid_until_year;
public:
  Passport();
  Passport(string _owner_f_name, string _owner_s_name, string _owner_m_name, int _valid_until_year = current_year + 6);
  Passport(const Passport& _passport);
  string get_owner_f_name() const;
  void set_owner_f_name(string _owner_name);
  string get_owner_s_name() const;
  void set_owner_s_name(string _owner_name);
  string get_owner_m_name() const;
  void set_owner_m_name(string _owner_name);
  bool is_valid() const;
};

