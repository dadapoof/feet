#include <iostream>

using namespace std;

// Prototype functions:

int inch(int, int);
int centimeters(int);
int m(int);
int cm(int);

// Declaring and Initializing Global Constants

const int INCH_MULTIPLIER = 12;
const double CENTS_MULTIPLIER = 2.54;


int main() {

  // Declaring the user's input variables
  int feet, inches;

  // Do while loop for the entire program so that the user can stop it
  do {


      cout << "Input a length in feet and inches with a space in between!" << endl;
      cout << "If you would like to stop enter -90." << endl;
      cout << "Inches cannot go beyond 11!" << endl;
      cin >> feet;

      if (feet != -90)
      {
       	cin >> inches;
      }

    while (feet < 0 || inches < 0 || inches > 11)
    {
      cout << "Sorry, that isn't a correct input. Try again!" << endl;
      cin >> feet;
      cin >> inches;
    }

    if (feet != -90)
    {

    // Calling the functions needed to execute the program
    int all_inch = inch(feet, inches);
    int all_cents = centimeters(all_inch);
    int meters = m(all_cents);
    int centimeters = cm(all_cents);

    // End of program celebration
    cout << "TAA DAA!" << endl;
    cout << "There are " << meters << " meters." << endl;
    cout << "And there are " << centimeters << " centimeters!" << endl;

    }

    }
 while (feet != -90);


        return 0;
}


// Converts the user's input into only inches
int inch(int x, int y) {

int  all_inches = x * INCH_MULTIPLIER + y;

        return all_inches;
}


// Converts the inches into centimeters
int centimeters(int z) {

int  all_centimeters = z * CENTS_MULTIPLIER;

        return all_centimeters;
}


// Converts the centimeters into meters
int m(int a) {

int final_centimeters = a / 100;

        return final_centimeters;
}

// Stores the remaining centimeters into a variable
int cm(int b) {

int final_meters = b % 100;

        return final_meters;
}
