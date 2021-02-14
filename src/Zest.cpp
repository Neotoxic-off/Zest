#include "Zest.hpp"
#include "Attributes.hpp"

#include "Logs.hpp"
#include "Tools.hpp"

Zest::Zest()
{
    this->_html_ = false;

    return;
}

Zest::~Zest()
{
    this->_html_ = false;

    return;
}

bool Zest::check(bool data)
{
    return (data);
}

bool Zest::set_html(bool value)
{
    this->_html_ = value;

    return (value);
}

bool Zest::check_id_a(std::string id)
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

bool Zest::set_id_a(std::string id)
{
    a_id.push_back(id);

    return (true);
}

std::string Zest::description(std::string content)
{
    std::string begin = "<!--";
    std::string end = "-->";
    std::string data = "";

    data.append(begin);
    if (content.empty() == false) {
        data.append(content);
    }
    data.append(end);

    return (data);
}

std::string Zest::doctype(std::string content)
{
    std::string begin = "<!DOCTYPE";
    std::string end = ">";
    std::string data = "";

    data.append(begin);
    if (!content.empty()) {
        data.append(" ");
        data.append(content);
    }
    data.append(end);

    return (data);
}

std::string Zest::html()
{
    if (Zest::check(this->_html_) == true) {
        Zest::set_html(false);
        return ("</html>");
    }
    Zest::set_html(true);
    return ("<html>");
}

std::string Zest::a(std::string id)
{
    if (check_id_a(id) == true) {
        return ("</a>");
    }
    Zest::set_id_a(id);
    return ("<a>");
}

std::string Zest::a(std::string id, Attributes::a attributes)
{
    std::string begin = "<a";
    std::string end = ">";
    std::string data = "";

    if (check_id_a(id) == true) {
        return ("</a>");
    }

    data.append(begin);
    data.append(attributes.get_attributes());
    data.append(end);

    Zest::set_id_a(id);
    return (data);
}
