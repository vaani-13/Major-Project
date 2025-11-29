#include <stdio.h>
#include <string.h>
// Function GetUserPreferences takes input from users for scoring and recommendations and all values are stored in simple variables passed by reference
void GetUserPreferences(
    char prefCategory[],
    char prefBrand[],
    char prefProcessor[],
    int *prefRAM,                   // Using pointers so the user's input gets stored directly in main variables
    char prefStorage[],
    char prefGraphics[],
    float *prefDisplay,
    int *prefPrice,
    float *prefRating
) { printf("\n=== ENTER YOUR LAPTOP PREFERENCES ===\n");
    printf("Enter Preferred Category (Gaming / Portable / Convertible / Programming / Mainstream): ");
    scanf("%s",prefCategory);
    printf("Enter Preferred Brand (HP, Lenovo, Apple, Asus, etc.): ");
    scanf("%s",prefBrand);
    printf("Enter Preferred Processor (i5, i7, Ryzen 5, Ryzen 7, etc.): ");
    scanf(" %[^\n]",prefProcessor);           //scanf(" %[^\n]")reads multi-word input
    printf("Enter Minimum RAM (8/16/32): ");
    scanf("%d", prefRAM);
    printf("Enter Preferred Storage (256GB SSD / 512GB SSD / 1TB SSD): ");
    scanf("%s",prefStorage);
    printf("Enter Graphics Requirement (Integrated / RTX 3050 / RTX 4060 etc.): ");
    scanf(" %[^\n]",prefGraphics);
    printf("Enter Preferred Display Size (e.g., 14.0 / 15.6): ");
    scanf("%f",prefDisplay);
    printf("Enter Your Budget (e.g., 60000): ₹");
    scanf("%d",prefPrice);
    printf("Enter Minimum Rating (0 to 5): ");
    scanf("%f",prefRating);
    printf("\nPreferences recorded successfully!\n");
    printf("\nThankyou!\n");
}
