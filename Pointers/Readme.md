# Vector Statement Problem and Solution in C++

## Definition

A vector is a dynamic list of items that can shrink and grow in size. It can only store values of the same data type.

## Description

This repository contains a C++ problem related to Vector statements and its corresponding solution. The purpose is to provide a clear illustration of how to use pointer statements to solve a specific programming challenge.

## Syntax of Vector

```cpp

    vector<int> v = {3,6,7,8,11};
    
```
## push_back operator in Vector

```cpp

    vector<int> v;
    v.push_back(2);
    v.push_back(9);
    v.push_back(7);
    v.push_back(5);
    
```
## pop_back operation of Vector

```cpp

    vector<int> v;
    v.push_back(2);
    v.push_back(9);
    v.push_back(7);
    v.push_back(5);
    v.pop_back(); // Remove last element
    
```
### Code (C++)

### Input: Write a program to sort a vector
```cpp

    #include<iostream>
    #include<vector>
    #include<algorithm>
    using namespace std;
    int main(){
        vector<int> v = {3,7,2,9,11};
        cout<<"Before sort : ";
        for(int i = 0;i < v.size();i++){
            cout<<v[i]<<" ";
        }
        sort(v.begin(),v.end());
        cout<<"After sort : ";
        for(int i = 0;i < v.size();i++){
            cout<<v[i]<<" ";
        }
    }

```
### Output: Before Sort : 3 7 2 9 11
### After Sort : 2 3 7 9 11


