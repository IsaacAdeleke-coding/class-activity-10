//
//  main.cpp
//  class activity 10
//
//  Created by Isaac Adeleke on 9/15/24.
//

#include <iostream>
using namespace std;

int main() {
    // Declare variables to store the sales and commission
    double sales, commission;

    // Ask the user to enter the sales amount
    cout << "Enter the sales amount: ";
    cin >> sales;

    // Simple conditional statements to calculate commission
    if (sales <= 10000) {
        commission = sales * 0.10;  // 10% commission for sales up to $10,000
    }
    else if (sales <= 15000) {
        commission = sales * 0.15;  // 15% commission for sales between $10,000 and $15,000
    }
    else {
        commission = sales * 0.20;  // 20% commission for sales over $15,000
    }

    // Display the calculated commission
    cout << "Your commission is: $" << commission << endl;

    return 0;
}

