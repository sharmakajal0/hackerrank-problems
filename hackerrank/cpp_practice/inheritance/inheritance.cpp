#include<iostream>

class BaseClass
{
  public:
    void setProtMemb( int i ) { m_protMemb = i; }
    void Display() { std::cout << m_protMemb << std::endl; }
  protected:
    int m_protMemb;
    void protfunc(){ std::cout << "Access Allowed" << std::endl;}
} x;
    // BaseClass(){
    //   std::cout << "BaseClass" << std::endl;
    // }
    // void display1(){
    //   std::cout << "This is base class" << std::endl;
    // }

class DerivedClass: public BaseClass
{
  public:
    void useProtfunc(){protfunc();}
} y;

// class RandomClass: public DerivedClass
// {
//   public:
//     RandomClass(){
//       std::cout << "Random Class" << std::endl;
//     }
//     void display(){
//       std::cout << "This is Random class" << std::endl;
//     }
// };

int main() {
  std::cout << "inheritance cpp program" << std::endl;
  x.setProtMemb(0);
  x.Display();
  y.setProtMemb(5);
  y.Display();
  y.useProtfunc();
  y.Display();

  return 0;
}
