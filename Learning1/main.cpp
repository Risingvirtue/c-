#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;




int main()
{
    string str = "some string";
    auto str2 = str;
    str[0] = '4';
    cout << str2 << endl;

    return 0;
}
/*
convert string to c_string .c_str();



References
pass in by value -> copied into function
can modify variable in function but value never changes outside function

pass in by reference -> func(&i, i2, f);
const int *x // cannot change values
int &x == reference x not longer need &x to pass in
automatically pass reference for you
-> dereference to point to another int

header
.h file to store prototypes and another file to set functions
Scope resolution vertex::setToZero()  source code function
#include header


 printf("funct1 with argument %d\n", x);
%d makes it an int

%g = float
int32_t 8 bits for int

const char *str for input string

//STRACK OVER FLOW
    const char*
    is a mutable pointer to an immutable character/string. You cannot change the contents of the location(s) this pointer points to. Also, compilers are required to give error messages when you try to do so. For the same reason, conversion from const char * to char* is deprecated.

    char* const
    is an immutable pointer (it cannot point to any other location) but the contents of location at which it points are mutable.

    const char* const
    is an immutable pointer to an immutable character/string.

    char*
    is entirely permissive.



auto "infers type (double) 1.0 == double
creates a copy
*/
