## Exercises:

1. Allocate two pointers x and y. Allocating the pointers does not allocate any pointees.

```
int *x;
int *y;
```

2. Allocate a pointee and set x to point to it. Each language has its own syntax for this. What matters is that memory is dynamically allocated for one pointee, and x is set to point to that pointee. 

```
x = new int;
```

3. Dereference x to store 42 in its pointee. This is a basic example of the dereference operation. Start at x, follow the arrow over to access its pointee. 

```
*x = 42;
```

4. Try to dereference y to store 13 in its pointee. This crashes because y does not have a pointee -- it was never assigned one.

```
// Dont add to code it will crash anyway
*y = 13; 
```

5. Assign y = x; so that y points to x's pointee. Now x and y point to the same pointee -- they are "sharing".

```
y = x;
```

6. Try to dereference y to store 13 in its pointee. This time it works, because the previous assignment gave y a pointee. 

```
// y = x gave us x's pointee -- sharing it
*y = 13;
```




Images & study questions at: http://cslibrary.stanford.edu/106/ 
