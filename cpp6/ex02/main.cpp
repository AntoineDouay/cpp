
#include "Base.cpp"

int main()
{
    Base *c1 = generate();

    identify(c1);
    identify(*c1);

    delete c1;
    return 0;
}