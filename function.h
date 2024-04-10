#ifndef FUNCTION_H
#define FUNCTION_H

struct PharmacyDrug {
    char drugName[100];
    int code;
    char prescription[20];
    int quantity;
};

void addDrugs(struct PharmacyDrug *drugsArray, int arraySize);
void printDrugs(struct PharmacyDrug *drugsArray, int arraySize);

#endif

