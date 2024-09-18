// Question: Using switch statement Write a program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
// Percentage >= 90% : Grade A
// Percentage >= 80% : Grade B
// Percentage >= 70% : Grade C
// Percentage >= 60% : Grade D
// Percentage >= 40% : Grade E
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
    switch(percentage >= 90){
        case 0:
        switch(percentage >= 80){
            case 0:
            switch(percentage >= 70){
                case 0:
                switch(percentage >= 60){
                    case 0:
                    switch(percentage >= 40){
                        case 0:
                            cout<<"Grade F";
                            break;
                        case 1:
                            cout<<"Grade D";
                            break;
                    }
                    break;
                    case 1:
                        cout<<"Grade C";
                        break;
                }
                break;
                case 1:
                    cout<<"Grade B";
                    break;
            }
            break;
            case 1:
                cout<<"Grade A";
                break;
        }
        break;
        case 1:
            cout<<"Grade E";
            break;
    }
}