#include <iostream>
using namespace std;

int main() {
    
    const double purchaseAmount = 95.0;
    const double stateTaxRate = 0.04;   
    const double countyTaxRate = 0.02;  

    double stateTax = purchaseAmount * stateTaxRate;
    double countyTax = purchaseAmount * countyTaxRate;
    double totalTax = stateTax + countyTax;
    double totalAmount = purchaseAmount + totalTax;

    cout << "Purchase Amount: $" << purchaseAmount << endl;
    cout << "State Sales Tax: $" << stateTax << endl;
    cout << "County Sales Tax: $" << countyTax << endl;
    cout << "Total Sales Tax: $" << totalTax << endl;
    cout << "Total Amount Due: $" << totalAmount << endl;

    return 0;
}
