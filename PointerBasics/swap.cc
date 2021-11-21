/**
If you declare 'pass by reference' (&) as parameters,
the compiler will take care of changing the values globally.
As you can see it succesfully changed the values in t_swapCaller without using dereference (*)
We also didnt have to pass the values as &a and &b, compiler did that for us aswell
**/

void t_Swap(int &a, int &b){
	int temp;
	temp = b;

  	b = a;
  	a = temp; 
}

int t_swapCaller(){
	int a, b;
	a = 10;
	b = 20;
	Swap(a, b);
	std::cout << a << std::endl << b << std::endl;

  return 0;
}
