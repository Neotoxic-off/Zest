#ifndef _ZEST_HPP_
    #define _ZEST_HPP_

    #include <iostream>
    #include <string>
    #include <vector>

    #include "Attributes.hpp"

    class Zest
    {
        public:
            Zest();
            ~Zest();

            // BALISE

            // description
            std::string description(std::string);

            // doctype
            std::string doctype(std::string);

            // html
            std::string html();

            // a
            std::string a(std::string);
            std::string a(std::string, Attributes::a);

        private:
            bool _html_;

            // ID
            std::vector<std::string> a_id;

            bool check(bool);
            bool set_html(bool);
            bool check_id_a(std::string);
            bool set_id_a(std::string);
    };

#endif /* _ZEST_HPP_ */