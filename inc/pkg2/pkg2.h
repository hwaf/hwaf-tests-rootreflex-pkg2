#ifndef PKG2_PKG2_H
#define PKG2_PKG2_H 1

#include "pkg1/pkg1.h"

class MyClassPkg2 {
 
public: 

  MyClassPkg2();
  MyClassPkg2(double data);
  ~MyClassPkg2();

  double data() const;

private:
  double m_data;
  MyPkg1 m_pkg1;
};

#endif /* PKG2_PKG2_H */
