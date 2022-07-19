#include "Passport.h"
#include "Foregin_passport.h"
#include "Student.h"
#include "Aspirant.h"

using namespace std;




int main() {
  {
    Student dan{ "Don", 19, 2 };
    
    cout << dan.get_age() << endl;
    dan.set_age(20);
    cout << dan.get_age() << endl;

    cout << dan.get_name() << endl;
    dan.set_name("Dan");
    cout << dan.get_name() << endl;

    cout << dan.get_learn_points() << endl;
    dan.learn();
    cout << dan.get_learn_points() << endl;

  }
  {
    Student dan{};

    cout << dan.get_age() << endl;
    dan.set_age(20);
    cout << dan.get_age() << endl;

    cout << dan.get_name() << endl;
    dan.set_name("Dan");
    cout << dan.get_name() << endl;

    cout << dan.get_learn_points() << endl;
    dan.learn();
    cout << dan.get_learn_points() << endl;

  }
  {
    Aspirant dan{ "Don", 19, false };

    cout << dan.get_age() << endl;
    dan.set_age(20);
    cout << dan.get_age() << endl;

    cout << dan.get_name() << endl;
    dan.set_name("Dan");
    cout << dan.get_name() << endl;

    cout << dan.get_learn_points() << endl;
    dan.learn();
    cout << dan.get_learn_points() << endl;
  }
  {
    Aspirant dan{ };

    cout << dan.get_age() << endl;
    dan.set_age(20);
    cout << dan.get_age() << endl;

    cout << dan.get_name() << endl;
    dan.set_name("Dan");
    cout << dan.get_name() << endl;

    cout << dan.get_learn_points() << endl;
    dan.learn();
    cout << dan.get_learn_points() << endl;
    cout << dan.get_learn_points() << endl;
    dan.learn();
    cout << dan.get_learn_points() << endl;

    cout << dan.get_topic() << endl;
    dan.set_topic("topic");
    cout << dan.get_topic() << endl;

    cout << dan.get_ready_for_defense() << endl;
    dan.set_ready_for_defense(true);
    cout << dan.get_ready_for_defense() << endl;
    
    dan.defense();
  }
  {
    Aspirant dan{};

    cout << dan.get_age() << endl;
    dan.set_age(20);
    cout << dan.get_age() << endl;

    cout << dan.get_name() << endl;
    dan.set_name("Dan");
    cout << dan.get_name() << endl;

    cout << dan.get_learn_points() << endl;
    dan.learn();
    cout << dan.get_learn_points() << endl;
    cout << dan.get_learn_points() << endl;
    dan.learn();
    cout << dan.get_learn_points() << endl;

    cout << dan.get_topic() << endl;
    dan.set_topic("topic");
    cout << dan.get_topic() << endl;

    cout << dan.get_ready_for_defense() << endl;
    dan.set_ready_for_defense(true);
    cout << dan.get_ready_for_defense() << endl;

    dan.defense();
  }

  return 0;
}