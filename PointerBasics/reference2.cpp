/**
More reference examples
**/

void Swap(int* a, int* b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void swapCaller(){
	int x = 1;
	int y = 2;
	Swap(&x, &y);
}

void swapCaller2(){
	int scores[10];
	scores[0] = 1;
	scores[9] = 2;
	Swap(&(scores[0]), &(scores[9]));
}


/**
In case the caller already has a pointer, we dont need to pass &.
**/

void C(int* worth){
	*worth = *worth * 2;	
}

void B(int* plusplus){
	*plusplus = *plusplus++;
	C(plusplus);
}


/**
Pointer examples
**/

// 1

void D(int* nummer){
   *nummer = *nummer + 1;
}

void F(){
  int nummer = 10;
  int* p_nummer = &nummer;
  A(p_nummer);
  std::cout << nummer << std::endl;
}

// 2


void G(int* a){
  int d0uble;
  // Double the value but leave original variable intact, working with the local copy here.
  d0uble = *a * 2;

  // Instead we could use "*a * 2" to globally change the variable a.
  
}

void H(){
  // Pointer to int
  int* a;

  // Pointer needs a pointee or its a null pointer dereference
  a = new int;

  *a = 50;

  G(a);

  std::cout << *a << std::endl;
  
}


