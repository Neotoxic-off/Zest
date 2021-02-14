#include "Attributes.hpp"

#include "Logs.hpp"

Attributes::a::a()
{
    Attributes::a::download(EMPTY);
    Attributes::a::href(EMPTY);
    Attributes::a::hreflang(EMPTY);
    Attributes::a::media(EMPTY);
    Attributes::a::ping(EMPTY);
    Attributes::a::referrerpolicy(EMPTY);
    Attributes::a::rel(EMPTY);
    Attributes::a::target(EMPTY);
    Attributes::a::type(EMPTY);

    return;
}

Attributes::a::~a()
{
    return;
}

std::string Attributes::a::get_template(std::string att, std::string value)
{
    std::string data = " ";

    data.append(att);
    data.append(value);
    data.append("\"");

    return (data);
}

std::string Attributes::a::get_attributes()
{
    std::string data = "";
    std::string download = Attributes::a::download();
    std::string href = Attributes::a::href();
    std::string hreflang = Attributes::a::hreflang();
    std::string media = Attributes::a::media();
    std::string ping = Attributes::a::ping();
    std::string referrerpolicy = Attributes::a::referrerpolicy();
    std::string rel = Attributes::a::rel();
    std::string target = Attributes::a::target();
    std::string type = Attributes::a::type();

    if (download != EMPTY) {
        data.append(Attributes::a::get_template("download=\"", download));
    }

    if (href != EMPTY) {
        data.append(Attributes::a::get_template("href=\"", href));
    }

    if (hreflang != EMPTY) {
        data.append(Attributes::a::get_template("hreflang=\"", hreflang));
    }

    if (media != EMPTY) {
        data.append(Attributes::a::get_template("media=\"", media));
    }

    if (ping != EMPTY) {
        data.append(Attributes::a::get_template("ping=\"", ping));
    }

    if (referrerpolicy != EMPTY) {
        data.append(Attributes::a::get_template("referrerpolicy=\"", referrerpolicy));
    }

    if (rel != EMPTY) {
        data.append(Attributes::a::get_template("rel=\"", rel));
    }

    if (target != EMPTY) {
        data.append(Attributes::a::get_template("target=\"", target));
    }

    if (type != EMPTY) {
        data.append(Attributes::a::get_template("type=\"", type));
    }

    return (data);
}

bool Attributes::a::download(std::string value)
{
    Logs logs;

    this->download_t = value;

    if (Attributes::a::download() == value) {
        logs.done("attribute download set");

        return (true);
    }
    logs.fail("attribute download not set");

    return (false);
}

std::string Attributes::a::download()
{
    return (this->download_t);
}

bool Attributes::a::href(std::string value)
{
    Logs logs;

    this->href_t = value;

    if (Attributes::a::href() == value) {
        logs.done("attribute href set");

        return (true);
    }
    logs.fail("attribute href not set");

    return (false);
}

std::string Attributes::a::href()
{
    return (this->href_t);
}

bool Attributes::a::hreflang(std::string value)
{
    Logs logs;

    this->hreflang_t = value;

    if (Attributes::a::hreflang() == value) {
        logs.done("attribute hreflang set");

        return (true);
    }
    logs.fail("attribute hreflang not set");

    return (false);
}

std::string Attributes::a::hreflang()
{
    return (this->hreflang_t);
}

bool Attributes::a::media(std::string value)
{
    Logs logs;

    this->media_t = value;

    if (Attributes::a::media() == value) {
        logs.done("attribute media set");

        return (true);
    }
    logs.fail("attribute media not set");

    return (false);
}

std::string Attributes::a::media()
{
    return (this->media_t);
}

bool Attributes::a::ping(std::string value)
{
    Logs logs;

    this->ping_t = value;

    if (Attributes::a::ping() == value) {
        logs.done("attribute ping set");

        return (true);
    }
    logs.fail("attribute ping not set");

    return (false);
}

std::string Attributes::a::ping()
{
    return (this->ping_t);
}

bool Attributes::a::referrerpolicy(std::string value)
{
    Logs logs;

    this->referrerpolicy_t = value;

    if (Attributes::a::referrerpolicy() == value) {
        logs.done("attribute referrerpolicy set");

        return (true);
    }
    logs.fail("attribute referrerpolicy not set");

    return (false);
}

std::string Attributes::a::referrerpolicy()
{
    return (this->referrerpolicy_t);
}

bool Attributes::a::rel(std::string value)
{
    Logs logs;

    this->rel_t = value;

    if (Attributes::a::rel() == value) {
        logs.done("attribute rel set");

        return (true);
    }
    logs.fail("attribute rel not set");

    return (false);
}

std::string Attributes::a::rel()
{
    return (this->rel_t);
}

bool Attributes::a::target(std::string value)
{
    Logs logs;

    this->target_t = value;

    if (Attributes::a::target() == value) {
        logs.done("attribute target set");

        return (true);
    }
    logs.fail("attribute target not set");

    return (false);
}

std::string Attributes::a::target()
{
    return (this->target_t);
}

bool Attributes::a::type(std::string value)
{
    Logs logs;

    this->type_t = value;

    if (Attributes::a::type() == value) {
        logs.done("attribute type set");

        return (true);
    }
    logs.fail("attribute type not set");

    return (false);
}

std::string Attributes::a::type()
{
    return (this->type_t);
}