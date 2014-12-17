// crupier_unittest.cc: Juan A. Romero
// A sample program demonstrating using Google C++ testing framework.
//


// This sample shows how to write a more complex unit test for a class
// that has multiple member functions.
//
// Usually, it's a good idea to have one test for each method in your
// class.  You don't have to do that exactly, but it helps to keep
// your tests organized.  You may also throw in additional tests as
// needed.

#include "crupier.h"
#include "gtest/gtest.h"


TEST(Crupier, ConstructorParametrosDefecto) {
  Crupier p("33XX","001");
  
  EXPECT_EQ("33XX", p.getDNI());
  EXPECT_EQ("", p.getNombre());
  EXPECT_EQ("", p.getApellidos());
  EXPECT_EQ("", p.getDireccion());
  EXPECT_EQ("", p.getLocalidad());
  EXPECT_EQ("", p.getProvincia());
  EXPECT_EQ("", p.getPais());
  EXPECT_EQ(", ", p.getApellidosyNombre());
  EXPECT_EQ("001", p.getCodigo());
}
 
TEST(Crupier, ConstructorParametros) {
  Crupier p("44XX", "001", "Carlos", "Gutierrez", "C/ Mesa 1", "Aguilar", "Sevilla", "España");
  
  EXPECT_EQ("44XX", p.getDNI());
  EXPECT_EQ("Carlos", p.getNombre());
  EXPECT_EQ("Gutierrez", p.getApellidos());
  EXPECT_EQ("C/ Mesa 1", p.getDireccion());
  EXPECT_EQ("Aguilar", p.getLocalidad());
  EXPECT_EQ("Sevilla", p.getProvincia());
  EXPECT_EQ("España", p.getPais());
  EXPECT_EQ("Gutierrez, Carlos", p.getApellidosyNombre());
  EXPECT_EQ("001", p.getCodigo());
}

TEST(Crupier, ConstructorCopiaDefecto) {
  Crupier p("44XX", "001", "Carlos", "Gutierrez", "C/ Mesa 1", "Aguilar", "Sevilla", "España");
  Crupier q(p);
  Crupier r=q;
  EXPECT_EQ("44XX", q.getDNI());
  EXPECT_EQ("Carlos", q.getNombre());
  EXPECT_EQ("Gutierrez", q.getApellidos());
  EXPECT_EQ("C/ Mesa 1", q.getDireccion());
  EXPECT_EQ("Aguilar", q.getLocalidad());
  EXPECT_EQ("Sevilla", q.getProvincia());
  EXPECT_EQ("España", q.getPais());
  EXPECT_EQ("Gutierrez, Carlos", q.getApellidosyNombre());
  EXPECT_EQ("001", q.getCodigo());
  
  EXPECT_EQ("44XX", r.getDNI());
  EXPECT_EQ("Carlos", r.getNombre());
  EXPECT_EQ("Gutierrez", r.getApellidos());
  EXPECT_EQ("C/ Mesa 1", r.getDireccion());
  EXPECT_EQ("Aguilar", r.getLocalidad());
  EXPECT_EQ("Sevilla", r.getProvincia());
  EXPECT_EQ("España", r.getPais());
  EXPECT_EQ("Gutierrez, Carlos", r.getApellidosyNombre());
  EXPECT_EQ("001", r.getCodigo());
}

TEST(Crupier, OperadorIgualDefecto) {
  Crupier p("44XX", "001", "Carlos", "Gutierrez", "C/ Mesa 1", "Aguilar", "Sevilla", "España");
  Crupier q("66FF", "002");
  q=p;
  EXPECT_EQ("44XX", q.getDNI());
  EXPECT_EQ("Carlos", q.getNombre());
  EXPECT_EQ("Gutierrez", q.getApellidos());
  EXPECT_EQ("C/ Mesa 1", q.getDireccion());
  EXPECT_EQ("Aguilar", q.getLocalidad());
  EXPECT_EQ("Sevilla", q.getProvincia());
  EXPECT_EQ("España", q.getPais());
  EXPECT_EQ("Gutierrez, Carlos", q.getApellidosyNombre());
  EXPECT_EQ("001", q.getCodigo());
}