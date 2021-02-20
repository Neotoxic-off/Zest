#include "Zest.hpp"

#include "Logs.hpp"

Attributes::img::img()
{
    Attributes::img::id(EMPTY);
    Attributes::img::alt(EMPTY);
    Attributes::img::src(EMPTY);
    Attributes::img::crossorigin(EMPTY);
    Attributes::img::height(EMPTY);
    Attributes::img::width(EMPTY);
    Attributes::img::jsmap(EMPTY);
    Attributes::img::ismap(EMPTY);
    Attributes::img::loading(EMPTY);
    Attributes::img::longdesc(EMPTY);
    Attributes::img::referrerpolicy(EMPTY);
    Attributes::img::sizes(EMPTY);
    Attributes::img::srcset(EMPTY);
    Attributes::img::usermap(EMPTY);
    Attributes::img::style(EMPTY);

    return;
}

Attributes::img::~img()
{
    Attributes::img::id(EMPTY);
    Attributes::img::src(EMPTY);
    Attributes::img::crossorigin(EMPTY);
    Attributes::img::height(EMPTY);
    Attributes::img::width(EMPTY);
    Attributes::img::jsmap(EMPTY);
    Attributes::img::ismap(EMPTY);
    Attributes::img::loading(EMPTY);
    Attributes::img::longdesc(EMPTY);
    Attributes::img::referrerpolicy(EMPTY);
    Attributes::img::sizes(EMPTY);
    Attributes::img::srcset(EMPTY);
    Attributes::img::usermap(EMPTY);
    Attributes::img::style(EMPTY);

    return;
}


std::string Attributes::img::get_attributes()
{
    std::string data = "";
    std::string id = Attributes::img::id();
    std::string alt = Attributes::img::alt();
    std::string src = Attributes::img::src();
    std::string crossorigin = Attributes::img::crossorigin();
    std::string height = Attributes::img::height();
    std::string width = Attributes::img::width();
    std::string jsmap = Attributes::img::jsmap();
    std::string ismap = Attributes::img::ismap();
    std::string loading = Attributes::img::loading();
    std::string longdesc = Attributes::img::longdesc();
    std::string referrerpolicy = Attributes::img::referrerpolicy();
    std::string sizes = Attributes::img::sizes();
    std::string srcset = Attributes::img::srcset();
    std::string usermap = Attributes::img::usermap();
    std::string style = Attributes::img::style();

    if (id != EMPTY) {
        data += Attributes::img::get_template("class=\"", id);
    }

    if (alt != EMPTY) {
        data += Attributes::img::get_template("alt=\"", alt);
    }

    if (src != EMPTY) {
        data += Attributes::img::get_template("src=\"", src);
    }

    if (crossorigin != EMPTY) {
        data += Attributes::img::get_template("crossorigin=\"", crossorigin);
    }

    if (height != EMPTY) {
        data += Attributes::img::get_template("height=\"", height);
    }

    if (width != EMPTY) {
        data += Attributes::img::get_template("width=\"", width);
    }

    if (referrerpolicy != EMPTY) {
        data += Attributes::img::get_template("referrerpolicy=\"", referrerpolicy);
    }

    if (jsmap != EMPTY) {
        data += Attributes::img::get_template("jsmap=\"", jsmap);
    }

    if (ismap != EMPTY) {
        data += Attributes::img::get_template("ismap=\"", ismap);
    }

    if (loading != EMPTY) {
        data += Attributes::img::get_template("type=\"", loading);
    }

    if (longdesc != EMPTY) {
        data += Attributes::img::get_template("longdesc=\"", longdesc);
    }

    if (sizes != EMPTY) {
        data += Attributes::img::get_template("sizes=\"", sizes);
    }

    if (srcset != EMPTY) {
        data += Attributes::img::get_template("srcset=\"", srcset);
    }

    if (usermap != EMPTY) {
        data += Attributes::img::get_template("usermap=\"", usermap);
    }

    if (style != EMPTY) {
        data += Attributes::img::get_template("style=\"", style);
    }

    return (data);
}

std::string Attributes::img::get_template(std::string att, std::string value)
{
    return (" " + att + value + "\"");
}

bool Attributes::img::id(std::string value)
{
    Logs logs;

    this->id_t = value;

    if (Attributes::img::id() == value) {
        logs.done("img attribute id set");

        return (true);
    }
    logs.fail("img attribute id not set");

    return (false);
}

std::string Attributes::img::id()
{
    return (this->id_t);
}

bool Attributes::img::alt(std::string value)
{
    Logs logs;

    this->alt_t = value;

    if (Attributes::img::alt() == value) {
        logs.done("img attribute alt set");

        return (true);
    }
    logs.fail("img attribute alt not set");

    return (false);
}

