#include <iostream>
#include <cmath>
#include <math.h>
#include <typeinfo>
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

double func(double x){
    return x;
    // where we are integrating x dx (this will be updated)
}

double sumIntegral(double lowerBound, double dx, int intervals){ // using rectangular sums for basic integration
    double summation = 0;
    for(int i = 0; i < intervals; i++){
        double xi = lowerBound + (i*dx); // this serves as different x values (say x1, x2, x3) => gets more complex as intervals increases
        double funcValue = func(xi);
        double rectangularArea = funcValue * dx;
        summation += rectangularArea;

        std::cout << summation << std::endl;
    }
    return summation;
}

void input(double lowerBound, double upperBound, double dx, int intervals){
    std::cout << "Enter your lower bound: ";
    std::cin >> lowerBound;

    std::cout << std::endl << "Enter your upper bound: ";
    std::cin >> upperBound;

    std::cout << std::endl << "Enter your the number of intervals (balance runtime with precision): ";
    std::cin >> intervals;

    dx = (double)((upperBound - lowerBound)/intervals);
}


int main(){
    double lowerBound;
    double upperBound;
    double dx;
    int intervals;

    try{
        input(lowerBound, upperBound, dx, intervals);
    }

    catch(...){
        std::cout << "Make sure your types are correct! (bad_typeid err)" << std::endl;
        input(lowerBound, upperBound, dx, intervals);
    }

    std::cout << sumIntegral(lowerBound, dx, intervals) << std::endl;

    return 0;
}