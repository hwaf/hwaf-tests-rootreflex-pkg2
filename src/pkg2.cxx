#include "pkg2/pkg2.h"

MyClassPkg2::MyClassPkg2() :
  m_data(0.)
{}

MyClassPkg2::MyClassPkg2(double data) :
  m_data(data)
{}

MyClassPkg2::~MyClassPkg2()
{}

double
MyClassPkg2::data() const
{
  return m_data;
}

void hello_pkg2()
{
  hello_pkg1();
}
