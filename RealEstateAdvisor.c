#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_ADDRESS_LENGTH 100

typedef struct Property {
    char name[MAX_NAME_LENGTH];
    char address[MAX_ADDRESS_LENGTH];
    float price;
    int bedrooms;
    struct Property* next;
} Property;

Property* head = NULL;

void addProperty() {
    Property* newProperty = (Property*)malloc(sizeof(Property));
    if (newProperty == NULL) {
        printf("\n❌ Memory allocation failed.\n");
        return;
    }

    printf("\n🏡 Enter property name: ");
    scanf("%s", newProperty->name);
    printf("📍 Enter property address: ");
    scanf(" %[^\n]s", newProperty->address);  // Reads full address including spaces
    printf("💲 Enter property price: ");
    scanf("%f", &newProperty->price);
    printf("🛏 Enter number of bedrooms: ");
    scanf("%d", &newProperty->bedrooms);

    newProperty->next = head;
    head = newProperty;

    printf("\n✅ Property added successfully! ✅\n");
}

void listProperties() {
    if (head == NULL) {
        printf("\n🚫 No properties available.\n");
        return;
    }

    Property* current = head;
    int i = 1;
    while (current != NULL) {
        printf("\n🏠 Property %d:\n", i++);
        printf("🏷 Name: %s\n", current->name);
        printf("📍 Address: %s\n", current->address);
        printf("💲 Price: %.2f\n", current->price);
        printf("🛏 Bedrooms: %d\n", current->bedrooms);
        current = current->next;
    }
}

void searchByName() {
    char searchName[MAX_NAME_LENGTH];
    printf("\n🔍 Enter property name to search: ");
    scanf("%s", searchName);
 
    Property* current = head;
    int found = 0;
    while (current != NULL) {
        if (strcmp(current->name, searchName) == 0) {
            if (!found) {
                printf("\n🔎 Matching properties found:\n");
                found = 1;
            }
            printf("\n🏷 Name: %s\n", current->name);
            printf("📍 Address: %s\n", current->address);
            printf("💲 Price: %.2f\n", current->price);
            printf("🛏 Bedrooms: %d\n", current->bedrooms);
        }
        current = current->next;
    }

    if (!found) {
        printf("\n🚫 No properties found with the specified name.\n");
    }
}

void searchByAddress() {
    char searchAddress[MAX_ADDRESS_LENGTH];
    printf("\n🔍 Enter property address to search: ");
    scanf(" %[^\n]s", searchAddress);

    Property* current = head;
    int found = 0;
    while (current != NULL) {
        if (strcmp(current->address, searchAddress) == 0) {
            if (!found) {
                printf("\n🔎 Matching properties found:\n");
                found = 1;
            }
            printf("\n🏷 Name: %s\n", current->name);
            printf("📍 Address: %s\n", current->address);
            printf("💲 Price: %.2f\n", current->price);
            printf("🛏 Bedrooms: %d\n", current->bedrooms);
        }
        current = current->next;
    }

    if (!found) {
        printf("\n🚫 No properties found at the specified address.\n");
    }
}

void searchByPriceRange() {
    float minPrice, maxPrice;
    printf("\n💲 Enter minimum price: ");
    scanf("%f", &minPrice);
    printf("💲 Enter maximum price: ");
    scanf("%f", &maxPrice);

    Property* current = head;
    int found = 0;
    while (current != NULL) {
        if (current->price >= minPrice && current->price <= maxPrice) {
            if (!found) {
                printf("\n🔎 Matching properties found:\n");
                found = 1;
            }
            printf("\n🏷 Name: %s\n", current->name);
            printf("📍 Address: %s\n", current->address);
            printf("💲 Price: %.2f\n", current->price);
            printf("🛏 Bedrooms: %d\n", current->bedrooms);
        }
        current = current->next;
    }

    if (!found) {
        printf("\n🚫 No properties found in the specified price range.\n");
    }
}


int main() {
    int choice;

    while (1) {
        printf("\n🏡-----$ Real Estate Advisor $-----🏡\n");
        printf("\n1. Add Property 🏡");
        printf("\n2. List Properties 📋");
        printf("\n3. Search Property by Name 🔎");
        printf("\n4. Search Property by Address 🏢");
        printf("\n5. Search Property by Price Range 💲");
        printf("\n6. Exit 🚪");
        printf("\n\n→ Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addProperty();
                break;
            case 2:
                listProperties();
                break;
            case 3:
                searchByName();
                break;
            case 4:
                searchByAddress();
                break;
            case 5:
                searchByPriceRange();
                break;
            case 6:
                printf("\n👋 Thank you for using Real Estate Advisor! Goodbye! 👋\n");
                return 0;
            default:
                printf("\n❌ Invalid choice. Please try again.\n");
        }
    }
}
