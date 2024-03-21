#include <stdio.h>
#include <string.h>

// Function to convert currency
float convertCurrency(float amount, float exchangeRate) {
    return amount * exchangeRate;
}

int main() {
    // Assuming fixed exchange rates
    float exchangeRateUSD = 0.014;  // 1 INR = 0.014 USD
    float exchangeRateEUR = 0.012;  // 1 INR = 0.012 EUR
    float exchangeRateGBP = 0.011;  // 1 INR = 0.011 GBP
    
    float amount;
    char currency[4];

    printf("Enter the amount in INR: ");
    scanf("%f", &amount);

    printf("Enter the currency code to convert to (USD, EUR, GBP): ");
    scanf("%s", currency);

    if (strcmp(currency, "USD") == 0) {
        printf("%.2f INR is equal to %.2f USD\n", amount, convertCurrency(amount, exchangeRateUSD));
    } else if (strcmp(currency, "EUR") == 0) {
        printf("%.2f INR is equal to %.2f EUR\n", amount, convertCurrency(amount, exchangeRateEUR));
    } else if (strcmp(currency, "GBP") == 0) {
        printf("%.2f INR is equal to %.2f GBP\n", amount, convertCurrency(amount, exchangeRateGBP));
    } else {
        printf("Invalid currency code entered.\n");
    }

    return 0;
}

