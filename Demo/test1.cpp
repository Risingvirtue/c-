#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
int main() {
    string dogString = "dog";
    string catString = "cat";
    cout << dogString.compare(catString) << endl;
    cout << dogString.compare(dogString) << endl;
    return 0;

}

/*
string birthdatString = " Birthday";


    string yourName;
    cout << "What is your name";
    getline(cin, yourName);
    cout << "hello " << yourName << endl;
    string eulerGuess;
    cout << "What is Euler's Constant? ";
    getline(cin, eulerGuess);
    //string eulerGuessDouble = stod(eulerGuess);

    eulerGuess.size(); //.append(string)



\0 == null type
printing null terminates everything after the null
*/
/*
Do While loop
do {
        cout << "Guess between 1 and 10: ";
        getline(cin, numberGuessed); //cin source of user input
        intNumberGuessed = stoi(numberGuessed); //convert string to integer
        cout << intNumberGuessed << endl;
    } while(intNumberGuessed != 4);
    cout << "You win" << endl;


While loop
int randNum = (rand() & 100) + 1; // 1 - 100

   while(randNum != 100) {
        cout << randNum << ", ";
        randNum = (rand() % 100) + 1;

   }
   cout << endl;
*/
/*
Ternary Operators
variable = (condition) ? true: false
int largestNum = (5>2) > 5:2


Switch
 int greetingOption = 2;

    switch(greetingOption) {
        case 1:
            cout << "bonjour" << endl;
            break;
        case 2:
            cout << "Hola" << endl;
            break;
        default:
            cout << "Hello" << endl;
*/
