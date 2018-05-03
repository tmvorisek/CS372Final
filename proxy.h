// proxy.h
// Todd Vorisek
// CS372 - May 02, 2018

#ifndef PROXY_H
#define PROXY_H

#include <memory>

class Subject
{
private:
public:
  virtual ~Subject();
  virtual void execute() = 0;
};

class Instance : public Subject
{
private:
  unsigned int _value;
public:
  Instance(unsigned int);
  unsigned int getValue() const;
  void setValue(unsigned int);
  virtual void execute() override;
};

class Proxy : public Subject
{
private:
  std::shared_ptr<Instance> _instance;
public:
  Proxy(unsigned int);
  std::shared_ptr<Instance> operator->() const;
  virtual void execute() override;
};

#endif // PROXY_H
