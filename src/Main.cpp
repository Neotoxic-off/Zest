#include "Zest.hpp"

int main(void)
{
    Zest zest;

    std::string empty = "";

    std::cout << zest.doctype("html") << std::endl;
    std::cout << zest.html() << std::endl;
    std::cout << zest.a("main") << std::endl;
    std::cout << zest.description("This is a with id: main") << std::endl;
    std::cout << zest.a("other") << std::endl;
    std::cout << zest.description("This is a with id: other") << std::endl;
    std::cout << zest.a("other") << std::endl;
    std::cout << zest.a("main") << std::endl;
    std::cout << zest.html() << std::endl;

    return (0);
}