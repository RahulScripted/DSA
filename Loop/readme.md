# Loop Statement Problem and Solution in C++

## Definition

Loops in programming are used to repeat a block of code until the specified condition is met. A loop statement allows programmers to execute a statement or group of statements multiple times without repetition of code.

## Description

This repository contains a C++ problem related to loop statements and its corresponding solution. The purpose is to provide a clear illustration of how to use loop statements to solve a specific programming challenge.

## Types

Loops are 3 types => (1) For Loop Statement 
                     (2) While Loop Statement
                     (3) Do While Loop Statement  

## For Loop

```
    for (initialize expression; test expression; update expression){
        //
        // body of for loop
        //
    }
    
```

## While Loop

```
    initialization_expression;
    while (test_expression){
        // body of the while loop
        update_expression;
    }
    
```
## Do While Loop

```
    initialization_expression;
    do{
        // body of do-while loop
        update_expression;

    }while (test_expression);

```

### Example

### Code (C++)
### Input: Write a program in C++ to generate 1 to 10
```cpp
    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        for(int i = 1;i <= 10;i++){
            cout<<i<<" ";
        }
    }
```
### Output: 1 2 3 4 5 67 8 9 10
