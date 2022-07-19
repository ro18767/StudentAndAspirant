#pragma once
#include <vector>
#include <iostream>
#include <string>


using namespace std;


struct Visa
{
  string country;
  int valid_until_year;
  bool is_valid() const;
};

