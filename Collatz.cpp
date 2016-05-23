#include "Collatz.h"
#include <iostream>
Collatz::Collatz(int number) {
       n = number;
        steps = 0;
}

int Collatz::run() {
    while ((n != 1)) {
        get_next();
        ++steps;
        if (n < 1) {
            std::cout << "error in range\n";
            break;
        }
    }

    return steps;
}

int Collatz::run(int stop_at) {
    while (n != 1 || steps >= stop_at) {
        get_next();
   }
};

void Collatz::get_nextz() {
    if (n % 2 == 0) {
        n = n/2;
    }
    else {
        n = 3 * n + 1;
    }
}

void Collatz::reset_count () { steps = 0; }
