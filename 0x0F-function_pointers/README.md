# 0x0F. C - Function pointers
> ## Foundations - Low-level programming & Algorithm ― Hatching out

### General

* What are function pointers and how to use them
* What does a function pointer exactly hold
* Where does a function pointer point to in the virtual memory

### FUNCTION POINTERS

Following are some interesting facts about function pointers. 

1. Unlike normal pointers, a function pointer points to code, not data. Typically a function pointer stores the start of executable code. 

2. Unlike normal pointers, we do not allocate de-allocate memory using function pointers. 

3. A function’s name can also be used to get functions’ address. For example, in the below program, we have removed address operator ‘&’ in assignment. We have also changed function call by removing *, the program still works 

4. Like normal pointers, we can have an array of function pointers. Below example in point 5 shows syntax for array of pointers. 

5. Function pointer can be used in place of switch case. For example, in below program, user is asked for a choice between 0 and 2 to do different tasks. 

6. Like normal data pointers, a function pointer can be passed as an argument and can also be returned from a function. 

7. Many object oriented features in C++ are implemented using function pointers in C. For example virtual functions. Class methods are another example implemented using function pointers. 

### How to declare a pointer to a function? 
