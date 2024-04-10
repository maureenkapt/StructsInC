#include <stdio.h>
#include "function.h"

void addDrugs(struct PharmacyDrug *drugsArray, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        printf("Enter details for Pharmacy Drug %d:\n", i + 1);
        printf("Drug Name: ");
        scanf("%s", drugsArray[i].drugName);
        printf("Code: ");
        scanf("%d", &drugsArray[i].code);
        printf("Prescription (Yes/No): ");
        scanf("%s", drugsArray[i].prescription);
        printf("Quantity: ");
        scanf("%d", &drugsArray[i].quantity);
    }
}

void printDrugs(struct PharmacyDrug *drugsArray, int arraySize) {
    printf("\nPharmacy Drug Details:\n");
    for (int i = 0; i < arraySize; i++) {
        printf("Pharmacy Drug %d:\n", i + 1);
        printf("Drug Name: %s\n", drugsArray[i].drugName);
        printf("Code: %d\n", drugsArray[i].code);
        printf("Prescription: %s\n", drugsArray[i].prescription);
        printf("Quantity: %d\n", drugsArray[i].quantity);
    }
}

