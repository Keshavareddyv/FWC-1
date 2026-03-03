#include <stdio.h>

float totalAmount(float p, float r, int t_months) {
    float t_years = t_months / 12.0;
    float si = (p * r * t_years) / 100;
    return p + si;
}

int main() {
    float p, r;
    int t;

    printf("Enter Principal, Rate, Time (in months): ");
    scanf("%f %f %d", &p, &r, &t);

    printf("Total Amount = %.2f\n", totalAmount(p, r, t));
    return 0;
}
