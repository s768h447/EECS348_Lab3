#include <stdio.h>
#include <stdlib.h>
float* read_data_from(char *file_name) {

    //  allocates data for array
    float* month_sales_data = (float*)malloc(12 * sizeof(float));

    //  attempts to open file
    FILE *fp = fopen(file_name, "r+");

    //  informs of potential failure
    if(fp == NULL) {
        printf("Invalid File\n");
    }

    
    for(int i = 0; i < 12; ++i) {
        fscanf(fp, "%f\n", &month_sales_data[i]);
    }

    return month_sales_data;

}

void salesReport(float data[11]) {

    //  prints all of the following
    printf("Monthly sales report for 2022\n\n");
    printf("January %.2f ", data[0]);
    printf("\n");
    printf("February %.2f ", data[1]);
    printf("\n");
    printf("March %.2f ", data[2]);
    printf("\n");
    printf("April %.2f ", data[3]);
    printf("\n");
    printf("May %.2f ", data[4]);
    printf("\n");
    printf("June %.2f ", data[5]);
    printf("\n");
    printf("July %.2f ", data[6]);
    printf("\n");
    printf("August %.2f ", data[7]);
    printf("\n");
    printf("September %.2f ", data[8]);
    printf("\n");
    printf("October %.2f ", data[9]);
    printf("\n");
    printf("November %.2f ", data[10]);
    printf("\n");
    printf("December %.2f ", data[11]);
    printf("\n\n");
    }

void salesSummary(float data[11]) {

    printf("Sales summary:\n\n");

    char months[11][20] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "November",
        "December"
    };

    int i, num = 0;
    float min = data[0];
    float max = data[0];
    float avg = 0;


    //  minimum loop
    for(i = 0; i < 11; i++) {
        if(data[i] < min) {
            min = data[i];
            num = i;
            }
        }

    //  minimum print
    printf("Minimum sales:\t%.2f", min);
    printf("  %s\n", months[num]);

    //  maximum loop
    for(i = 0; i < 11; i++) {
        if(data[i] > max) {
            max = data[i];
            num = i;
            }
        }

    //  maximum print
    printf("Maximum sales:\t%.2f", max);
    printf("  %s\n", months[num]);

    for(i = 0; i < 11; i++) {
        avg += data[i];
    }
    
    avg = avg / 12;

    printf("Average sales:\t%.2f", avg);

    }

void movingAverage(float data[11]) {
    
    printf("\n\nSix-Month Moving Average Report:\n\n");

    char months[11][20] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "November",
        "December"
    };

    float jj = (data[0] + data[1] + data[2] + data[3] + data[4] + data[5])/6;
    float fj = (data[1] + data[2] + data[3] + data[4] + data[5] + data[6])/6;
    float ma = (data[7] + data[2] + data[3] + data[4] + data[5] + data[6])/6;
    float as = (data[7] + data[8] + data[3] + data[4] + data[5] + data[6])/6;
    float mo = (data[7] + data[8] + data[9] + data[4] + data[5] + data[6])/6;
    float jn = (data[7] + data[8] + data[9] + data[10] + data[5] + data[6])/6;
    float jd = (data[7] + data[8] + data[9] + data[10] + data[11] + data[6])/6;

    printf("January - June\t%.2f\n", jj);
    printf("February - July\t%.2f\n", fj);
    printf("March - August\t%.2f\n", ma);
    printf("April - September\t%.2f\n", as);
    printf("May - October\t%.2f\n", mo);
    printf("June - November\t%.2f\n", jn);
    printf("July - December\t%.2f\n", jd);
}

void salesReportt(float data[11]) {

    printf("\n\nSales Report (Highest to Lowest):\n\n");

    char months[11][20] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "November",
        "December"
    };   

    float t = 0;

    for (int i = 0; i < 11; i++) {
        for (int j = i + 1; j < 11; j++) {
            if(data[i] < data[j]) {
                t = data[i];
                data[i] = data[j];
                data[j] = t;
            }
        }
    }

    for (int i = 0; i < 11; i++) {
        printf("%.2f\n", data[i]);
    }


}

int main() {

    //  variable storing file to input
    char file_name[25];

    printf("Attempt 3\n");

    //  gets file 
    printf("Input File: ");
    scanf("\n%s", file_name);

    //  reads file
    float* month_sales_data = read_data_from(file_name);

    //  sales report
    salesReport(month_sales_data);

    //  sales summary
    salesSummary(month_sales_data);

    //  six-month 
    movingAverage(month_sales_data);

    salesReportt(month_sales_data);

    system("pause");
    return 0;
}