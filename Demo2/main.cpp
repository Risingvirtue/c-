#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Animal{
public:
    void getFamily() {cout <<"We are animals" << endl;}
    void getClass() { cout << "I'm an Animal" << endl;}


};

class Dog : public Animal {
public:
    void getClass() {cout << "I'm a Dog" << endl;}
};



int main() {
    Animal *animal = new Animal;
    Dog *dog = new Dog;

    animal->getClass();
    dog->getClass();
}
/*
virtual makes it take look at the child class to see if it has the same method
Class Declaration
//scope operator
use :: to define new methods inside class e.g. Animal::Animal() for constructor
-Animal() and Animal::~Animal() for deconstructor
create a new instance, use Animal fred; Animal tom(36,15, "Time")
this -> to refer to the object itself and its variables

class Dog : public Animal to inhert
Dog() : Animal(){}; to call superclass
Dog :: Dog(int height, int weight, string name, string bark) : Animal +(height, weight, name) :
this -> sound = bark;

*/
/*

&myAge == memory address
int* creates a pointer to memory address
int* agePtr = &myAge;
*agePtr gives data at memory address

write to text and read
string steveQuote = "A day without sunshine is like, you know, night";
    ofstream writer("stevequote.txt");
    if(!writer) {
        cout << "Error opening file" << endl;
        return -1;
    } else {
        writer << steveQuote << endl;
        writer.close();

    }

    ofstream writer2("stevequote.txt", ios::app);
    if(!writer) {
        cout << "Error opening file" << endl;
        return -1;
    } else {
        writer2 << "\n - Steve Martin" << endl;
        writer2.close();
    }

    char letter;
    ifstream reader("stevequote.txt");
    if (!reader) {
        cout << "Error opening file" << endl;
        return -1;
    } else {
        for (int i = 0; !reader.eof(); i++) {
            reader.get(letter);
            cout << letter;
        }
        cout << endl;
        reader.close();
    }
*/
/*
If Else
int getFactorial (int number) {
    int sum;
    if (number == 1) sum = 1;
    else sum = getFactorial(number - 1) * number;
    return sum;
}
Vector
Vector vector;
    vector <int> lotteryNumVector(10);
    int lotteryNumArray[5] = {4,13,14,24,34};
    //insert at beginning, lotteryArray, first 3 numbers
    lotteryNumVector.insert(lotteryNumVector.begin(),
                            lotteryNumArray, lotteryNumArray + 3);
    cout << lotteryNumVector.at(2) << endl;

    lotteryNumVect.insert(lotteryNumVect.begin() + 5, 44);
    cout << lotteryNumVect.at(5) << endl;

    lotteryNumVect.push_back(64); //puts 64 at back of vector

    lotteryNumVector.pop_back(); //remove last entry
    //front, empty, size


Strings
 string wholeName = "johnny";
   string yourName = wholeName.assign(wholeName);

   string firstName = wholeName.assign(wholeName, 0 , 5);
   cout << firstName << endl;

   firstName.find("on", 0); //find first instance of "on" starting at 0

   yourName.insert(5, " Justin");
   cout << yourName << endl;

   yourName.erase(6,7); //erase 6 characters starting at index 7
   cout << yourName << endl;

   yourName.replace(6,5, "Maximus"); //starting at 6, replace 5 characters
   */
