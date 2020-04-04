#include <iostream>

#include "GenStack.h"
//#include "SyntaxChecker.h"
//#include "Delimeter.h"

using namespace std;

int main(int argc, char **argv) {
  bool keepRunning = true;
  string fileName;
  fileName = argv[1];


  while (keepRunning) {
    //run SyntaxChecker
    string userInput;
    cout << "would you like to enter a new file ('Yes' or 'No')" << endl;
    cin >> userInput;
    //ask user input
    if (userInput == "no" || userInput == "No"){
      cout << "Thank you." << endl;
      keepRunning = false;

    }
    cout << "Enter another file name" << endl;
    cin >> fileName;
    //if no break and if yes then continues to enter a new file name and restart while

  }
}