std::string Attributes::img::alt()
{
    return (this->alt_t);
}

bool Attributes::img::src(std::string value)
{
    Logs logs;

    this->src_t = value;

    if (Attributes::img::src() == value) {
        logs.done("img attribute src set");

        return (true);
    }
    logs.fail("img attribute src not set");

    return (false);
}

std::string Attributes::img::src()
{
    return (this->src_t);
}

bool Attributes::img::crossorigin(std::string value)
{
    Logs logs;

    this->crossorigin_t = value;

    if (Attributes::img::crossorigin() == value) {
        logs.done("img attribute crossorigin set");

        return (true);
    }
    logs.fail("img attribute crossorigin not set");

    return (false);
}

std::string Attributes::img::crossorigin()
{
    return (this->crossorigin_t);
}

bool Attributes::img::height(std::string value)
{
    Logs logs;

    this->height_t = value;

    if (Attributes::img::height() == value) {
        logs.done("img attribute height set");

        return (true);
    }
    logs.fail("img attribute height not set");

    return (false);
}

std::string Attributes::img::height()
{
    return (this->height_t);
}

bool Attributes::img::width(std::string value)
{
    Logs logs;

    this->width_t = value;

    if (Attributes::img::width() == value) {
        logs.done("img attribute width set");

        return (true);
    }
    logs.fail("img attribute width not set");

    return (false);
}

std::string Attributes::img::width()
{
    return (this->width_t);
}

bool Attributes::img::jsmap(std::string value)
{
    Logs logs;

    this->jsmap_t = value;

    if (Attributes::img::jsmap() == value) {
        logs.done("img attribute jsmap set");

        return (true);
    }
    logs.fail("img attribute jsmap not set");

    return (false);
}

std::string Attributes::img::jsmap()
{
    return (this->jsmap_t);
}

bool Attributes::img::ismap(std::string value)
{
    Logs logs;

    this->ismap_t = value;

    if (Attributes::img::ismap() == value) {
        logs.done("img attribute ismap set");

        return (true);
    }
    logs.fail("img attribute ismap not set");

    return (false);
}

std::string Attributes::img::ismap()
{
    return (this->ismap_t);
}

bool Attributes::img::loading(std::string value)
{
    Logs logs;

    this->loading_t = value;

    if (Attributes::img::loading() == value) {
        logs.done("img attribute loading set");

        return (true);
    }
    logs.fail("img attribute loading not set");

    return (false);
}

std::string Attributes::img::loading()
{
    return (this->loading_t);
}

bool Attributes::img::longdesc(std::string value)
{
    Logs logs;

    this->longdesc_t = value;

    if (Attributes::img::longdesc() == value) {
        logs.done("img attribute longdesc set");

        return (true);
    }
    logs.fail("img attribute longdesc not set");

    return (false);
}

std::string Attributes::img::longdesc()
{
    return (this->longdesc_t);
}

bool Attributes::img::referrerpolicy(std::string value)
{
    Logs logs;

    this->referrerpolicy_t = value;

    if (Attributes::img::referrerpolicy() == value) {
        logs.done("img attribute referrerpolicy set");

        return (true);
    }
    logs.fail("img attribute referrerpolicy not set");

    return (false);
}

std::string Attributes::img::referrerpolicy()
{
    return (this->referrerpolicy_t);
}

bool Attributes::img::sizes(std::string value)
{
    Logs logs;

    this->sizes_t = value;

    if (Attributes::img::sizes() == value) {
        logs.done("img attribute sizes set");

        return (true);
    }
    logs.fail("img attribute sizes not set");

    return (false);
}

std::string Attributes::img::sizes()
{
    return (this->sizes_t);
}

bool Attributes::img::srcset(std::string value)
{
    Logs logs;

    this->srcset_t = value;

    if (Attributes::img::srcset() == value) {
        logs.done("img attribute srcset set");

        return (true);
    }
    logs.fail("img attribute srcset not set");

    return (false);
}

std::string Attributes::img::srcset()
{
    return (this->srcset_t);
}

bool Attributes::img::usermap(std::string value)
{
    Logs logs;

    this->usermap_t = value;

    if (Attributes::img::usermap() == value) {
        logs.done("img attribute usermap set");

        return (true);
    }
    logs.fail("img attribute usermap not set");

    return (false);
}

std::string Attributes::img::usermap()
{
    return (this->usermap_t);
}

bool Attributes::img::style(std::string value)
{
    Logs logs;

    this->style_t = value;

    if (Attributes::img::style() == value) {
        logs.done("img attribute style set");

        return (true);
    }
    logs.fail("img attribute style not set");

    return (false);
}

std::string Attributes::img::style()
{
    return (this->style_t);
}