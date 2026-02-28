#include <stdio.h>

int main() {
    float investment, purchase_price, current_price;
    float shares, profit_loss;

    printf("Enter Initial Investment Amount: ");
    scanf("%f", &investment);

    printf("Enter Stock Purchase Price per Share: ");
    scanf("%f", &purchase_price);

    printf("Enter Current Stock Price per Share: ");
    scanf("%f", &current_price);

    shares = investment / purchase_price;
    profit_loss = (current_price - purchase_price) * shares;

    if (profit_loss > 0)
        printf("Profit = %.2f", profit_loss);
    else if (profit_loss < 0)
        printf("Loss = %.2f", profit_loss);
    else
        printf("No Profit No Loss");

    return 0;
}