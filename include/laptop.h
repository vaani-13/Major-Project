#ifndef LAPTOP_H
#define LAPTOP_H
//The given structure stores all the information for laptop
struct Laptop {
    char id[10];            //example: G001/P001 and so on
    char category[20];      //gaming, portaable, convertible, mainstream, programming
    char brand[20];         //HP, Asus, Lenovo, Apple and so on
    char model[50];         //LOQ, Victus, MacBook air and so on
    char processor[30];     //Ryzen 7 7840U, Intel i5-1340P and so on
    int ram;                //in GB 
    char storage[20];       //512 GB SSD
    char graphics[40];      //RTX 3050, Integrated and so on
    float display;          //15.6, 14.0 etc
    int price;              //100000, 75000 and so on
    float rating;           //4.4, 4.9 etc
    int score;              //to score laptops out of 5
};
#endif
