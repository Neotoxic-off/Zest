#ifndef _LOGS_HPP_
    #define _LOGS_HPP_

    #include <iostream>

    class Logs
    {
        public:
            Logs();
            ~Logs();
        
            void done(std::string);
            void fail(std::string);

            void load(std::string, std::string);
            void wait(std::string);
            void destroy(std::string);
            void error(std::string, std::string);
            void error_args(std::string);
            void result(std::string, std::string);
    };

#endif /* _LOGS_HPP_ */