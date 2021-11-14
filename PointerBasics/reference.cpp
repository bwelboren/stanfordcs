#include <iostream>

// Change the networth value in function A by reference
void B(int *worth){
  *worth = 100;
}

void A(){
  int netWorth = 50;
  B(&netWorth);
  std::cout << netWorth << std::endl;
}

int main() {
    A();
    return 0;
}
