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
