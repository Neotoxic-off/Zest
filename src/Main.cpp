#include "Zest.hpp"

int set_att(Attributes::a *a_attributes)
{
    a_attributes->download("URL_DOWNLOAD");
    a_attributes->href("MY_HREF");
    a_attributes->media("MABITE.mp4");

    return (0);
}

int main(void)
{
    Zest::Zest zest;
    Attributes::a a_attributes;

    set_att(&a_attributes);

    std::string empty = "";

    std::cout << zest.doctype("html") << std::endl;
    std::cout << zest.html() << std::endl;
    std::cout << zest.a("main", a_attributes) << std::endl;
    std::cout << zest.a("issou") << std::endl;
    std::cout << zest.description("ISSOU CONTENT") << std::endl;
    std::cout << zest.a("issou") << std::endl;
    std::cout << zest.description("DATA CONTENT") << std::endl;
    std::cout << zest.a("main") << std::endl;
    std::cout << zest.html() << std::endl;

    return (0);
}