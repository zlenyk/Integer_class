#include <bits/stdc++.h>
#include <gmp.h>

class Integer{
    private:
        mpz_t x;
        int base;
    public:
        Integer(void);
        Integer(unsigned a);
        Integer(int a);
        Integer(char * a);
        Integer(const Integer& a);
        
        void print();
};
