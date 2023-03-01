// #include<iostream>
// using namespace std;
// class constrctr
// {
//  private:
//  int x, y;
//  public:
//  constrctr()
//  {
//  cout << "constructor called " << endl;
//  }
//  constrctr(int x1, int y1)
//  {
// x = x1;
// y = y1;
// cout << "Parameterized constructor called " << endl;
//  }
//  constrctr(const constrctr &p2)
//  {
// x = p2.x;
// y = p2.y;
// cout << "Copy constructor called " << endl;
//  }
//  int getX()
//  {
//  return x;
//  }
//  int getY()
//  {
//  return y;
//  }
//  ~constrctr()
//  {
//  cout << "destructor called " << endl;
//  }
// };
// int main(){
//  constrctr p1(11,20);
//  constrctr p2 = p1;
//  constrctr p3(p1);
//  return 0;
// }

#include <iostream>
using namespace std;

class Divakar {
public:
  Divakar() {
    cout << "Constructor called." << endl;
  }

  ~Divakar() {
    cout << "Destructor called." << endl;
  }
};

int main() {
  Divakar object;
  return 0;
}
