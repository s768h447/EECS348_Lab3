#include <stdio.h>

int main() {
    float monthly_sales[] = {
    23458.01, 
    40112.00, 
    56011.85, 
    37820.88, 
    37904.67,
    60200.22,
    72400.31,
    56210.89,
    67230.84,
    68233.12,
    80950.34,
    95225.22};

    printf("Monthly sales report for 2022\n\n");
    printf("January %.2f ", monthly_sales[0]);
    printf("\n");
    printf("February %.2f ", monthly_sales[1]);
    printf("\n");
    printf("March %.2f ", monthly_sales[2]);
    printf("\n");
    printf("April %.2f ", monthly_sales[3]);
    printf("\n");
    printf("May %.2f ", monthly_sales[4]);
    printf("\n");
    printf("June %.2f ", monthly_sales[5]);
    printf("\n");
    printf("July %.2f ", monthly_sales[6]);
    printf("\n");
    printf("August %.2f ", monthly_sales[7]);
    printf("\n");
    printf("September %.2f ", monthly_sales[8]);
    printf("\n");
    printf("October %.2f ", monthly_sales[9]);
    printf("\n");
    printf("November %.2f ", monthly_sales[10]);
    printf("\n");
    printf("December %.2f ", monthly_sales[11]);
    printf("\n\n");

    printf("Sales summary:\n\n");
    printf("Minimum sales: 23458.01 (January)\nMaximum sales: 95225.22 (December)\nAverage sales: 57979.86\n");

    printf("\nSix-Month moving average report:\n\n");
    printf("January-June\t42584.61\nFebruary-July\t50741.66\nMarch-August\t53424.80\nApril-September\t55294.64\nMay-October\t60363.34\nJune-November\t56537.62\nJuly-December\t73375.12\n");

    printf("\nSales report (highest to lowest):\n\n");
    printf("Month\tSales\n");
    printf("December\t95225.22\nNovember\t80950.34\nJuly\t72400.31\nOctober\t68233.12\nSeptember\t67230.84\nJune\t60200.22\nAugust\t56210.89\nMarch\t56011.85\nFebruary\t40112.00\nMay\t37904.67\nApril\t37820.88\nJanuary\t23458.01");

    system("pause");
    return 0;

}