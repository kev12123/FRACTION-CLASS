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
    int num ,den ;//Numerator and denminator
    
    public :
    void set(int n ,int d)
    {num =n; den=d; normalize();}
    
    int get_num(){return num;}
    int get_den(){return den;}
    
private:
    
    void normalize();
    int gcf(int a,int b);
    int lcm(int a , int b);
    
    
    
};int main(){
    
    int a,b;
    
    string str;
    
    Fraction fract;
    
    while(true) {
        cout <<"Enter numerator : ";
        cin >>  a;
        cout << "Enter a denominator :";
        cin >> b;
        fract.set(a,b);
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

