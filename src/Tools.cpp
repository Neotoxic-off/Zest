#include "Tools.hpp"

Tools::Tools()
{
    return;
}

Tools::~Tools()
{
    return;
}

char *Tools::malloc(int size)
{
    char *array = malloc(sizeof(char) * (size + 1));

    for (int i = 0; i <= size; i++)
        array[i] = '\0';

    return (array);
}

char *Tools::set(char *add)
{
    int add_length = length(add);
    char *array = malloc(sizeof(char) * (add_length + 1));

    for (int i = 0; i < add_length; i++) {
        array[i] = add[i];
    }

    return (array);
}

int Tools::length(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);

    return (i);
}

bool Tools::equal(char *to_compare, char *compared_to)
{
    int compare_size = length(to_compare);
    int compared_size = length(compared_to);

    if (compare_size == compared_size) {
        for (int i = 0; i < compare_size; i++) {
            if (to_compare[i] != compared_to[i])
                return (false);
        }
        return (true);
    }

    return (false);
}

int Tools::count(char *str, char c)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == c)
            count++;

    return (count);
}

char **Tools::mmalloc(int size)
{
    char **array = (char **) malloc(sizeof(char *) * (size + 1));

    for (int i = 0; i <= size; i++)
        array[i] = NULL;

    return (array);
}

char *Tools::insert(char *base, char add)
{
    int base_length = length(base);
    char *array = malloc(base_length + 1);
    int i = 0;

    for (; i < base_length; i++)
        array[i] = base[i];
    array[i] = add;

    return (array);
}

int Tools::cnf(char *str)
{
    if (str) {
        free(str);
        return (1);
    }

    return (0);
}

char **Tools::split(char *array, char sep)
{
    char **split = mmalloc(count(array, sep) + 1);
    int floor = 0;
    int previous = 0;
    char *append = NULL;

    for (int i = 0; i < Tools::length(array); i++) {
        if (array[i] == sep) {
            floor++;
        } else {
            if (i == 0 || previous < floor) {
                split[floor] = Tools::malloc(1);
                previous = floor;
            }
            append = Tools::insert(split[floor], array[i]);
            Tools::cnf(split[floor]);
            split[floor] = append;
        }
    }
    return (split);
}

char *Tools::string_to_array(std::string str)
{
    int size = str.length();
    char *_new_ = malloc(sizeof(char) * (size + 1));

    for (int i = 0; i < size; i++)
        _new_[i] = str[i];

    return (_new_);
}