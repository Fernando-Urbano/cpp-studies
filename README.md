# Advanced Computing
# Lecture 1
![](assets/l101.png)

## Why learn C++?
![](assets/l102.png)

- C++ helps us to understand other languages. Very similar as Java (the mindset is very similar to C++).
- Has a very good performance. C++ is among the best, if not the best.
- It is more difficult to learn than Python.
- Has more control of the language: the performance can be improved very easily.
- C++ is very much less likely to time out in homeworks.

## Books
![](assets/l103.png)

If you never coded before in C++, it is better to go for the third one.

## C++ in Finance
C++ is very important in Finance:

![](assets/l104.png)

C++ has decreased in importance, but it is very important for high performance libraries in Python.

![](assets/l105.png)

Java can do a similar thing.

![](assets/l106.png)

The C++ community is pretty stable.

Why is Rust not used as much in Finance? In part, C++ has been in the community for very long time. Rust is very comparable in terms of performance, but it is hard to understand. The legacy is pretty huge in C++.

## About C++
![](assets/l107.png)

- Strongly typed language: code that is more specialized.
- We can use meta-programming which is a template view of the code which increases the velocity of the code.
- C++ is a fork of C.
- C++ started in the 80s.
- It does not use virtual machine (like Python and Java).

## Modern Compiler History
![](assets/l108.png)

- Compiler is the Turing Machine.
- In the Sintaxic Anaysis started: created an abstract systax representation: allowed for optimizations later that made the code better.

## Compiler/Interpreter
- C++ uses a Compiler to generate the code.


## How to Compile

![](assets/l109.png)

- What are the steps to compile: C++ > Assembly > Executable code
- The code will follow the path of the compile workflow.
- 

![](assets/l110.png)

![](assets/l111.png)

The compiler is divided in:
- front end: parse C++ to AST (abstract syntax tree).
- back end:
- middle end (not sure if this is write)

We do not need to understand how the assembly code works.

There are dynamic and static libraries in C++.

## Trading System
![](assets/l112.png)

- when we code we are at the Application Software level.
- we need to deal with multiple levels of potential problems.
- the Operating System is very critical in HFT (high performance computer).

## IDE (Integrated Development Environment)
- CLion (preferred): it is free because we are students!
- Visual Studio Code
- Eclipse

![](assets/l113.png)

## Hello World!
![](assets/l114.png)

- `iostream` is one of the library that allows us to output the text in the screen and many things else.
- `main`: we have the declaration of main.
- all the code that we want to run should be inside `main`.
- the `return 0` means that the process is done and there was no problem.
- if there is no 0 in the end, the system will say that there is a problem.
- `std:cout`: specifies the object that we are going to call in the name space.

![](assets/l115.png)

![](assets/l116.png)

1. What is the difference between an interpreter and compiler? 

2. What does `#include` do?
- It is different from `import` because we use it in the header file.
- we have the `add` function in the header file.
- we have to have the `#include <math>` in the `main`. This is will preprocess `add` here.
- it is copy pasting the header file to the `main` file.
- `import` would download the library: all libraries are dynamic in Python. The `import` loads the library: the linker will load it in C++.

3. Why do we need to add the `header` file?

## Using Variables and Constants
- Variables: help the programmer temporarily store data for.
- A finite amount of time.

## Scope of Variable
![](assets/l117.png)

## Data Types
![](assets/l118.png)

- By default an integer is 4 bytes (32 bit) - `2**31` is the maximum size if there is a sign and `2**32` if it is unsigned (we need one bit for sign)
- The overflow happens when the number is too large for the type.
- The library Big Number allows for bigger numbers.

### Variable Size
![](assets/l119.png)

### Constants
Like immutable in Python.

![](assets/l120.png)

- One defined cannot be changed.

### Enumerations
![](assets/l121.png)

- Similar to constant but faster: converts the name by a number.

1. Why should I initilize the value of variables?
If we do not set a value, it will have a random variable.

2. Why does C++ give me the option of using short int, int and long?
For short, it uses less memory.

3. Why should we not use `#define` to declare a constant?

## Arrays and Strings
Array:
- is a collection of elements
- all these elements have the same type
- this collection is a complete set
- Array must be declared with specific number of spots
- The array will have random values at first.

