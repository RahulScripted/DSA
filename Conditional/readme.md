# Conditional Statement Problem and Solution in C++

## Definition

Conditional statements in C are programming constructs that allow a program to execute different blocks of code based on whether a certain condition is true or false.

## Description

This repository contains a C++ problem related to conditional statements and its corresponding solution. The purpose is to provide a clear illustration of how to use conditional statements to solve a specific programming challenge.

## Types

Conditional Statements are 3 types => 
                     (1) If-else
                     (2) Switch
                     (3) Ternary

## If-else

```
    if (test-expression){
        True block of statements
    }
    Else
    {
        False block of statements
    }
    Statements;
    
```

## Ternary

```
    (condition) ? (variable = Expression2) : (variable = Expression3);
    
```
## Switch

```
    Switch (expression){
    case value1:
        //Statements 
        break;
    case value 2:
        //Statements
        break; 
    case value 3:
        //Statements 
        break;
    case value n:
        //Statements
        break;
    Default:
        //Statements
    }

```
### Example

Question: Write a program to print 1 to 10

### Code (C++)
### Input: Write a program in C++ to check whether it's odd or even
```cpp
    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int num = 4;
        if(num % 2 == 0){
          cout<<"Even number";
        }
        else{
          cout<<"Odd number";
        }
    }
```
### Output: Even number
