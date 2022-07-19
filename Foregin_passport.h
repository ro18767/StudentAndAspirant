#pragma once
#include <vector>
#include <iostream>
#include "Visa.h"
#include "Passport.h"
#include "Variables.h"

using namespace std;


static vector<Visa> no_visas = vector<Visa>{};


class Foregin_passport : public Passport
{
protected:
  vector<Visa> visas;
public:
  Foregin_passport();
  Foregin_passport(string _owner_f_name, string _owner_s_name, string _owner_m_name, int _valid_until_year = current_year + 6, vector<Visa>& visas = no_visas);
  void add_visa(const Visa& _visa);
  const vector<Visa> get_all_visas() const;
};

