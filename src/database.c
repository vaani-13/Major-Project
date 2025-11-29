#include <stdio.h>
#include <string.h>
#include "laptop.h"
/* Function loadLaptops reads data of laptops from laptops.txt and stores the entry in array of Laptop.
arr[] is created to store laptop data
The function returns number of laptops loaded from file
*/
int loadLaptops(struct Laptop arr[]){
    //Opening the database file in read mode
    FILE *fp=fopen("laptops.txt","r");
    //If unable to open file return 0 and show error opening file
    if(!fp){
        printf("Error: Could not open the file laptops.txt\n");
        return 0;
    }
    int count=0;                    //To track number of loaded laptops
    char line[500];                 //To store line from file
    while(fgets(line,sizeof(line),fp)){
        //comment lines start from "#" so they will be skipped
        if(line[0]=='#')
        continue;
        sscanf(line,
               "%[^|]|%[^|]|%[^|]|%[^|]|%[^|]|%d|%[^|]|%[^|]|%f|%d|%f",
               arr[count].id,
               arr[count].category,
               arr[count].brand,
               arr[count].model,
               arr[count].processor,
               &arr[count].ram,
               arr[count].storage,
               arr[count].graphics,
               &arr[count].display,
               &arr[count].price,
               &arr[count].rating
        );
        arr[count].score=0;              //initialising score for each laptop
        count++;                         //incrementing to move to next index
    }
    fclose(fp);                          //close the database file
    return count;                        //returns number of laptops read
}