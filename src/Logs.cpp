#include "Logs.hpp"

Logs::Logs()
{
    return;
}

Logs::~Logs()
{
    return;
}

void Logs::done(std::string message)
{
    std::cout << "\033[0;32m" << "✓  " << "\033[0;0m" << message << std::endl;
}

void Logs::fail(std::string message)
{
    std::cout << "\033[0;31m" << "✗  " << "\033[0;0m" << message << std::endl;
}

void Logs::load(std::string message, std::string value)
{
    std::cout << "\033[0;36m" << "↻  " << "\033[0;0m" << message << value << std::endl;
}

void Logs::wait(std::string message)
{
    std::cout << "\033[0;33m" << "⋯  " << "\033[0;0m" << message << std::endl;
}

void Logs::destroy(std::string message)
{
    std::cout << "\033[0;36m" << "⊗  " << "\033[0;0m" << message << std::endl;
}

void Logs::error(std::string message, std::string error)
{
    std::cout << "\033[0;31m" << "✗  " << "\033[0;0m" << message << error << std::endl;
}

void Logs::error_args(std::string binary)
{
    std::cout << "\033[0;31m" << "✗  " << "\033[0;0m" << "Usage: " << binary << " username" << std::endl;
}

void Logs::result(std::string type, std::string value)
{
    std::cout << "\033[0;35m" << type << "\033[0;0m" << " | " << value << std::endl;
}