Strings:

![](assets/l122.png)

- Array of characters is the same as String.
- The `\0` is end of a `String`: it will go until finding a `0` if you forget it. 
- `char` is the string with only one character.
- The curly bracket will count the length of the array.
- It is not less efficient to declare the array with empty 

### String Manipulation
![](assets/l123.png)

- To manipulate, we use some outside functions.

How to join two arrays:

```cpp
void concat(const char* str1, const char* str2, char* result) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    for (int i = 0; i < len1; ++i) {
        result[i] = str1[i];
    }

    for (int i = 0; i < len2; ++i) {
        result[len1 + i] = str2[i];
    }

    result[len1 + len2] = '\0';
}
```

## Pointers
![](assets/l124.png)

- The memory is divided into cells and also into pages.
- Let's say we create `int a`. It can be anywhere in memory.
- If we want to get address of the memory, we use the address: `&a`.
- If I define `int *b`: it will have the address as its value.
- If I define `int *b = &a`
- And define `*b = 11`, the new value of `a` will be `11`.
- A pointer allow us to modify the memory...

### Stack vs Heap
- If I define inside the stack, it will be remove afterwards. 
- If I define inside a heap, it will be kept afterwards. The location in the heap is new everytime. We use `new` for it. For instance: `int *a = new int`. The variable `a` will dissapear, but the value will stay there in the memory unless delete. So, we have use `delete(a)` before the end, so we have a pointer to the location of the memory.

1. What is the advantage of using `new`?
- It will enable to allocate memory in real-time. For instance, array with no size will use heap to define a size in real-time.

2. What if you want your function to return a. How can your function return a as well as delete it from the heap?

- In C++ we have `new` and `delete`, which is different from C, due to the fact that C++ is object oriented and C is not.

A pointer is an address in memory and we need to use `*` to create it.

The size of a pointer depends on the operating system.

![](assets/l125.png)

## Reference
![](assets/l126.png)

- A reference is different from a pointer because the reference is an `alias`.


This will not change the value of `a`:
```cpp
int modify_variable()
{
    a=3;
}

int main() {
    int a = 4;
    modify_variable(a);
    printf("a=%d\n", a);

    std:cout << "Hello, World!" << std::endl;

}
```

Using the reference `&` we can modify `a`. `b` is an alias of `a` and makes a change in memory.
```cpp
int modify_variable(int &b)
{
    b=3;
}

int main() {
    int a = 4;
    modify_variable(a);
    printf("a=%d\n", a);

    std:cout << "Hello, World!" << std::endl;

}
```

With a pointer we woudl need:

```cpp
int modify_variable_ptr(int *c)
{
    *c=66;
}

int main() {
    int a = 4;
    modify_variable_ptr(&a);
    printf("a=%d\n", a);

    std:cout << "Hello, World!" << std::endl;

}
```

In this case, we need to pass the address: `modify_variable_ptr(&a);`.

`c` is a pointer.

In the project, in part 1 and 2, we use a lot of pointers.

Sometimes, we may want to modify a pointer.

How to modify a pointer?

```cpp
void modify_ptr(int **c, int *b){
    *c=b
}
```

## Operators
![](assets/l127.png)

# Lecture 2
1. Why is C++ preferred for high-frequency trading systems?

Faster execution speed and low-level hardware access.

2. What is a key advantage of compiled languages like C++ over interpreted languages like Python for system performance?

Compiled languages typically execute faster due to upfront compilation to machine code.

3. In C++, what is the difference between using `#include` and `import` directives?

`#include` only copies the header file's content, while `import` also includes the module's implementation.

Import is a library loader: all the code of the library is loaded.
The header is just the prototype of the library.

4. Which data type should be carefully chosen to avoid precision errors in financial calculations?

Floating-point.

5. Why might auto be used cautiously in function signatures?

Can make the code less readable by obscuring the type information. 

6. How does proper memory management in C++ benefit program stability?

Prevents memory leaks and segmentation faults

7. What is the primary benefit of using references over pointers in function parameters?

References are safer and more readable.
References allow for direct manipulation of passed arguments without using dereferencing.

8. Why is it important to initialize variables in C++?

Uninitialized variables can contain random values, leading to unexpected behavior.

9. What does the size of an array need to be in C++ at the time of declaration?

