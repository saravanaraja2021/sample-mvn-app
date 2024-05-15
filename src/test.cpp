#include <iostream>
#include <memory>

class Test {
  typedef std::string String;
  String name;

  public:
    Test(String iname) : name(iname){}
    String getName(){
      return name;
    }
};

int main(){
  auto t = std::make_unique<Test>("Terminal Root");
  std::cout << t->getName() << '\n';
  return 0;
}
