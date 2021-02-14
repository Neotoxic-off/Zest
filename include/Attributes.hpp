#ifndef _ATTRIBUTES_HPP_
    #define _ATTRIBUTES_HPP_

    #define EMPTY "_EMPTY_"

    #include <iostream>
    #include <string>

    namespace Attributes
    {
        class a
        {
            public:
                a();
                ~a();

                std::string get_attributes();

                // download
                bool download(std::string);
                std::string download();

                // href
                bool href(std::string);
                std::string href();

                // hreflang
                bool hreflang(std::string);
                std::string hreflang();

                // media
                bool media(std::string);
                std::string media();

                // ping
                bool ping(std::string);
                std::string ping();

                // referrerpolicy
                bool referrerpolicy(std::string);
                std::string referrerpolicy();

                // rel
                bool rel(std::string);
                std::string rel();

                // target
                bool target(std::string);
                std::string target();

                // type
                bool type(std::string);
                std::string type();

                std::string download_t;
                std::string href_t;
                std::string hreflang_t;
                std::string media_t;
                std::string ping_t;
                std::string referrerpolicy_t;
                std::string rel_t;
                std::string target_t;
                std::string type_t;

            private:
                std::string get_template(std::string, std::string);
        };
    };

#endif /* _ATTRIBUTES_HPP_ */