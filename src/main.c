#include <stdio.h>
#include <string.h>
#include "../include/laptop.h"
//Declarations of all functions used for loading data,taking input,scoring laptops,and recommending top options
//Load laptops data from laptops.txt into array
int loadLaptops(struct Laptop arr[]);
//Takes user input and stores preference
void GetUserPreferences(char prefCategory[],char prefBrand[],char prefProcessor[],int *prefRAM,
    char prefStorage[],char prefGraphics[],float *prefDisplay,int *prefPrice,float *prefRating);
    //score-giving function by comparing with user preference
void ComputeScores(struct Laptop arr[],int n,char prefCategory[],char prefBrand[],char prefProcessor[],
    int prefRAM,char prefStorage[],char prefGraphics[],float prefDisplay,int prefPrice,float prefRating);
    //recommendation function
void RecommendTop3(struct Laptop arr[], int n);  
int main() {
    struct Laptop laptops[100];     // array to store laptops
    int n=loadLaptops(laptops);   // load laptops from file
    if (n==0) {
        printf("Error: No laptops loaded.\n");
        return 0;
    }
    printf("\n%d laptops loaded successfully!\n",n);
    //Variables for user preferences
    char prefCategory[20],prefBrand[20],prefProcessor[30];
    int prefRAM,prefPrice;
    char prefStorage[20],prefGraphics[40];
    float prefDisplay,prefRating;
    // Take user input
    GetUserPreferences(prefCategory,prefBrand,prefProcessor,&prefRAM,prefStorage,prefGraphics,
        &prefDisplay,&prefPrice,&prefRating);
    // Score laptops
    ComputeScores(laptops,n,prefCategory,prefBrand,prefProcessor,prefRAM,prefStorage,prefGraphics,
        prefDisplay,prefPrice,prefRating);
    // Show recommendations
    RecommendTop3(laptops,n);
    printf("\nThank you for using the Laptop Recommendation System!\n");
    return 0;
}
