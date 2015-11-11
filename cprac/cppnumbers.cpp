#include <iostream>
// #include <string>
using namespace std;

struct Vector {
  int x, y, z;

};

struct Object {

  int x, y, z;
  std::string name;
  Vector d;

};

class foo {
public:

    void bar() {
        this->x = 0; // equivalent to x = 0;
    }

    int x;
};


void freebar(foo* thefoo) {
   thefoo->x = 1;
}

float numberToBaseString( float number1, float base) {

  std::cout << number1;
  return number1;
}

void display_number(int a_number) {
  cout << a_number;
  return;
}

int main()
{

  //the start of the program
  foo f;
  std::string name = "Edozie Izegbu" ;
  std::cout << name << std::endl ;
  int x = 3;

  std::cout << x * 4 <<  " hello world " << std::endl;

  std::cout << "Statically typed languages have loopholes such as type punning which can circumvent the need to define a type" << std::endl;
  numberToBaseString(100,3);
  display_number(200);
  f.bar();


	return x;


// Game over man
// Get used to it...

}
