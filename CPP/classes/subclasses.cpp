#include <iostream>
#include <string>
using namespace std;

class BaseClass {
  public:
    string BaseClassAttribute = "Base Class Attribute";
    void BaseClassMethod(){
      cout << "Hello from base class";
    }
};
class SubClass : public BaseClass {
  public:
    string SubClassAttribute = "Sub Class Attribute";
    void SubClassMethod(){
      cout << "Hello from sub class";
    }
};
class SubSubClass : public SubClass {
  public:
    string SubSubAttribute = "Subsub Class Attribute";
    void SubSubMethod(){
      cout << "Hello from sub sub class";
    }
};

int main(){
  BaseClass base;
  SubClass sub;
  SubSubClass subSub;

  base.BaseClassMethod();
  cout << endl;
  sub.SubClassMethod();
  sub.BaseClassMethod();
  cout << endl;
  subSub.SubSubMethod();
  subSub.SubClassMethod();
  subSub.BaseClassMethod();
}