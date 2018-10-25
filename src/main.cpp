#include <iostream>
#include "generateIntegerPartition.hh"

int main (int ac, char** av) {
  if (ac != 2) {
    std::cout << "Usage: "<< av[0] <<" <number>" << std::endl;
    return (EXIT_FAILURE);
  }
  thgip::generateIntegerPartition(std::stoi(av[1])).compute().print();
  return (EXIT_SUCCESS);
}