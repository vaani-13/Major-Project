#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "laptop.h"
/* The function ComputeScores scores every laptop based on how well the user's preference matches
and each characteristic gives points and we store the total score in arr[i].score.
*/
void ComputeScores(struct Laptop arr[], int n,char prefCategory[],char prefBrand[],
    char prefProcessor[],
    int prefRAM,
    char prefStorage[],
    char prefGraphics[],
    float prefDisplay,
    int prefPrice,
    float prefRating
) 
    {
    //Removing "SSD" from storage preference if user typed it
    char cleanStorage[20];
    strcpy(cleanStorage, prefStorage);
    for(int i = 0; cleanStorage[i]; i++){
        if(cleanStorage[i]=='S' || cleanStorage[i]=='s') {
            cleanStorage[i]='\0'; break;
        }
    }
    for (int i=0;i<n; i++) {
        arr[i].score=0;   // reset score
        //CATEGORY (5 points) 
        if(strcasecmp(arr[i].category,prefCategory)==0) //strcasecmp() compares strings and returns 0 only when the strings match so == 0 means "strings are equal".
            arr[i].score+=5;
        //BRAND (2 points) 
        if(strcasecmp(arr[i].brand, prefBrand)==0)
            arr[i].score+=2;
        //PROCESSOR (5 points) 
        if(strstr(arr[i].processor,prefProcessor))      //strstr() is used to check whether one string is contained inside another (substring search).
            arr[i].score+=5;
        else if (strstr(arr[i].processor,"i7") && strstr(prefProcessor,"i5"))
            arr[i].score+=3;  // higher series upgrade
        //RAM (5 points) 
        if (arr[i].ram>=prefRAM)
            arr[i].score+=5;
        else if (prefRAM-arr[i].ram==4)
            arr[i].score+=3;
        //STORAGE (3 points) 
        if (strstr(arr[i].storage,prefStorage))
            arr[i].score+=3;
        else if (strstr(arr[i].storage,"256") && strstr(prefStorage,"512"))
            arr[i].score+=1;
        //GRAPHICS (5 points) 
        if (strcasecmp(arr[i].graphics,prefGraphics)==0)
            arr[i].score+=5;
        else if (strstr(arr[i].graphics,"RTX") && strstr(prefGraphics,"Integrated"))
            arr[i].score+=3;
        else if (strstr(arr[i].graphics,"4060") && strstr(prefGraphics,"3050"))
            arr[i].score+=4;
        // DISPLAY SIZE (2 points) 
        if (fabs(arr[i].display-prefDisplay)<0.1)    //fabs() returns the absolute (positive) value of a floating-point number.
            arr[i].score+=2;
        else if (fabs(arr[i].display-prefDisplay)<=1.0)
            arr[i].score+=1;
        //PRICE—SMART SCORE (5 points) 
        int diff=abs(arr[i].price-prefPrice);
        if (diff==0)
            arr[i].score+=5;
        else if (diff<=5000)
            arr[i].score+=4;
        else if (diff<=10000)
            arr[i].score+=3;
        else if (diff<=15000)
            arr[i].score+=2;
        //RATING (3 points)
        if (arr[i].rating>=prefRating)
            arr[i].score+=3;
        else if (arr[i].rating>=prefRating-0.5)
            arr[i].score+=2;
        else if (arr[i].rating>=prefRating-1.0)
            arr[i].score+=1;
    }
}
