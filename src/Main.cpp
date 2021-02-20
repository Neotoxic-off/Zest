#include "Zest.hpp"

int set_a_att(Attributes::a *a_attributes)
{
    a_attributes->id("my_class");
    a_attributes->download("DOWNLOAD");
    a_attributes->href("HREF");
    a_attributes->media("_test_.mp4");

    return (0);
}

int set_img_att(Attributes::img *img_attributes)
{
    img_attributes->src("./TEST.png");
    img_attributes->loading("loading");

    return (0);
}

int main(void)
{
    Zest::Settings settings;
    Zest::Zest zest;
    Attributes::a a_attributes;
    Attributes::img img_attributes;

    set_a_att(&a_attributes);
    set_img_att(&img_attributes);

    std::string empty = "";

    std::cout << zest.doctype("html") << std::endl;
    std::cout << zest.html() << std::endl;
    std::cout << zest.a("main", a_attributes) << std::endl;
    std::cout << zest.a("issou") << std::endl;
    std::cout << zest.img(img_attributes) << std::endl;
    std::cout << zest.a("issou") << std::endl;
    std::cout << zest.a("main") << std::endl;
    std::cout << zest.html() << std::endl;


    return (0);
}