Specified explicitly or determined at compile-time for static arrays.
This is important because when we create an array, the stack will allocate memory for it: in assembly code will have a jump of the size of the array.

When it is dynamic, it will be allocated in the heap. The heap is a different part of the memory. The OS will allocate memory for the heap.

The stack is faster than the heap.

An array in Python is not really equivalent to an array in C++.
`numpy` has a type array which is more similar to the heap.

10. In the context of pointers and memory management, what is a crucial practice to avoid memory leaks in C++?

Ensuring every allocated memory block is eventually freed.

As soon as you deleted or freed the memory, change the pointer to `nullptr`.

11. What is the result of pointer arithmetic such as `ptr + 1` where `ptr` is a pointer to an integer and sizeof(int) is 4 bytes?

The pointer moves 4 bytes forward to point to the next integer.

12. Which of the following is a correct way to declare a pointer to a char variable?

```
char* ptr = &var;
```

`&var` is the address of var.

If we have the pointer that is pointing inside an array, doing + 1 is going to the next element.

13. When a function expects a pointer argument, what can you pass to it?

15. What does it mean if a pointer is declared as void*?

It is a generic pointer that can point to any data type.

16. Which of the following statements correctly initializes an array of pointers to integers?

```
int* arr[5] = {nullptr};
```

17. Considering an integer array int arr[] = {10, 20, 30, 40, 50};, what does the expression `*(arr + 3)` evaluate to?

40

This is `*(arr + 3)` is the same as `arr[3]`.

## Matrix
- The first representation is columns.
- The second representation is rows.

```cpp
int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
```

Retrieve number 6:
```cpp
int number = matrix[1][2]; // Second row, third column
```

The memory allocation is done in the stack.
The computer does not have a matrix represented in the memory: it just has a block of memory that is allocated.

How can we allocate an array which has two dimensions in the heap?

```cpp
int **matrix = new int*[2];
for (int i = 0; i < 2; ++i) {
    matrix[i] = new int[3];
}
```

Let's look at this code:
```cpp
#include <iostream>

int main() {
    int** twod_array = (int **) new int[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            twod_array[i][j] = 0;
        }
    }

    // check if it works by printing the array
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            std::cout << twod_array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
```

We get this error:

```
"/Users/fernandorochacorreaurbano/Desktop/Advanced Computing for Finance C++/cpp-studies/cmake-build-debug/cpp_studies"

Process finished with exit code 139 (interrupted by signal 11:SIGSEGV)
```

I am accessing a location in memory that I am not supposed to access. Why?

Semantically, it makes sense...

The problem is that the memory is not allocated in the right way.

I asked my operator to save for me 40 bytes of memory.

The operator is not allocating the memory in the right way.

The problem is here:

```cpp
twod_array[i][j] = 0;
```

That is because the operator does not know how many addresses to jump.

One possible solution: allocate the amount of columns for each array inside the array:

```cpp
#include <iostream>

int main() {

    int rows = 3;
    int cols = 4;

    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    // initialize matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = 0;
        }
    }

    // print matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
```

In terms of performance, it is not good.

The memory is not contiguous: there is no guarantee that the memory is contiguous.

We have memory putted in different places (different pages!).
This makes the performance be worse.

## One Solution for Memory Allocation
```cpp
int main() {

    int (*matrix)[8] = new int[8][8];

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++){
            matrix[i][j] = 10 + i * 10 + j + 1;
        }
    }

    // print
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++){
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
```

## Classes
![](assets/l201.png)

```cpp
#include <stdint.h>
#include <iostream>
class Order
{
    // Member attributes:
    std::string order_id;
    bool is_bid;
    uint64_t quantity;
    double price;
    // Member functions:
    void cancel();
    void fill(uint64_t qty);
    ...
};
```
- `this` is the equivalent of `self` in Python.
- `Order::` is the namespace of the class.
- We must define the attributes and the methods of the class.
- The class attributes are private by default (if a variable is private, it can only be used in the scope of the class).

The way to make it public is to use `public`:

```cpp
class Order
{
    public:
    // Member attributes:
    std::string order_id;
    bool is_bid;
    uint64_t quantity;
    double price;
    // Member functions:
    void cancel();
    void fill(uint64_t qty);
    ...
};
```

