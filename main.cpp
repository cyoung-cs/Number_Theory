// version 1
// created by chris young on may 17 2016

#include <iostream>
#include "Collatz.h"
#include "time.h"
int main () {
    std::cout << "enter an upper bound to do collatz conjecture on ";
    int bound;
    std::cin >> bound;
    clock_t t = clock();
    int steps_total = 0;
    int start = 3;
    
        Collatz func(start);
    for (int start = 3; start < bound; ++start) {
        steps_total += func.run();
    }
    t = clock() - t;
    std::cout << steps_total << " integer operations on collatz conjecture completed in " << ((float)t)/CLOCKS_PER_SEC << " seconds" << std::endl;

    return 0;
}
