#include <iostream>  
#include <string>    

// Structure to store the name details
struct Name {
    std::string first, mid, last; // Strings for first, middle, and last names
};

// Structure to store the phone details
struct Phone {
    std::string area, exch; // Strings for area code and exchange code
    long no;                // Long integer for storing the phone number
};

// Class to hold and process a person's record
class Rec {
    Name n; // Object of Name structure
    Phone p; // Object of Phone structure

public:
    void reci(); // Function to take user input
    void disp(); // Function to display user input
};

// Function to take input from the user
void Rec::reci() {
    std::cout << "Enter First Name: ";
    std::cin >> n.first; // Take first name input

    std::cout << "Enter Middle Name: ";
    std::cin >> n.mid; // Take middle name input

    std::cout << "Enter Last Name: ";
    std::cin >> n.last; // Take last name input

    std::cout << "Enter Area Code: ";
    std::cin >> p.area; // Take area code input

    std::cout << "Enter Exchange Code: ";
    std::cin >> p.exch; // Take exchange code input

    std::cout << "Enter Number: ";
    std::cin >> p.no; // Take phone number input
}

// Function to display the stored details
void Rec::disp() {
    std::cout << "\n--- Contact Details ---\n"; // Print header
    std::cout << "First Name   : " << n.first << "\n"; // Display first name
    std::cout << "Middle Name  : " << n.mid << "\n"; // Display middle name
    std::cout << "Last Name    : " << n.last << "\n"; // Display last name
    std::cout << "Area Code    : " << p.area << "\n"; // Display area code
    std::cout << "Exchange Code: " << p.exch << "\n"; // Display exchange code
    std::cout << "Number       : " << p.no << "\n"; // Display phone number
}

// Main function - program execution starts here
int main() {
    Rec t;  // Create an object of class Rec
    t.reci(); // Call function to take input
    t.disp(); // Call function to display input
    return 0; // Return 0 to indicate successful execution
}

