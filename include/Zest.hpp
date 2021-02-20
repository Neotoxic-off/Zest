#ifndef _ZEST_HPP_
    #define _ZEST_HPP_

    #include "Attributes.hpp"

    #include <iostream>
    #include <string>
    #include <vector>

    namespace Zest
    {
        class Zest
        {
            public:
                Zest();
                ~Zest();

                // description
                std::string description();
                std::string description(std::string);

                // doctype
                std::string doctype();
                std::string doctype(std::string);

                // html
                std::string html();

                // a
                std::string a(std::string);
                std::string a(std::string, Attributes::a);

                // img
                std::string img();
                std::string img(Attributes::img);

            private:
                bool _html_;

                // ID
                std::vector<std::string> a_id;

                bool check(bool);
                bool set_html(bool);
                bool check_id_a(std::string);
                bool set_id_a(std::string);
        };

        class Settings
        {
            public:
                Settings();
                ~Settings();

                bool verbose(bool);
                bool verbose();

            private:
                bool verbose_t;
        };
    };
    

#endif /* _ZEST_HPP_ */