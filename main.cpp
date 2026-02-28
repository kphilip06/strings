#include <vector>
#include<string>

#include "src/raining.hpp"

int main() {
  std::vector<std::string> businesses = readBusinesses();
  sortBusinesses(businesses);
  return 0;
}