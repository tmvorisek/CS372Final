#include "proxy.h"
#include <iostream>

Subject::~Subject() = default;

// ---- INSTANCE METHODS ----
Instance::Instance(unsigned int value)
: _value(value)
{

}

void Instance::execute() 
{
  std::cout << _value << std::endl;
}

// ---- PROXY METHODS ----
Proxy::Proxy(unsigned int value)
:_instance(std::make_unique<Instance>(value))
{

}

std::unique_ptr<Instance> Proxy::operator->()
{

}

void Proxy::execute() 
{

}

