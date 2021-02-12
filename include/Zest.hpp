#ifndef _ZEST_HPP_
    #define _ZEST_HPP_

    #include <iostream>
    #include <string>
    #include <vector>

    class Zest
    {
        public:
            Zest();
            ~Zest();

            std::string description(std::string);
            std::string doctype(std::string);
            std::string html();
            std::string a(std::string);
        private:
            bool _html_;

            std::vector<std::string> ids;

            bool check(bool);
            bool set_html(bool);
            bool check_id(std::string);
            bool set_id(std::string);
    };

#endif /* _ZEST_HPP_ */