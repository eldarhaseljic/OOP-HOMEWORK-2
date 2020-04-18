#include "dodavanje.h"
#include "MAXrijec.h"
#include "IOrijecio.h"
#include <algorithm>

int main(int argc, char *argv[])
{
  std::vector<std::string> words;
  std::cout << "Enter the words: " << std::endl;
  entry(words);

  auto sort_type = [](const std::string& a, const std::string& b)
  {
    return a.size() < b.size();
  };

  sort(words.begin(),words.end(),sort_type);
  std::string longest_word = max_word(words);
  for(auto i = 0; i< words.size(); ++i)
  {
    add_character(words[i], longest_word.size() - words[i].size());
  }
  print(words);
  return 0;
}
