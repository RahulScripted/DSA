# Function Statement Problem and Solution in C++

## Definition

Functions are the basic building blocks of a program. A function is a set of statements enclosed within curly brackets ({}) that take inputs, do the computation, and provide the resultant output.

## Description

This repository contains a C++ problem related to function statements and its corresponding solution. The purpose is to provide a clear illustration of how to use function statements to solve a specific programming challenge.

## Syntax

```cpp

    void myFunction() {
    // code to be executed
    }
    
```
### Code (C++)

### Input: Create a function to print Hello World any return data to main() function
```cpp

    #include<iostream>
    using namespace std;

    void print(){
        cout<<"Hello World";
    }
    int main(){
        print();
    }

```
### Output: Hello World


### Input: Create a function to display fibonacci series
```cpp

    #include<iostream>
    using namespace std;

    void fibonacci(int num){
        int a = 0,b = 1;
        cout<<"Fibonacci series : "<<a<<" "<<b<<" ";
        for(int i = 2;i <= num;i++){
            int sum = (a + b);
            cout<<sum<<" ";
            a = b;
            b = sum;
        }  
    }
    int main(){
        int num;
        cout<<"Enter number : ";
        cin>>num;
        fibonacci(num);
    }

```
### Output: Enter number: 7
### Fibonacci Series: 0 1 1 2 3 5 8