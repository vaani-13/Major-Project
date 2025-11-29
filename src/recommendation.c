#include <stdio.h>
#include <string.h>
#include "laptop.h"
/*  
   Function RecommendTop3 sorts all laptops by bubble sort in descending order
   and prints the top 3 highest-scoring laptops as final recommendations.
*/
void RecommendTop3(struct Laptop arr[],int n)   //n is the total loaded laptops
{
    // Bubble sort 
    for(int i=0;i<n-1;i++) {
        for (int j=0;j<n-i-1;j++) {
            // If next laptop has higher score then swap the values
            if (arr[j].score<arr[j+1].score) {
                struct Laptop temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            // If scores equal then we prefer higher rating
            else if (arr[j].score==arr[j+1].score && arr[j].rating<arr[j+1].rating) {
                struct Laptop temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            // If score & rating same then we prefer cheaper
            else if (arr[j].score==arr[j+1].score && arr[j].rating==arr[j+1].rating && arr[j].price>arr[j+1].price) {
                struct Laptop temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    //Print top 3
    printf("\n\n===== TOP 3 LAPTOP RECOMMENDATIONS!!!! =====\n");
    for (int i=0; i<3 && i<n;i++) {
        printf("\nRank #%d\n",i+1);
        printf("ID: %s\n",arr[i].id);
        printf("Category: %s\n",arr[i].category);
        printf("Brand: %s\n",arr[i].brand);
        printf("Model: %s\n",arr[i].model);
        printf("Processor: %s\n",arr[i].processor);
        printf("RAM: %d GB\n",arr[i].ram);
        printf("Storage: %s\n",arr[i].storage);
        printf("Graphics: %s\n",arr[i].graphics);
        printf("Display: %.1f\"\n",arr[i].display);
        printf("Price: ₹%d\n",arr[i].price);
        printf("Rating: %.1f\n",arr[i].rating);
        printf("Score: %d\n",arr[i].score);
    }
    printf("\n=========================================\n");
}
