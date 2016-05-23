// version 1
// created by chris young on may 17 2016

#include <iostream>
#include "Collatz.h"
#include "time.h"
int main () {
    std::cout << "enter a number to run collatz conjecture on ";
    int bound;
    std::cin >> bound;
    clock_t t = clock();
    int steps_total = 0;
    int start = 3;
    Collatz func(bound);
    func.run();
    std::vector<int> numbers = func.get_sequence();
    for (int i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }

    
    /*
    for (int start = 3; start < bound; ++start) {
        Collatz func(start);
        steps_total += func.run();
    }
    t = clock() - t;
    std::cout << steps_total << " integer operations on collatz conjecture completed in " << ((float)t)/CLOCKS_PER_SEC << " seconds" << std::endl;
*/
    return 0;
}
