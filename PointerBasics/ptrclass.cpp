#include <iostream>

class Simple{
  public:
    Simple(){
      std::cout << "Constructed" << std::endl;
    }
    ~Simple(){
      std::cout << "Destructed" << std::endl;
   }
};

int main() {
    
    // Pointer to simple class
    Simple* Smp = new Simple();

    // Close class object 'destructor' called
    // pointee cleanup
    delete Smp;

    // pointer cleanup
    Smp = nullptr;

    return 0;
}
