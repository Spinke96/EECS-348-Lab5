#include <stdio.h>

int main(){
    char months[12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    //inputs the given numbers into the array
    float sales[12] = {23458.01,40112.00,56011.85,37820.88,37904.67,60200.22,72400.31,56210.89,67230.84,68233.12,80950.34,95225.22};
    //Statement To print on screen the sale value next to the month
    printf("Month \t Sales\n");
        {
            for(int i=0; i < 12; i++){
                printf("%s \t %f\n",months[i], sales[i]);
            }
        }
    //Looks through the whole list and compares the data to each other
    printf("\nSales Summary Report:\n");
        {
            //makes the minimum super high so it can get changed instantly to the first months value
            float minimum_sales = 99999999999999.000000;
            //used to catch the i value of the month's index
            int minimum_sales_month;
            //makes the maximum super low so it can get changed instantly to the first months value
            float maximum_sales = 0;
            //catch i value
            int maximum_sales_month;
            //sum of the months sales
            float average_sales = 0;
        for(int i=0; i<12; i++){
            if(sales[i]<minimum_sales){
                minimum_sales = sales[i];
                minimum_sales_month = i;
            }
            if(sales[i]>maximum_sales){
                maximum_sales = sales[i];
                maximum_sales_month = i;
            }
            average_sales += sales[i];
        }
        average_sales = average_sales/12;
        printf("Minimum sales:\t%f\t(%s)\n",minimum_sales,months[minimum_sales_month]);
        printf("Maximum sales:\t%f\t(%s)\n",maximum_sales,months[maximum_sales_month]);
        printf("Average sales:\t%f\n",average_sales);
        }
    printf("\nSix-Month Moving Average Report:\n");
    {
        //Only goes through the first 6 months
        for(int i=0;i<7;i++){
            float average_report = 0;
            //this adds the sales of the current month through the next 6 months in that time
            average_report += sales[i];
            average_report += sales[i+1];
            average_report += sales[i+2];
            average_report += sales[i+3];
            average_report += sales[i+4];
            average_report += sales[i+5];
            average_report = average_report/6;
            //prints the sales number from that 6 month period
            printf("%s-%s\t%f\n",months[i], months[i+5],average_report);
       }
    }
    printf("\nSales Report (Highest to Lowest):\n\n");
    printf("Month\tSales\n");
    {
        float cur_max = 0;
        int cur_sales_month = 0;
        //makes the maximum super low so it can get changed instantly to the first months value
        for(int i=0; i<12; i++){
            float temp_max = 0;
            for(int j=0; j<12; j++){
                if(sales[j]>temp_max && (sales[j] < cur_max || cur_max == 0)){
                    temp_max = sales[j];
                    cur_sales_month = j;
                }
            }
            cur_max= temp_max;
            printf("%s\t%f\n",months[cur_sales_month], cur_max);
    }
}
}
//Help on how to go through the array and find which one is the most to least