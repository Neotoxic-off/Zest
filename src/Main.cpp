#include "Zest.hpp"

#include "Attributes.hpp"

int set_att(Attributes::a *att_a)
{
    att_a->download("URL_DOWNLOAD");
    att_a->href("MY_HREF");

    return (0);
}

int main(void)
{
    Zest zest;
    Attributes::a att_a;

    set_att(&att_a);

    std::string empty = "";

    std::cout << zest.doctype("html") << std::endl;
    std::cout << zest.html() << std::endl;
    std::cout << zest.a("main", att_a) << std::endl;
    std::cout << zest.description("DATA CONTENT") << std::endl;
    std::cout << zest.a("main") << std::endl;
    std::cout << zest.html() << std::endl;

    return (0);
}