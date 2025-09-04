// Ruben Ayala

#include <iostream>
#include <string>
#include <iomanip>

#include "functions.h"

using namespace std;
int main()
{

  // Implement your main program here using the functions declared in funtions.h

  const int NUM_VEHICLES = 4;
  double times[NUM_VEHICLES];
  double distanceInInches = 0;
  
  distanceInInches = getInput("Enter the distance between the wires (in inches): ");
  
  for (int i = 0; i < NUM_VEHICLES; ++i)
    {
      times[i] = getInput("Enter time recorded (seconds): ");
    }

    double distanceInMeters = convertDistance(distanceInInches);
    cout << fixed << std::setprecision(2);
    
    cout << "\n\n";
    cout << "Vehicle" << string(5, ' ') << "Time (seconds)" << string(7, ' ')
        << "Speed (m/s)" << string(7, ' ') << "Speed (mph)" << endl;

    for (int i = 0; i < NUM_VEHICLES; ++i)
    {
        int vehicleNumber = i + 1;
        double speedInMetersPerSec = getSpeed(distanceInMeters, times[i]);
        double speedInMPH = convertSpeed(speedInMetersPerSec);
        
        
        cout << vehicleNumber << string(20, ' ') << times[i] << string(7, ' ')
            << string(7, ' ') << speedInMetersPerSec << string(14, ' ') 
            << speedInMPH << endl;
    }
  
      
  
return 0;
}
