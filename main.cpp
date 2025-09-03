// Put your name here

#include <iostream>
#include <string>

#include "functions.h"

using namespace std;

int main(){

  // Implement your main program here using the functions declared in funtions.h

  int numOfInputs = 4;
  int inputs[4];
  int spaceMaker = 15;
  
  for (int i = 0; i < 4; ++i)
    {
      inputs[i] = getInput();
    }

  // Following code prints out message with info
  int vehicleNum = 1;
cout << "Vehicle Time (seconds) Speed (m/s) Speed (mph)" << endl;
  for (int i = 0; i < 4; ++i)
    {
      cout << vehicleNum << string(14, ' ') << inputs[i] << string (10, ' ') <<
              inputs[i].getSpeed() << string (10, ' ') << inputs[i].getSpeed().convertSpeed(); << endl;

      ++vehicleNum;
    }
  
      
  
  return 0;
}
