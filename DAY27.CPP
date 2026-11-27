/*
  Problem: Convert The Temperature

 Approach:
You are given a temperature value in Celsius. Your task is to convert it into:

> Kelvin
> Fahrenheit
Conversion Formulas
> Kelvin = Celsius + 273.15
> Fahrenheit = Celsius × 1.80 + 32.00

Time complexity : O(1)
Auxiliary space : O(1)

Output : 
> kelvin = 309.65
> Fahrenheit = 97.7

*/
#include <iostream>
#include <vector>
using namespace std;

vector<double> convertCelsius(double celsius) {
    double kelvin = celsius + 273.15;
    double fahrenheit = celsius * 1.80 + 32.00;

    return {kelvin, fahrenheit};
}

int main() {
    double celsius = 36.50;

    vector<double> ans = convertCelsius(celsius);

    cout << "Kelvin = " << ans[0] << endl;
    cout << "Fahrenheit = " << ans[1] << endl;

    return 0;
}