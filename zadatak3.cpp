#include <iostream>
#include <list>

void modify(std::list<int>& elements)
{
  for(auto el = elements.begin(); el!=elements.end(); ++el)
  {
    if((*el)%2!=0)
      el = elements.erase(el);
  }
}

int main(int argc, char *argv[])
{
  std::list<int> elements;
  std::cout << "Enter numbers into list: " << std::endl;
  int num;
  while(std::cin >> num)
  {
    elements.push_back(num);
  }

  modify(elements);
  elements.sort();
  
  std::cout << "Elemnets int the end " << std::endl;
  for(auto el: elements)
  {
    std::cout << el  << std::endl;
  }
  return 0;
}
