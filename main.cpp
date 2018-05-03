// main.cpp
// Todd Vorisek
// CS372 - May 02, 2018

#include "proxy.h"
#include <iostream>

int main(int argc, char const *argv[])
{
  Proxy p(1);
  p.execute();
  p->execute(); // -> and . have different functionality.
  return 0;
}