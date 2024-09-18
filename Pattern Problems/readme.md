# Pattern Printing Program

This program is designed to print patterns based on user input. It provides a simple and interactive way to generate various patterns.

## Features

- Different pattern types
- Customize pattern

## Types

- Star Pattern
- Numerical Pattern
- Alphabetical Pattern
- Complex Pattern

### Question: Print a square of size 5 with the character '*':

```cpp

    #include<iostream>
    using namespace std;
    int main(){
        int row;
        cout<<"Enter no. of rows : ";
        cin>>row;
        for(int i = 0;i < row;i++){
            for(int j = 0;j < row;j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    }

```
#### Output: 
                    *****
                    *****
                    *****
                    *****
                    *****

### Question: Print a Triangle of size 5 with the character '*':

```cpp

    #include<iostream>
    using namespace std;
    int main(){
        int row;
        cout<<"Enter no. of rows : ";
        cin>>row;
        for(int i = 0;i < row;i++){
            for(int j = 0;j <= i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }

```
#### Output: 
                       *
                       **
                       ***
                       ****
                       *****

### Question: Print a diamond of size 5 with the character '*':

```cpp

    #include <iostream>
    using namespace std;
    int main(){
        int row;
        cout<<"Enter no. of rows : ";
        cin>>row;
        for(int i = 0;i < row;i++){
            for(int j = 0;j < row - i - 1;j++){
                cout<<" ";
            }
            for(int k = 0;k < (2 * i + 1);k++){
                cout<<"*";
            }
            cout<<endl;
        }
        for(int i = row - 1;i > 0;i--){
            for(int j = 0;j < row - i;j++){
                cout<<" ";
            }
            for(int k = 0;k < (2 * i - 1);k++){
                cout<<"*";
            }
            cout<<endl;
        }
    }

```
#### Output: 
                       *
                      ***
                     *****
                    *******
                   *********
                    *******
                     *****
                      ***
                       *

                    
