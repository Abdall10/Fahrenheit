#include <iostream>
using namespace std;
// Convert temperature from Fahrenheit to Celsius and vice versa

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

int main() {
    char choice;
    double temperature, convertedTemperature;

    // Prompt the user to choose the conversion type
    cout << "Choose the conversion type:\n";
    cout << "1. Fahrenheit to Celsius\n";
    cout << "2. Celsius to Fahrenheit\n";
    cout << "Choose transfer 1 or 2 : ";
    cin >> choice;

    // Perform the chosen conversion
    if (choice == '1') {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;    
        convertedTemperature = fahrenheitToCelsius(temperature); //Call the function and store the result
        cout << "Temperature in Celsius: " << convertedTemperature <<" C"<< endl;
    } else if (choice == '2') { 
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        convertedTemperature = celsiusToFahrenheit(temperature);
        cout << "Temperature in Fahrenheit: " << convertedTemperature <<" F"<< endl;
    } else {
        cout << "Invalid Choice!" << endl;
    }
    return 0;
}