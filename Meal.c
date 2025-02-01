/*
* File Name: Meal.c
* Author: Ozan Erat
* Date: 1/30/2025
* Version: 1.0.
* Description:
*   Implementation of Meal for the Cookbook lab
*
* Revisions:
*   None
*/
#include <stdio.h>
#include <string.h>
#include "Meal.h"

static int meal_count = 1;

// Initializer with name
void meal_init_with_name(Meal *m, const char *name) {
    meal_assign_id(m);
    strncpy(m->name, name, sizeof(m->name) - 1); /*...*/ //use a function to copy the name to the meal struct
    m->name[sizeof(m->name) - 1] = '\0';
}

// Print meal details
void meal_print(const Meal *m) {
    printf("%d. %s\n", m->meal_id, m->name);
}

// Assign a unique meal ID
void meal_assign_id(Meal *m) {
    m->meal_id = meal_count++;
}
