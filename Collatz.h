#ifndef __COLLATZ_H__
#define __COLLATZ_H__
#include <vector>
class Collatz {
    private:
        std::vector<int> sequence;

    public:
        Collatz(int number);
        int run();
        int run(int stop_at);
        void step();
        bool terminated();
        std::vector<int> get_sequence();
};

#endif
