/*
* File Name: cookbook.c
* Author: Ozan Erat
* Date: 1/30/2025
* Version: 1.0.
* Description: 
*   Driver for the Cookbook lab
*
* Revisions:
*   None
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"

int main() {
    MealList mealList;

    // Initialize the meal list below
    meallist_init(&mealList);

    // Open meal_names.txt file by completing ... below
    FILE *file = fopen("meal_names.txt", "r");

    if (file == NULL) {
        fprintf(stderr, "Error opening meal_names.txt\n");
        return EXIT_FAILURE;
    }

    // Read meal names from the file and add them to the list
    Meal meal;
    char name[50];
    int count = 0;

    //Complete the condition for the `while` loop. Make sure that it checks if file is NULL. Discuss what function to use for reading names from the file.
    while (fgets(name, sizeof(name), file) != NULL && count < MAX_MEALS) {
        if (strlen(name) > 0) {  // Only add meals with valid names
            // Remove trailing newline just in case
            name[strcspn(name, "\n")] = '\0';

            meal_init_with_name(&meal, name);
            meallist_insert_meal(&mealList, meal);
            count++;
        }
    }

    // Close the file
    fclose(file);

    // Print all meals in the list
    printf("Meals in the cookbook:\n");
    meallist_print(&mealList);

    return 0;
}