The other one is `protected`.

What is the difference between `struct` and `class`?

The only difference is that the default access level is `public` in `struct` and `private` in `class`.

For instance, everything is public here:
```cpp
struct Order
{
    // Member attributes:
    std::string order_id;
    bool is_bid;
    uint64_t quantity;
    double price;
    // Member functions:
    void cancel();
    void fill(uint64_t qty);
    ...
};
```

## Instance of a Class
![](assets/l202.png)

```cpp
double pi= 3.1415; // a variable of type double
Order order1; // first Order: an object of class Order
```

If we want to create a class on the heap:
```cpp
Order *order2 = new Order;
```

What is the difference between stack and heap?
- on the stack, when the function is done, the memory is deallocated.
- on the heap, the memory is not deallocated.
- the heap is slower than the stack.

On the stack, the object will be removed automatically, in the heap, we need to remove it manually.

## Constructor and Destructor
### Constructor
```cpp
class Order
{
    public:
    // Member attributes:
    std::string order_id;
    bool is_bid;
    uint64_t quantity;
    double price;
    // Member functions:
    void cancel();
    void fill(uint64_t qty);
    // Constructor:
    Order(std::string id, bool bid, uint64_t qty, double pr)
    {
        order_id = id;
        is_bid = bid;
        quantity = qty;
        price = pr;
    }
};
```

- The constructor is a function that is called when the object is created.
- It has the same name as the class.
- It does not have a return type.

### Destructor
```cpp
class Order
{
    public:
    // Member attributes:
    std::string order_id;
    bool is_bid;
    uint64_t quantity;
    double price;
    // Member functions:
    void cancel();
    void fill(uint64_t qty);
    // Constructor:
    Order(std::string id, bool bid, uint64_t qty, double pr)
    {
        order_id = id;
        is_bid = bid;
        quantity = qty;
        price = pr;
    }
    // Destructor:
    ~Order()
    {
        std::cout << "Order " << order_id << " destroyed" << std::endl;
    }
};
```

- The destructor is called when the object is destroyed.

A main file to run it:
```cpp
#include <iostream>
#include "Order.h"

int main() {
    Order order1("123", true, 100, 100.0);
    Order *order2 = new Order("456", false, 200, 200.0);

    delete order2;

    return 0;
}
```

- The `order1` will be deleted automatically.
- The `order2` will not be deleted automatically: we need t call the destructor with `delete`.

### Copy Constructor
```cpp
class Order
{
    Order(const Order & Order); // copy constructor
};
Order :: Order(const Order & orderSource)
{
// Copy constructor implementation code
}
```

- The copy constructor is called when a new object is created from an existing object.
- It is used to create a copy of an object.
It can be done in two ways:

```cpp
Order order1("123", true, 100, 100.0);
Order order2 = order1; // copy constructor
```

```cpp
Order order1("123", true, 100, 100.0);
Order order2(order1); // copy constructor
```

## Shallow Copy vs Deep Copy
- Shallow copy: the pointer is copied, but the memory is not copied.
- Deep copy: the memory is copied.

A copy constructor is a shallow copy: it will only copy the address.

If we have a pointer in the class, we need to do a deep copy.

Depending on the case, a shallow copy or deep copy is needed.

```cpp
class Order
{
    public:
    // Member attributes:
    std::string order_id;
    bool is_bid;
    uint64_t quantity;
    double price;
    // Member functions:
    void cancel();
    void fill(uint64_t qty);
    // Constructor:
    Order(std::string id, bool bid, uint64_t qty, double pr)
    {
        order_id = id;
        is_bid = bid;
        quantity = qty;
        price = pr;
    }
    // Destructor:
    ~Order()
    {
        std::cout << "Order " << order_id << " destroyed" << std::endl;
    }
    // Copy Constructor:
    Order(const Order &orderSource)
    {
        order_id = orderSource.order_id;
        is_bid = orderSource.is_bid;
        quantity = orderSource.quantity;
        price = orderSource.price;
    }
};
```

`this` is a pointer: an important concept of C++.

### Friend of a Class
A class does not permit external access to its private members.

But we can give access to a class to another class.

