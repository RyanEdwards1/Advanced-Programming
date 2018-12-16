#include <iostream>

const int NO_QUARTER = 0;
const int HAS_QUARTER = 1;
const int GUMBALL_SOLD = 2;

class gumballMachine {
  public:
    int getState () {
        return state;
    }

    void insertQuarter() {
      if (state == NO_QUARTER) {
          std::cout << "Quarter Inserted\n";
          setState (HAS_QUARTER);
      } else {
        std::cout <<"Quarter Could Not Be Inserted\n";
      }
    }
    void ejectQuarter () {
      if (state == HAS_QUARTER) {
          std::cout << "Quarter Ejected \n";
          setState (NO_QUARTER);
      } else {
        std::cout <<"Quarter Could Not Be Ejected\n";
      }
    }

    void Crank () {
      if (state == HAS_QUARTER) {
          std::cout << " Click Click Click ";
          setState (GUMBALL_SOLD);
      } else {
        std::cout <<"Please Insert Quarter\n";
      }
    }
    void DispenseGumball () {
      if (state == GUMBALL_SOLD) {
          std::cout << " Enjoy!!! Insert Another Quarter ";
          setState (NO_QUARTER);
      } else {
        std::cout <<"Please Crank\n";
      }
    }


protected:

private:
  int state;

  void setState (int newState) {
      state = newState;
  }
};

int main () {

  gumballMachine gumball;
  std::cout << "Welcome to Gumball State Machine\n";
  std::cout << "Current State: " <<gumball.getState() << std::endl;
  std::cout << std::endl;


  std::cout << "Inserting Quarter: " ; 
  gumball.insertQuarter();
  std::cout << std::endl;


  std::cout << "Attempting To Crank: " ; 
  gumball.Crank();
  std::cout << std::endl;


  std::cout << "Collect Gumball: " ; 
  gumball.DispenseGumball ();
  std::cout << std::endl;


  std::cout << "Inserting Another Quarter: " ; 
  gumball.insertQuarter();
  std::cout << std::endl;


  std::cout << "Ejecting Quarter: " ;
  gumball.ejectQuarter();
  std::cout << std::endl;

  std::cout << "Inserting Quarter: " ; 
  gumball.insertQuarter();
  std::cout << std::endl;

}
