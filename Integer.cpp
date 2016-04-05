#include "Integer.h"

Integer::Integer()                  {mpz_init_set_ui(x,0); base=10;}
Integer::Integer(unsigned int a)    {mpz_init_set_ui(x,a); base=10;}
Integer::Integer(int a)             {mpz_init_set_si(x,a); base=10;}
Integer::Integer(char* a)           {mpz_init_set_str(x,a,10); base=10;} 
Integer::Integer(const Integer& a)  {mpz_init_set(x,a.x); base=a.base;} 

void Integer::print()               {mpz_out_str(NULL,base,x);}
