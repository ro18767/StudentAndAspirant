#include "Foregin_passport.h"


void Foregin_passport::add_visa(const Visa& _visa) {
  visas.push_back(_visa);
}
const vector<Visa> Foregin_passport::get_all_visas() const {
  return vector<Visa>(visas);
}

