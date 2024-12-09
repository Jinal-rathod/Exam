// Write a program to calculate the Body Mass Index (BMI) and determine the health category of a person based on the BMI value. 

#include<iostream>
using namespace std;

int main(){
    float w,h;
    cin>>w>>h;
    float BMI = w/(h*h);
    if(BMI < 18.5){
        cout<<"BMI :"<<BMI<<" , Underweight"<<endl;
    }else if(18.5 <= BMI < 24.9){
        cout<<"BMI :"<<BMI<<" , Normal weight"<<endl;
    }else if(25 <= BMI < 29.9){
        cout<<"BMI :"<<BMI<<" , Overweight"<<endl;
    }else{
        cout<<"BMI :"<<BMI<<" , Obesity "<<endl;        
    }
    return 0;
}