#ifndef __COLLATZ_H__
#define __COLLATZ_H__

class Collatz {
    private:
        int n;
        int steps;
        void get_next();
        

    public:
        Collatz(int number);
        int run();
        int run(int stop_at);
        void reset_count();
};

#endif
