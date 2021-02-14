#include "Logs.hpp"

#include "Zest.hpp"

Logs::Logs()
{
    return;
}

Logs::~Logs()
{
    return;
}

void Logs::panel(std::string all)
{
    Zest::Settings settings;

    if (settings.verbose() == true)
        std::cout << all << std::endl;
    return;
}

void Logs::done(std::string message)
{
    panel("\033[0;32m ✓  \033[0;0m" + message);
}

void Logs::fail(std::string message)
{
    panel("\033[0;32m ✗  \033[0;0m" + message);
}

void Logs::wait(std::string message)
{
    panel("\033[0;33m ⋯  \033[0;0m" + message);
}