#include "Visa.h"
#include "Variables.h"

using namespace std;

bool Visa::is_valid() const {
  return valid_until_year <= current_year;
}