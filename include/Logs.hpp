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
            void wait(std::string);

        private:
            void panel(std::string);
    };

#endif /* _LOGS_HPP_ */