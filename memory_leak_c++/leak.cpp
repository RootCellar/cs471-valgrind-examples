#include <cstdlib>

class MyObject {
private:

    int x;
    int y;
    int z;

public:

    MyObject() = default;
    ~MyObject() = default;

};

int main(int argc, char **argv) {
  MyObject* obj = new MyObject;

  // To free or not to free?
  if (argc > 1) delete obj;

  exit(0);
}
