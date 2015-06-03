//
//  main.cpp
//  FRACTION CLASS
//
//  Created by Kevin Giraldo on 4/30/15.
//  Copyright (c) 2015 Kevin Giraldo. All rights reserved.
//

#include<iostream>
#include <string>
using namespace std;
class Fraction {
    private :
    int num ,den ;//Numerator and denominator
    
    public :
    
    Fraction() {set(0,1)}; // Default constructor initlized by the set function
    Fraction(int new_num , int new_den){ set(new_num,new_den)} // Constructor inilized to new values by the set function
    void set(int n ,int d) // set function in which the method normalize is called in order which follows the condition in which den is not =0.
    {num =n; den=d; normalize();}
    
    int get_num(){return num;}
    int get_den(){return den;}
    
private:
    
    void normalize(); // prototype for normalize function
    int gcf(int a,int b); // prototype for gcf function
    int lcm(int a , int b); // prototype for lcm
    
    
    
};int main(){
    
    int a,b; // declation of two variables of type integer
    
    string str; // declaration of variable type string
    
    Fraction fract; // declaration of a new object fract from the class Fraction
    
    while(true) {
        
        //Prompting the user for input for class atributtes num and den (a,b)
        cout <<"Enter numerator : ";
        cin >>  a;
        cout << "Enter a denominator :";
        cin >> b;
        fract.set(a,b); // calling the set method in order to get the num and den values
        //Displayin the object fract by calling the get methods which return the data from num and den
        cout << "Numerator is " << fract.get_num()<< endl;
        cout << "Denominator is " << fract.get_den() << endl;
        cout << "The  fraction is " << a << "/" << b;
        if(!(str[0]=='Y')||str[0]=='y')
            break;}
    
    cout <<endl;
        
        return 0;
    
    }

//Fraction class functions

void Fraction::normalize(){if(den ==0 || num==0){ 
    num =0;
    den =1;}
    
    if(den <0){
        num*=-1;
        den*=-1;
    }
    
    
    int n = gcf(num,den);
    num = num/n;
    den =den/n;
}



int Fraction::gcf(int a, int b){
    if(b==0)
    return abs(a);
else
    return gcf(b,a%b);
}

int Fraction::lcm(int a , int b){

    int n = gcf(a,b);
    return a/n*b;
}

