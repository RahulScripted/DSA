// Question: Write a program to read temperature in centigrade and display a suitable message according to the temperature state below:

// Temp < 0 then Freezing weather
// Temp 0-10 then Very Cold weather
// Temp 10-20 then Cold weather
// Temp 20-30 then Normal in Temp
// Temp 30-40 then Its Hot
// Temp >=40 then Its Very Hot

#include<bits/stdc++.h>
using namespace std;
int main(){
    int temperature;
    cout<<"Enter the temperature : ";
    cin>>temperature;
    if(temperature >= 40){
        cout<<"The temperature is very hot";
    }
    else if(temperature >= 30){
        cout<<"The temperature is hot";
    }
    else if(temperature >= 20){
        cout<<"The temperature is normal in temperature";
    }
    else if(temperature >= 10){
        cout<<"The temperature is cold weather";
    }
    else if(temperature >= 0){
        cout<<"The temperature is very cold weather";
    }
    else{
        cout<<"The temperature is freezing weather";
    }
}