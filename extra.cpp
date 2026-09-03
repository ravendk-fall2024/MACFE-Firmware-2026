#include <iostream>

double celsiusToFarenheight(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main(){
    double celsius = 25;
    double farenheight = celsiusToFarenheight(celsius);
    std:: cout << celsius << "C is " << farenheight <<  " F" << std::endl;
    return 0;
}