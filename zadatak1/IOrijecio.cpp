#include "IOrijecio.h"
#include <iostream>

void entry(std::vector<std::string>& elements)
{
  std::string word;
  while(std::cin >> word)
  {
    elements.push_back(word);
  }
}

void print(const std::vector<std::string>& elements)
{
  for( auto el: elements )
    std::cout << el << std::endl;
}
