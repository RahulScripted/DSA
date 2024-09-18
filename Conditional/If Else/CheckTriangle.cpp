// Question: Write a program to check whether a triangle is Equilateral, Isosceles or Scalene.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int side1,side2,side3;
    cout<<"Enter first side : ";
    cin>>side1;
    cout<<"Enter second side : ";
    cin>>side2;
    cout<<"Enter third side : ";
    cin>>side3;
    if(side1 == side2 && side1 == side3){
        cout<<"Triangle is equilateral";
    }
    else if((side1 == side2 && side1 != side3) || (side1 != side2 && side1 == side3) || (side1 != side2 && side2 == side3)){
        cout<<"Triangle is Isosceles";
    }
    else{
        cout<<"Triangle is Scalene";
    }
}