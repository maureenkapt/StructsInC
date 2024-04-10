#include <stdio.h>
#include "function.h"

int main() {
    int arraySize = 12;
    struct PharmacyDrug drugs[arraySize];

    // Add drugs to the array
    addDrugs(drugs, arraySize);

    // Print the structure elements
    printDrugs(drugs, arraySize);

    return 0;
}