```cpp
class Person {
    private:
    int age;
    public:
    Person(int age) {
        this->age = age;
    }
    friend class Display;
};

class Display {
    public:
    void displayAge(Person &p) {
        std::cout << "Age: " << p.age << std::endl;
    }
};
```

### Quiz
What is the difference between the instance of a class and an object of that class and te class itself?

## Concept of Inheritance
We have a base class and a derived class.

In C++, we can do multiple inheritance, like we can in Python.

- If the superclass has a attribute that is private, the subclass will not have access to it.
- If the superclass has a attribute that is protected, the subclass will have access to it.

Example of inheritance with Order and FOKOrder:
```cpp
class Order
{
    public:
    // Member attributes:
    std::string order_id;
    bool is_bid;
    uint64_t quantity;
    double price;
    // Member functions:
    void cancel();
    void fill(uint64_t qty);
    // Constructor:
    Order(std::string id, bool bid, uint64_t qty, double pr)
    {
        order_id = id;
        is_bid = bid;
        quantity = qty;
        price = pr;
    }
    // Destructor:
    ~Order()
    {
        std::cout << "Order " << order_id << " destroyed" << std::endl;
    }
    // Copy Constructor:
    Order(const Order &orderSource)
    {
        order_id = orderSource.order_id;
        is_bid = orderSource.is_bid;
        quantity = orderSource.quantity;
        price = orderSource.price;
    }
};

class FOKOrder : public Order
{
    public:
    FOKOrder(std::string id, bool bid, uint64_t qty, double pr) : Order(id, bid, qty, pr)
    {
        // Additional code for FOKOrder
    }
};
```

## Exercise
You have “Financial Products” which has the following
attributes:
• symbol
• price
• You have “Option” having the following attributes:
• expiration date
• You have “Fixed income” having the following attributes
• interest rate
• term date

Create a class “Financial Products” and two classes “Option” and “Fixed income” which inherit from “Financial Products”.

```cpp
#include <iostream>
#include <string>

class FinancialProducts
{
    public:
    std::string symbol;
    double price;
    FinancialProducts(std::string symbol, double price)
    {
        this->symbol = symbol;
        this->price = price;
    }
};

class Option : public FinancialProducts
{
    public:
    std::string expiration_date;
    Option(std::string symbol, double price, std::string expiration_date) : FinancialProducts(symbol, price)
    {
        this->expiration_date = expiration_date;
    }
};

class FixedIncome : public FinancialProducts
{
    public:
    double interest_rate;
    std::string term_date;
    FixedIncome(std::string symbol, double price, double interest_rate, std::string term_date) : FinancialProducts(symbol, price)
    {
        this->interest_rate = interest_rate;
        this->term_date = term_date;
    }
};
```

# Lecture 3
## Copy Constructor
```cpp
class Trader {
    private:
    std::string name;
    int age;
    public:
    Trader(std::string name, int age) {
        this->name = name;
        this->age = age;
    }
};


class Order {
    private:
    Trader *trader;
    public:
    Order(Trader *trader): trader(trader) {}
    Order(const Order &order) {
        trader = new Trader(*order.trader);
    }
};

int main() {
    Trader t1("John", 30);
    Order o1(&t1);
    Order o2(o1);
    printf("Name: %s\n", o2.trader->name.c_str());
    printf("Age: %d\n", o2.trader->age);
    return 0;
}
```

Considering that you are using this, if you change the o1, the o2 will also change.

How can we avoid this?

We need to do a deep copy. We create a method that receives the reference.

```cpp
Order(const Order &order) {
    trader = new Trader(*order.trader);
}
```

In this way, we can make sure that we have another object in memory, with another `trader`.

If we try that, the addresses will be different.

That is difference between shallow and deep copy.

If you do not redefine the copy constructor, it will be a shallow copy.

## Assignment Operator
```cpp
Order &operator=(const Order &order) {
    if (this == &order) {
        return *this;
    }
    delete trader;
    trader = new Trader(*order.trader);
    return *this;
}
```

Why do we need to return `*this`?
It is a reference to the object.

