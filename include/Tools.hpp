#ifndef _TOOLS_HPP_
    #define _TOOLS_HPP_

    #include <iostream>

    class Tools
    {
        public:
            Tools();
            ~Tools();

            char *malloc(int);
            char *set(char *);

            int length(char *);
            char *insert(char *, char);
            bool equal(char *, char *);
            int cnf(char *);
            char *string_to_array(std::string);

            int count(char *, char);
            char **mmalloc(int);
            char **split(char *, char);
    };

#endif /* _TOOLS_HPP_ */