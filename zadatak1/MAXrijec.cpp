#include "MAXrijec.h"

std::string max_word( const std::vector<std::string>& elements )
{
  std::string temp = elements[0];
  for(auto el: elements)
  {
    if(el.size() > temp.size())
      temp = el;
  }
  return temp;
}
