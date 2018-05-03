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

unsigned int Instance::getValue() const
{
  return _value;
}

void Instance::setValue(unsigned int value)
{
  _value = value;
}

// ---- PROXY METHODS ----
Proxy::Proxy(unsigned int value)
:_instance(std::make_shared<Instance>(value))
{

}

std::shared_ptr<Instance> Proxy::operator->() const
{
  std::cout << "Inside Proxy::operator->:";
  _instance->setValue(_instance->getValue()+5);
  return _instance;
}

void Proxy::execute() 
{
  std::cout << "Inside Proxy::execute:";
  _instance->execute();
}

