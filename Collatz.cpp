#include "Collatz.h"
#include <iostream>
Collatz::Collatz(int beginning) {
        sequence.push_back(beginning);
        
}

int Collatz::run() {
    while (!step());
    return sequence.size();
}
        


int Collatz::run(int stop_at) {
    while (sequence.size() <= stop_at) {
        step();
    }
}
        

bool Collatz::step() {
    if (sequence.back() % 2 == 0) {
        sequence.push_back(sequence.back() / 2);
    }
    else {
        sequence.push_back(sequence.back() * 3 + 1);
    }
    return (sequence.back() == 1);
}

std::vector<int> Collatz::get_sequence() {
    return sequence;
}
