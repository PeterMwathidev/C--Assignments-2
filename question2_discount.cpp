#include <iostream>
using namespace std;

// Function to calculate the discount
double calculateDiscount(double purchaseAmount)
{
    double discount;

    if (purchaseAmount < 5000)
    {
        discount = purchaseAmount * 0.05;
    }
    else if (purchaseAmount < 10000)
    {
        discount = purchaseAmount * 0.10;
    }
    else
    {
        discount = purchaseAmount * 0.15;
    }

    return discount;
}

int main()
{
    double purchaseAmount;
    double discount;
    double finalAmount;

    // Prompt the user to enter the purchase amount
    cout << "Enter the purchase amount: KSh ";
    cin >> purchaseAmount;

    // Call the function
    discount = calculateDiscount(purchaseAmount);

    // Calculate final amount payable
    finalAmount = purchaseAmount - discount;

    // Display the results
    cout << "\nPurchase Amount: KSh " << purchaseAmount << endl;
    cout << "Discount Amount: KSh " << discount << endl;
    cout << "Final Amount Payable: KSh " << finalAmount << endl;

    return 0;
}
