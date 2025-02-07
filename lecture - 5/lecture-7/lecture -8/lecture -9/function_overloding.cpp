#include<iostream>
#include<cmath>
using namespace std;

float areaoftriangle( int b, int h) {
    return 0.5*b*h;
}

float computesemiperimeter(int a, int b, int c){

    return 0.5*( a + b + c);
}

float areaoftriangle( int a, int b, int c){
    float s = computesemiperimeter(a , b , c);
    return sqrt(s*(s -a)*(s - b)*(s - c));
}

int main(){

    cout << areaoftriangle(4,5) << endl;
    cout << areaoftriangle( 3, 4, 5) << endl;

    return 0;
}