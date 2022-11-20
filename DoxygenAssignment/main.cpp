#include <iostream>
#include "multiplication.h"
#include "addtions.h"
#include "subtractions.h"

/// @author    Max Huizing
/// @version   1
/// @since     18-11-2022

/// Main class.
///
/// All the math is done here.
int main() {
    int a = 5;
    int b = 10;

    int add = addtions::addition(a,b);
    int mul = multiplication::multiplications(a,b);
    int sub = subtractions::subtraction(a,b);

    std::cout << "a + b = " << add << std::endl;
    std::cout << "a * b = " << mul << std::endl;
    std::cout << "a - b = " << sub << std::endl;
    return 0;
}
