

#include<cstdio>

bool matchcore(const char* str, const char* pattern);

bool match(const char* char, const char* pattern)
{
    if (str == nullptr || pattern == nullptr)
        return false;
    return matchCore(str, pattern)
}

bool matchCore(const char* str, const char* pattern)
{
    if(*str == '\0' && *pattern == '\0')
        return true;
    if(*str != '\0' && *pattern == '\0')
        return false;

    if(*pattern + 1) == '*')
    {
        if (*pattern == *str || (*pattern == '.' && str != '\
