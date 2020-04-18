#include "dodavanje.h"

void add_character(std::string& a, const char& b, const int c)
{
  a = std::string(c,b) + a;
}

void add_character(std::string& a , const int c)
{
  a = std::string(c,' ') + a;
}
