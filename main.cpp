//a simple program that reverses a string
#include <string>
#include <iostream>
using namespace std;

int main(){
  string inputString; //inputstring
  string resultString = ""; //an empty string
  cout << "Please enter a random string:" << endl;
  cin >> inputString;

  int stringSize;
  stringSize = inputString.length(); // gets the length of the input string

  for(int i = stringSize - 1 ; i >= 0 ; --i){
    char m = inputString[i];//each character starting from the highest index of the inputted character is stored in this initialized variable
    resultString += m; // the character is then added to the empty resultString from the start
  }

  cout << resultString << endl; //result is printed
  
  return 0;
}
