// Put your name here

#include "functions.h"

#include <iostream>
#include <iomanip>

using namespace std;
//Constants
double INCHES_TO_METERS = 0.025;
double METERS_PER_SEC_TO_MILES_PER_SEC = (3600 * (1/1609)) ;

// Implement the functions from functions.h here
// Asks user for input using prompt
// until user enters positive number
double getInput(const string& prompt)
{
  double input = 0;
  cout << prompt ;
  cin >> input;

  if (input > 0)
  {
    return input;
  }
  else
  {
    cout << prompt;
    cin >> input;
  }
}

// converts inches to meters
double convertDistance(double inches)
{
  return inches * INCHES_TO_METERS;
}

// converts meters/second to miles/hour
double convertSpeed(double metersPerSec)
{
  return metersPerSec* METERS_PER_SEC_TO_MILES_PER_SEC;
}

// determines velocity (meters/second) using the distance (in meters)
// and time (in seconds)
// velocity assumed to be constant
double getSpeed(double distance, double seconds)
{
  return (distance / seconds);
}