```cpp
#include <iostream>
#include <stdint.h>
#include <iostream>

class Trader{
public:
    std::string name;
    Trader(std::string name_):name(name_){}
};

class Order{

public:
    Trader * trader;
    int quantity;
    Order(Trader *trader_, int quantity_):trader(trader_),quantity(quantity_){}
    Order(const Order &o){
        trader = new Trader(*(o.trader));
    }
    Order& operator=(const Order &o){
        trader = o.trader;
        return *this;
    }
};

int main() {
    Trader t1("seb");
    Order o1(&t1,100);
    Order o2(o1);
    Order o3=o1; // <==> Order o3(o1);
    o3 = o1 = o2; // <==> o3.operator=(o1.operator=(o2));
    o2.trader->name="nic";
    printf("address of the trader:%p\n", o1.trader);
    printf("address of the trader:%p\n", o2.trader);
    std::cout  << "name of o1 trader:" << o1.trader->name << std::endl;
    std::cout  << "name of o2 trader:" << o2.trader->name << std::endl;

    return 0;
}
```

One possible way to imeplement the `operator+:

```cpp
Order operator+(const Order &o){
    return Order(trader, quantity + o.quantity);
}
```

How to implement the `++o1`?
```cpp
Order& operator++() {
    quantity++;
    return *this;
}
```

And `o1++`?
```cpp
Order operator++(int) {
    Order temp = *this;
    quantity++;
    return temp;
}
```

This is used in different ways in C++:
```cpp
int o1 = 5;
int prefix_result = ++o1; // o1 is incremented first, then it is assigned. o1 is now 6, prefix_result is 6.

o1 = 5; // reset o1 to 5 for the next example
int postfix_result = o1++; // o1's current value (5) is assigned, then it is incremented. o1 is now 6, but postfix_result is 5.
```

In the same way, this uses the value of `o2` before incrementing it.
```cpp
Order o1(o2++);
```

The other way is:
```cpp
Order o1(++o2);
```

This is faster:
```cpp
for (Order o; o <= 10; ++o) {
    std::cout << o.quantity << std::endl;
}
```

Than this:
```cpp
for (Order o; o <= 10; o++) {
    std::cout << o.quantity << std::endl;
}
```

Because the first one does not create a temporary object.

### Operator to display
```cpp
std::ostream& operator<<(std::ostream &os, const Order &o) {
    os << "Trader: " << o.trader->name << ", Quantity: " << o.quantity;
    return os;
}
```

### Polimorphism

```cpp
class Order {
    public:
    virtual void print() {
        std::cout << "Order" << std::endl;
    }
};
```

```cpp
class FOKOrder : public Order {
    public:
    void print() {
        std::cout << "FOKOrder" << std::endl;
    }
};
```

If there is a `virtual`, it prints the `FOKOrder`, otherwise it prints the `Order`.
```cpp
int main() {
    Order *o = new FOKOrder();
    o->print();
    return 0;
}
```

What is the weakness of the virtual?
- Inline: we cannot use inline function. We would replace the function code for assembly code.
Inline can make the function faster, and we would not be able to use it.

## Abstract Class
```cpp
class Order {
    public:
    virtual void print() = 0; // pure virtual function
};
```

The virtual returning 0 leads to us having an abstract class: it cannot be instantiated.

## C++ Casting Operators
- Static: at compilation (faster for running)
- Dynamic: at runtime level.

Trasform one class into another class.

Application of static casting:
```cpp
int main() {
    double d = 3.14;
    int i = static_cast<int>(d);
    return 0;
}
```

Application of dynamic casting:
```cpp
class Order {
    public:
    virtual void print() = 0;
};

class FOKOrder : public Order {
    public:
    void print() {
        std::cout << "FOKOrder" << std::endl;
    }
};

int main() {
    Order *o = new FOKOrder();
    FOKOrder *fok = dynamic_cast<FOKOrder *>(o);
    if (fok) {
        fok->print();
    }
    return 0;
}
```

The `dynamic_cast<FOKOrder *>(o);` could be a `static_cast` as well.
But if it is a `static_cast`, we would have the risk of not converting it properly.

Therefore, we can use `dynamic_cast` to check if it is possible to convert it, but it is slower in runtime.

```cpp
class PrivateOrder {
    private:
    int a;
    int b;
    public:
    PrivateOrder(int a, int b): a(a), b(b) {}
};

