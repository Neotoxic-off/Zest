#include "Zest.hpp"

#include "Logs.hpp"

Attributes::a::a()
{
    Attributes::a::id(EMPTY);
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
    Attributes::a::id(EMPTY);
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

std::string Attributes::a::get_template(std::string att, std::string value)
{
    return (" " + att + value + "\"");
}

std::string Attributes::a::get_attributes()
{
    std::string data = "";
    std::string id = Attributes::a::id();
    std::string download = Attributes::a::download();
    std::string href = Attributes::a::href();
    std::string hreflang = Attributes::a::hreflang();
    std::string media = Attributes::a::media();
    std::string ping = Attributes::a::ping();
    std::string referrerpolicy = Attributes::a::referrerpolicy();
    std::string rel = Attributes::a::rel();
    std::string target = Attributes::a::target();
    std::string type = Attributes::a::type();

    if (id != EMPTY) {
        data += Attributes::a::get_template("class=\"", id);
    }

    if (download != EMPTY) {
        data += Attributes::a::get_template("download=\"", download);
    }

    if (href != EMPTY) {
        data += Attributes::a::get_template("href=\"", href);
    }

    if (hreflang != EMPTY) {
        data += Attributes::a::get_template("hreflang=\"", hreflang);
    }

    if (media != EMPTY) {
        data += Attributes::a::get_template("media=\"", media);
    }

    if (ping != EMPTY) {
        data += Attributes::a::get_template("ping=\"", ping);
    }

    if (referrerpolicy != EMPTY) {
        data += Attributes::a::get_template("referrerpolicy=\"", referrerpolicy);
    }

    if (rel != EMPTY) {
        data += Attributes::a::get_template("rel=\"", rel);
    }

    if (target != EMPTY) {
        data += Attributes::a::get_template("target=\"", target);
    }

    if (type != EMPTY) {
        data += Attributes::a::get_template("type=\"", type);
    }

    return (data);
}

bool Attributes::a::id(std::string value)
{
    Logs logs;

    this->id_t = value;

    if (Attributes::a::id() == value) {
        logs.done("a attribute id set");

        return (true);
    }
    logs.fail("a attribute id not set");

    return (false);
}

std::string Attributes::a::id()
{
    return (this->id_t);
}

bool Attributes::a::download(std::string value)
{
    Logs logs;

    this->download_t = value;

    if (Attributes::a::download() == value) {
        logs.done("a attribute download set");

        return (true);
    }
    logs.fail("a attribute download not set");

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
        logs.done("a attribute href set");

        return (true);
    }
    logs.fail("a attribute href not set");

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
        logs.done("a attribute hreflang set");

        return (true);
    }
    logs.fail("a attribute hreflang not set");

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
        logs.done("a attribute media set");

        return (true);
    }
    logs.fail("a attribute media not set");

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
        logs.done("a attribute ping set");

        return (true);
    }
    logs.fail("a attribute ping not set");

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
        logs.done("a attribute referrerpolicy set");

        return (true);
    }
    logs.fail("a attribute referrerpolicy not set");

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
        logs.done("a attribute rel set");

        return (true);
    }
    logs.fail("a attribute rel not set");

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
        logs.done("a attribute target set");

        return (true);
    }
    logs.fail("a attribute target not set");

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
        logs.done("a attribute type set");

        return (true);
    }
    logs.fail("a attribute type not set");

    return (false);
}

std::string Attributes::a::type()
{
    return (this->type_t);
}