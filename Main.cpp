// Darren Ly
// Rectangle Area

#include <iostream>
#include <conio.h>

using namespace std;

// Function to get the length from the user
double GetLength() {
    double length;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    return length;
}

// Function to get the width from the user
double GetWidth() {
    double width;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    return width;
}

// Function to calculate the area of the rectangle
double CalculateArea(double length, double width) {
    return length * width;
}

// Function to display the area of the rectangle
void DisplayArea(double area) {
    cout << "The area of the rectangle is: " << area << endl;
}

int main() {
    // Get user input for length and width
    double length = GetLength();
    double width = GetWidth();
    
    // Calculate the area
    double area = CalculateArea(length, width);
    
    // Display the area
    DisplayArea(area);
    
    return 0;
}