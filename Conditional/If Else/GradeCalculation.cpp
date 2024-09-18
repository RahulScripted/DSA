// // Question: Write a program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
// Percentage >= 90% : Grade E
// Percentage >= 80% : Grade A
// Percentage >= 70% : Grade B
// Percentage >= 60% : Grade C
// Percentage >= 40% : Grade D
// Percentage < 40% : Grade F

#include<bits/stdc++.h>
using namespace std;
int main(){
    int Physics,Chemistry,Biology,Mathematics,Computer;
    cout<<"Enter your no in Physics : ";
    cin>>Physics;
    cout<<"Enter your no in Chemistry : ";
    cin>>Chemistry;
    cout<<"Enter your no in Biology : ";
    cin>>Biology;
    cout<<"Enter your no in Mathematics : ";
    cin>>Mathematics;
    cout<<"Enter your no in Computer : ";
    cin>>Computer;
    float percentage = (Physics + Chemistry + Biology + Mathematics + Computer) / 5.0;
    cout<<"Percentage will be : "<<percentage<<"%"<<endl;
    if(percentage >= 90){
        cout<<"Grade E";
    }
    else if(percentage >= 80){
        cout<<"Grade A";
    }
    else if(percentage >= 70){
        cout<<"Grade B";
    }
    else if(percentage >= 60){
        cout<<"Grade C";
    }
    else if(percentage >= 40){
        cout<<"Grade D";
    }
    else if(percentage < 40){
        cout<<"Grade F";
    }
}