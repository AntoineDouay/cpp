
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
    // try {

    //     if (dynamic_cast<A*>(&p))
    //     {
    //        std::cout << "This is class A\n";
    //         return ;
    //     }
    
    //     if (dynamic_cast<B*>(&p))
    //     {
    //        std::cout << "This is class B\n";
    //         return ;
    //     }

    //     if (dynamic_cast<C*>(&p))
    //     {
    //        std::cout << "This is class C\n";
    //         return ;
    //     }
    // }
    // catch(std::exception & e)
    // {
    //     std::cout << "oupsi\n";
    //     return ;
    // }
    try {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "This is class A\n";
    } 
    catch (const std::bad_cast& e) {
        try 
        {
            B& b = dynamic_cast<B&>(p);
            (void)b;
            std::cout << "This is class B\n";
        }
        catch (const std::bad_cast& e) {
            try
            {
                C& c = dynamic_cast<C&>(p);
                (void)c;
                std::cout << "This is class C\n";
            }
            catch (const std::bad_cast& e)
            {
                std::cout << "oupsi\n";
            }
        }
    }
}