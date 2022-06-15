//
// Created by jared.i.green on 5/25/22.
//

#include "FizzBuzz.h"
using namespace std;

string FizzBuzz::run(int value) {
    if (value % 15 == 0) {
        return "FizzBuzz";
    }
    if (value % 3 == 0) {
        return "Fizz";
    }
    if (value % 5 == 0) {
        return "Buzz";
    }
    return to_string(value);
}
