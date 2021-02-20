#include "Zest.hpp"
#include "Attributes.hpp"

#include "Logs.hpp"
#include "Tools.hpp"

Zest::Zest::Zest()
{
    Settings settings;

    this->_html_ = false;

    return;
}

Zest::Zest::~Zest()
{
    this->_html_ = false;

    return;
}

Zest::Settings::Settings()
{
    Settings::verbose(false);

    return;
}

Zest::Settings::~Settings()
{
    return;
}

bool Zest::Settings::verbose(bool value)
{
    this->verbose_t = value;

    if (this->verbose_t == value)
        return (true);
    return (false);
}

bool Zest::Settings::verbose()
{
    return (this->verbose_t);
}

bool Zest::Zest::check(bool data)
{
    return (data);
}

bool Zest::Zest::set_html(bool value)
{
    this->_html_ = value;

    return (value);
}

bool Zest::Zest::check_id_a(std::string id)
{
    int index = 0;

    for (auto i = this->a_id.begin(); i != this->a_id.end(); i++) {
        if (*i == id) {
            this->a_id.erase(this->a_id.begin() + index);
            return (true);
        }
        index++;
    }

    return (false);
}

bool Zest::Zest::set_id_a(std::string id)
{
    a_id.push_back(id);

    return (true);
}

std::string Zest::Zest::description()
{
    return ("<!-- --->");
}

std::string Zest::Zest::description(std::string content)
{
    return ("<!-- " + content + " -->");
}

std::string Zest::Zest::doctype()
{
    return ("<!DOCTYPE>");
}

std::string Zest::Zest::doctype(std::string content)
{
    return ("<!DOCTYPE " + content + ">");
}

std::string Zest::Zest::html()
{
    if (Zest::Zest::check(this->_html_) == true) {
        Zest::Zest::set_html(false);
        return ("</html>");
    }
    Zest::Zest::set_html(true);
    return ("<html>");
}

std::string Zest::Zest::a(std::string id)
{
    if (Zest::Zest::check_id_a(id) == true) {
        return ("</a>");
    }
    Zest::set_id_a(id);
    return ("<a>");
}

std::string Zest::Zest::a(std::string id, Attributes::a attributes)
{

    if (Zest::Zest::check_id_a(id) == true) {
        return ("</a>");
    }

    Zest::set_id_a(id);
    return ("<a" + attributes.get_attributes() + ">");
}

std::string Zest::Zest::img(Attributes::img attributes)
{
    return ("<img" + attributes.get_attributes() + ">");
}