int main() {
    PrivateOrder po1(1, 2);
    po1.a;
    po1.b;
    int* temppointer = reinterpret_cast<int*>(&po1);
    *temppointer = 3;
    *(temppointer + 1) = 4;
    std::cout << po1.a << std::endl;
}
```

Anything in memory can be accessed!

We can use `reinterpret_cast` to access the memory.

## Preprocessor
The preprocessor comes before the compiler.

Include is the preprocessor:

```cpp
#include <iostream>
```

The preprocessor runs before the compiler starts.

```cpp
#include <iostream>

using namespace std;

#define add(X, Y) X + Y
int main() {
    string a = "Hello";
    string b = "World";
    string c = add(a, b);
    std::cout << c << std::endl;
    return 0;
}
```

This works, but we are not specifying the type.

To solve that, we are using template.

### Template
```cpp
#include <iostream>

using namespace std;

template <typename T>
T add(T X, T Y) {
    return X + Y;
}

int main() {
    string a = "Hello";
    string b = "World";
    string c = add(a, b);
    std::cout << c << std::endl;
    return 0;
}
```

The compilation type is going to increase. When we have a lot of templates in the code, it will take a long time to compile.

What is important is that the runtime is small.

We can solve a lot of problems with templates.

We can also have different types in the template.

```cpp
#include <iostream>

using namespace std;

template <typename T1, typename T2>
T3 add(T1 X, T2 Y) {
    return X + Y;
}
```

The template increases the compilation time.

## Standard Template Library (STL)
The STL has the basic data structures:
- template classes
- functions
- containers
- iterators
- algorithms for manipulating content

# Lecture 4
## Order Book
- Insert an Order
- Modify an Order (we need to have the unique identifier of the order)
- Cancel an Order

We have the layers and we need to be able to retrieve the order quickly.
The best data structure to do that is a hash table.

The complexity of a hash table is O(1), unless there are collisions.

The problem with space is that we need to have a lot of space.

If the size of allocation is too big, we will have many pages: the algorithm has complexity O(1), but the implementation is not O(1).
We will need to check the page (the buffer is higher than the page in terms of size).

We can change the hash function to make it better, but we cannot solve this problem so efficiently.

To store the price, we can use a tree, with complexity of O(log(n)).

How can we store the orders in memory?

We have the order in the array.
- the hash map points to the order in the array.
- the tree points to the order in the array.

## Standard Template Library (STL)
- `multiset`: number of orders associated to this key.
- `set`: unique key.
- `multimap`: order id (or price level) and how many orders are there.

If we don't know the size, we might want to use `vector`.
If we want to search a lot, we want to use a `map`.

- `dqueue`: is a double-ended queue. Can insert in the beginning and in the end of the vector.
- `stack`: last in, first out.
- `queue`: first in, first out.

Double linked list is a list in C++.

```cpp
#include <iostream>

struct Node {
public:
    int number;
    Node* next;
};


struct NodeList {
public:
    Node* head;
    Node* tail;

    NodeList() {
        head = NULL;
        tail = NULL;
    }

    void add_number(int number) {
        Node* newNode = new Node();
        newNode->number = number;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
};

int main() {
    NodeList list;
    list.add_number(100);
    list.add_number(200);
    list.add_number(300);

    Node* current = list.head;
    while (current != NULL) {
        std::cout << current->number << std::endl;
        current = current->next;
    }

    return 0;
}
```

**check forward list implementation**
 
## Set
Is the tree.

For the order, we will have a tree that will have a map inside (each price level).

# Smart Pointers
- `unique_ptr`: only one pointer can point to the object.
- `shared_ptr`: multiple pointers can point to the object.


## Order Killer
```cpp
#include <iostream>

#include <stdint.h>
#include <iostream>
#include <list>
using namespace std;

class Order{
    int order_id;
public:
    Order(int oid):order_id(oid) {
        cout << "call constructor for " << oid << endl;
    }
    ~Order() {
        cout << "call destructor for " << order_id << endl;
    }

};

class OrderKiller{
public:
    Order *order;
    OrderKiller(Order *o1):order(o1){}

    ~OrderKiller() {
        delete order;
    }
};

int main() {
    {
        Order *o1 = new Order(1);
        OrderKiller *ok = new OrderKiller(o1);
        delete ok;
    }
    std::cout << "end of my code" << std::endl;
    return 0;
}
```
















