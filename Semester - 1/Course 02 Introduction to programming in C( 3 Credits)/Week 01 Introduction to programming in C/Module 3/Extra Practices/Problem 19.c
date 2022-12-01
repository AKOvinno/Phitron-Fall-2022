#include<stdio.h>

int main()
{
    int id, unit;
    char name[20];
    float s_charge = 0, net_charge = 0, a_charge = 0;

    scanf("%d %s %d", &id, &name, &unit);

    printf("Customer ID NO: %d\n", id);
    printf("Customer Name: %s\n", name);
    printf("Unit Consumed: %d\n", unit);

    if(unit < 200) {
        a_charge = unit*1.20;

        printf("Amount Charges @Rs. 1.20 per unit: %0.2f\n", a_charge);

        printf("Surcharge Amount: %0.2f\n", s_charge);

        net_charge = a_charge + s_charge;
        printf("Net Amount Paid By the Customer: %0.2f\n", net_charge);
    }
    else if(unit > 199 && unit < 400) {
        a_charge = unit*1.50;

        printf("Amount Charges @Rs. 1.50 per unit: %0.2f\n", a_charge);

        printf("Surcharge Amount: %0.2f\n", s_charge);

        net_charge = a_charge + s_charge;
        printf("Net Amount Paid By the Customer: %0.2f\n", net_charge);
    }
    else if(unit > 399 && unit < 600) {
        a_charge = unit*1.80;

        printf("Amount Charges @Rs. 1.80 per unit: %0.2f\n", a_charge);

        s_charge = (a_charge*15) / 100.0;
        printf("Surcharge Amount: %0.2f\n", s_charge);

        net_charge = a_charge + s_charge;
        printf("Net Amount Paid By the Customer: %0.2f\n", net_charge);
    }
    else if(unit > 599) {
        a_charge = unit*2.00;

        printf("Amount Charges @Rs. 2.00 per unit: %0.2f\n", a_charge);

        s_charge = (a_charge*15) / 100.0;
        printf("Surcharge Amount: %0.2f\n", s_charge);

        net_charge = a_charge + s_charge;
        printf("Net Amount Paid By the Customer: %0.2f\n", net_charge);
    }
    return 0;
}
