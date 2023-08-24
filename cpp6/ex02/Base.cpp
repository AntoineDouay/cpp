
#include "Base.hpp"


Base::~Base(){};

Base* generate() {
    srand(static_cast<unsigned>(time(NULL)));

    int random = rand() % 3;
    std::cout << random << std::endl;

    if (random == 0)
        return new A;
    if (random == 1)
        return new B;
    if (random == 2)
        return new C;
    return NULL;
}


void    identify(Base* p)
{
    A*  tmp = dynamic_cast<A*>(p);
    if (tmp)
    {
        std::cout << "This is class A\n";
         return ;
     }
    B*  tmpb = dynamic_cast<B*>(p);
    if (tmpb)
    {
       std::cout << "This is class B\n";
       return ;
    }

    C*  tmpc = dynamic_cast<C*>(p);
    if (tmpc)
    {
       std::cout << "This is class C\n";
        return ;
    }
}

void    identify(Base& p)
{
    try {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "This is class A\n";
    } 
    catch (std::exception& e)
	{}
    try 
    {
        B& b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "This is class B\n";
    }
    catch (std::exception& e) {}
    try
    {
        C& c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "This is class C\n";
    }
    catch (std::exception& e) {}
}