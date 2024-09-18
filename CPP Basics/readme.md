# c++ Basic Practice Problem

### Code (C++)
### Input: Write a program in C++ to print Hello World

```cpp
    #include <iostream>
    using namespace std;
    int main() {
        cout << "Hello World!";
        return 0;
    }
```
### Output: Hello World

#### Code Explanation

Line 1: #include <iostream> is a header file library that lets us work with input and output objects, such as cout (used in line 5). Header files add functionality to C++ programs.

Line 2: using namespace std means that we can use names for objects and variables from the standard library.

Line 3: A blank line. C++ ignores white space. But we use it to make the code more readable.

Line 4: Another thing that always appear in a C++ program, is int main(). This is called a function. Any code inside its curly brackets {} will be executed.

Line 5: cout is an object used together with the insertion operator (<<) to output/print text.

## User Input
cin is a predefined variable that reads data from the keyboard with the extraction operator (>>).

## Declaring Variables
```cpp

    type variableName = value;

```

## C++ Comments
Comments can be used to explain C++ code, and to make it more readable. It can also be used to prevent execution when testing alternative code. Comments can be singled-lined or multi-lined.

### Single-line Comments
Single-line comments start with two forward slashes (//).Any text between // and the end of the line is ignored by the compiler (will not be executed).

```cpp

    // This is a comment
    cout << "Hello World!";

```
### C++ Multi-line Comments
Multi-line comments start with /* and ends with */.

```cpp

    /* The code below will print the words Hello World!
    to the screen, and it is amazing */
    cout << "Hello World!";

```

## C++ Data Types

```cpp

    int myNum = 5;             // Integer (whole number)
    float myFloatNum = 5.99;   // Floating point number
    double myDoubleNum = 9.98; // Floating point number
    char myLetter = 'D';       // Character
    bool myBoolean = true;     // Boolean
    string myText = "Hello";   // String

```

## C++ Operators

```cpp

    +	Addition		    x + y	
    -	Subtraction		    x - y	
    *	Multiplication		    x * y	
    /	Division	    	    x / y	
    %	Modulus	        	    x % y	
    ++	Increment	       	     ++x	
    --	Decrement                    --x	

```
