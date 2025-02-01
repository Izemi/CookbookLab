/*
* File Name: ArrayList.c
* Author: Ozan Erat
* Date: 1/30/2025
* Version: 1.0.
* Description: 
*   Implementation of ArrayList for the Cookbook lab
*
* Revisions:
*   None
*/
#include <stdio.h>
#include "ArrayList.h"

// Initialize the MealList
void meallist_init(MealList *list) {
    list->length = 0; /*...*/
}

// Function to insert a meal at the end of the list
void meallist_insert_meal(MealList *list, Meal m) {
    /*...*/
    if (list->length < MAX_MEALS) {
        list->meals[list->length] = m;
        list->length++;
    }
    /*...*/
}

// Function to print all meals in the list
void meallist_print(const MealList *list) {
    /*...*/
    for (int i = 0; i < list->length; i++) {
        meal_print(&list->meals[i]);
    }
    /*...*/
}
