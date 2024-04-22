# Pointers and References
# Pointers
A pointer is an integer that stores a memory address.

Memory in the computer is a linear one dimensional line. Every byte in memory has an address.

Create the purest of pointers:
```cpp
void* ptr = {value};
```

A pointer does not have to have a type. If it has, we are saying that we hope to store that kind of data in that address.

If we define a pointer that reference nothing, we can do it by saying that it is a null pointer:
```cpp
int* ptr = nullptr;
```

Which is also equivalent to:
```cpp
int* ptr = 0;
```

Or:
```cpp
int* ptr = NULL;
```

A integer:
```cpp
int var = 8;
void* ptr = &var;
```

When we use `&` before the variable, we return the memory address of that variable.

If I changed the code to the following, my result would still be the same:

```cpp
int var = 8;
int* ptr = &var;
```

The problem would be to have that a type that is not the type of the `var`.

Why wouldn't you use the `void`?
Because it is easier to retrieve if you know the size of the data you are storing.
We call his part dereferencing:
```cpp
int var = 8;
int* ptr = &var;
std::cout << *ptr << std::endl;
```

With this, I can easily read from or write to that data.

```cpp
int var = 8;
int* ptr = &var;
*ptr = 10;
```

This would not be possible if I had used the `void` pointer.
```cpp
int var = 8;
void* ptr = &var;
*ptr = 10; // Error!
```

By creating a variable like this we are creating the variable inside the stack portion of our memory:

```cpp
int var = 8;
```

Now, we can create a pointer to a beginning of a block of memory:
```cpp
char* buffer = new char[8];
memset(buffer, 0, 8);
```

The function `memset` is used to set a block of memory to a certain value.
In case, we are setting the value `0` to all 8 spaces in the memory.

Since we are dealing with the heap, we have to the delete the memory we have allocated:
```cpp
delete[] buffer;
```

A pointer is also a variable and, therefore, it is also stored in memory.

Therefore, a double pointer is the memory address of the variable that represents a memory address.

```cpp
char** ptr = &buffer;
```

Now, we have a pointer that points to the memory address of the variable `buffer`.

# References
A reference is an extension of a pointer.
A reference are very similarly.

A reference is a way for us to "reference" a existing variable.

We cannot reference something that does not exist yet (like we did with pointers).
We have to reference a variable that is already created.

References do not have stored. They are just an alias to the variable.

```cpp
int var = 8;
int& ref = var;
```

Now, we are using the `&` as part of the variable declaration. It is part of the type.
Now, we can use `ref` as if it was `var`.

If we change the value of `ref`, we are changing the value of `var`.

It is useful to use references when we are passing variables to functions.

```cpp
void incrementValue(int value) {
    value++;
}
```

If we call this function, it will copy the value of the variable passed and just increment it. It will not actually change the variable.
```cpp
int main() {
    int var = 8;
    incrementValue(var);
    std::cout << var << std::endl; // 8
}
```

A valid option would be for us to use pointers: we could pass the memory address of our variable, retrieve the variable inside the memory address and change that value.
```cpp
void incrementValue(int* value) {
    (*value)++;
}
```
In this way, we are passing a memory address as a parameter and we dereference it inside the function.
If we kept the `value++;` without adding the `*`, we would be incrementing the memory address, not the value.

If we  also had `*value++;` without the parenthesis, we would be incrementing the value of the memory address, and than dereferencing it.
We need the parenthesis in order to dereference the value and than increment it.

In this case:
```cpp
int main() {
    int var = 8;
    incrementValue(&var);
    std::cout << var << std::endl; // 9
}
```

Reference allows us to do it more easily:
```cpp
void incrementValue(int& value) {
    value++;
}
```

Now, if we call the function, it will actually change the value of the variable.
```cpp
int main() {
    int var = 8;
    incrementValue(var);
    std::cout << var << std::endl; // 9
}
```

The reference is doing what the pointer did before!

Reference is a sintax sugar for pointers.

A reference is clearner to use.

Another important: once a reference is declared, it cannot be changed.

```cpp
int a = 5;
int b = 8;
int& ref = a;
ref = b; // Will give the value of b to a
```

In this case, `a` and `b` will be 8!

In order to be able to change, we need to use pointer:
```cpp
int a = 5;
int b = 8;
int* ptr = &a;
ptr = &b; // Will change the memory address of the pointer
```

We can change the values of `a` and `b` by:
```cpp
int a = 5;
int b = 8;
int* ptr = &a;
*ptr = 2;
ptr = &b; // Will give the value of b to a
*ref = 1;
```

Now `a` will be 2 and `b` will be 1.

## Explanation in Teach Yourself C++
A pointer is a variable that holds a memory address.

The address of operator will return the address of the object in memory: `&var`.
```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    int c = 30;
    cout << "Address of a" << a << ": " << &a << endl;
    cout << "Address of b" << b << ": " << &b << endl;
    cout << "Address of c" << c << ": " << &c << endl;
    return 0;
}
```
Output:
```
Address of a10: 0x16d8fb218
Address of b20: 0x16d8fb214
Address of c30: 0x16d8fb210
```

Programmers generally start writing the pointer with `p` in the beginning of the variable name.

```cpp
int a = 10;
int* pA = &a;
```

When you want to get initialized without assigning any memory address, it is important to add a zero to it. Otherwise, it will point to a random memory address.

The two following are equal:

```cpp
unsigned short int howOld = 50; // make a variable
unsigned short int * pAge = 0; // make a pointer
pAge = &howOld; // put howOld’s address in pAge
```

```cpp
unsigned short int howOld = 50; // make a variable
unsigned short int * pAge = &howOld; // make pointer to howOld
```

### Reassigning a Variable with Pointer
Accessing the value stored in the variable by using a pointer is called indirection because you are indirectly accessing the variable by means of the pointer.

The indirection operator is the asterisk `*`. It is also called the dereference operator.

```cpp
#include <iostream>
using namespace std;
   

int main() {
    int a = 10;
    int* pA = &a;
    cout << "a is " << a << endl;
    cout << "pA is " << *pA << endl;
    *pA = 100;
    cout << "a is " << a << endl;
    return 0;
}
```

```cpp
int main()
    {
    using namespace std;
    
    unsigned short int myAge = 5, yourAge = 10;
    
    // a pointer
    unsigned short int * pAge = &myAge;
    
    cout << "myAge:\t" << myAge
    << "\t\tyourAge:\t" << yourAge << endl;
    
    cout << "&myAge:\t" << &myAge
    << "\t&yourAge:\t" << &yourAge << endl;
    
    cout << "pAge:\t" << pAge << endl;
    cout << "*pAge:\t" << *pAge << endl;
    
    
    cout << "\nReassigning: pAge = &yourAge..." << endl << endl;
    pAge = &yourAge; // reassign the pointer
    
    cout << "myAge:\t" << myAge <<
    "\t\tyourAge:\t" << yourAge << endl;
    
    cout << "&myAge:\t" << &myAge
    << "\t&yourAge:\t" << &yourAge << endl;
    
    cout << "pAge:\t" << pAge << endl;
    cout << "*pAge:\t" << *pAge << endl;
    
    cout << "\n&pAge:\t" << &pAge << endl;
    
    return 0;
}
```

Output:
```
myAge:	5		yourAge:	10
&myAge:	0x16d12321a	&yourAge:	0x16d123218
pAge:	0x16d12321a
*pAge:	5

Reassigning: pAge = &yourAge...

myAge:	5		yourAge:	10
&myAge:	0x16d12321a	&yourAge:	0x16d123218
pAge:	0x16d123218
*pAge:	10

&pAge:	0x16d123210
```