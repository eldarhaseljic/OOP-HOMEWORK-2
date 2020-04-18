#include <iostream>
#include <vector>
#include <functional>

typedef std::function <double(double)> Function;

void translate_each_element(std::vector<double>& elements, Function f){
  for(auto el : elements)
  {
    std::cout << f(el) << std::endl;
  }
  std::cout << std::endl;
}

int main(int argc, char *argv[])
{
  std::vector<double> elements;
  std::cout << "Enter numbers for translation: " << std::endl;
  double num;
    while(std::cin >> num)
    {
      elements.push_back(num);
    }
  
  std::cout << std::endl;
  auto f1 =[](double x){
    return 2*x+3;
  };
  
  std::cout << "Translated vector with function ( f(x) = 2x+3)" << std::endl; 
    translate_each_element(elements,f1);
   
  auto f2 = [](double x){
    return -3*x/2;
  };

  std::cout << "Translated vector with function ( f(x) = -3x/2 )" << std::endl;
    translate_each_element(elements,f2);

  return 0;
}
