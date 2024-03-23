# Advanced Computing
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

1. Create a multi-dimensional array and iterate through all the values:
```cpp

```