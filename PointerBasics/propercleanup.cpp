// Initialize pointer
int *y; 
// Pointee
y = new int(); 

// Done using the program
// Reset the pointee
delete y; 
// We now have a dangling pointer
// Point the pointer to nothing
*y = nullptr; 
