/*
Peter Zhang
This program gets the number of ingredients used and cups/refills sold
then calculates and prints out total profit and profit per cup.
*/
#include <stdio.h>

int main() {
    const double smallSellPrice = 2.00, largeSellPrice = 3.25,
                 refillPrice = 1.25, sugarPrice = 0.19, lemonPrice = 0.48,
                 smallCupPrice = 0.14, largeCupPrice = 0.18;
    double numCupsSugar, totalProfit, profitPerCup, ingredientCost;
    int numLemons, numSmallCups, numLargeCups, numRefills, totalDrinks;

    printf("Enter the number of cups of sugar used (real number):\n");
    scanf("%lf", &numCupsSugar);

    printf("Enter the number of lemons used (integer):\n");
    scanf("%d", &numLemons);

    printf("Enter the number of small cups of lemonade sold (integer):\n");
    scanf("%d", &numSmallCups);

    printf("Enter the number of large of lemonade sold (integer):\n");
    scanf("%d", &numLargeCups);

    printf("Enter the number of refills sold (integer):\n");
    scanf("%d", &numRefills);

    totalProfit = smallSellPrice * numSmallCups +
                  largeSellPrice * numLargeCups + refillPrice * numRefills;
    ingredientCost = sugarPrice * numCupsSugar + lemonPrice * numLemons +
                     smallCupPrice * numSmallCups +
                     largeCupPrice * numLargeCups;
    totalProfit = totalProfit - ingredientCost;

    totalDrinks = numSmallCups + numLargeCups + numRefills;
    profitPerCup = totalProfit / totalDrinks;

    printf("You made %lf in profit from your lemonade stand today!\n",
           totalProfit);
    printf("On average, you made %lf in profit per cup!\n", profitPerCup);

    return 0;
}