#include <stdio.h>
void discount(int price, char student){
	float discount;
    float discountAmount;
    float finalPrice;

    if (student == 'y') {
        if (price > 500) {
            discount = 20;
        }else {
            discount = 10;
        }
    }else {
        if (price > 600) {
            discount = 15;
        }else {
            discount = 0;
        }
    }

    discountAmount = price * discount / 100;
    finalPrice = price - discountAmount;

    printf("Discount = %.0f%%\n", discount);
    printf("Discount Amount = %.2f\n", discountAmount);
    printf("Final Price = %.2f", finalPrice);
}
int main() {
    float price = 700;
    char student = 'n';
    discount(price, student);

}
