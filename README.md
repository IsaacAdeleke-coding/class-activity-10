# Class Activity 10: Sales Commission Calculator

This C++ program calculates the sales commission based on the total sales amount entered by the user. The commission rate varies based on the sales amount, and the program uses conditional statements to determine the correct rate.

## Program Overview

1. The user is prompted to enter a sales amount.
2. Based on the sales amount, the program applies one of the following commission rates:
   - 10% for sales up to $10,000
   - 15% for sales between $10,001 and $15,000
   - 20% for sales over $15,000
3. The program calculates the commission and displays the result.

### Code Snippet

```cpp
#include <iostream>
using namespace std;

int main() {
    double sales, commission;

    cout << "Enter the sales amount: ";
    cin >> sales;

    if (sales <= 10000) {
        commission = sales * 0.10;  // 10% commission for sales up to $10,000
    }
    else if (sales <= 15000) {
        commission = sales * 0.15;  // 15% commission for sales between $10,000 and $15,000
    }
    else {
        commission = sales * 0.20;  // 20% commission for sales over $15,000
    }

    cout << "Your commission is: $" << commission << endl;

    return 0;
}


Example Input/Output
Example:

Enter the sales amount: 12000
Your commission is: $1800
Commission Rates
10% for sales up to $10,000.
15% for sales between $10,001 and $15,000.
20% for sales over $15,000.

How to Compile and Run

To compile the program, use the following command:
g++ main.cpp -o CommissionCalculator
To run the compiled program, use:
./CommissionCalculator
Features

Accepts a sales amount as input.
Applies the appropriate commission rate based on the sales amount.
Displays the calculated commission.

