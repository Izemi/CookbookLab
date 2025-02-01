/*
* File Name: Meal.h
* Author: Ozan Erat
* Date: 1/30/2025
* Version: 1.0.
* Description: 
*   Interface of Meal for the Cookbook lab
*
* Revisions:
*   None
*/
#ifndef MEAL_H
#define MEAL_H

#include <stdbool.h>

// Definition of Meal struct
typedef struct {
    int meal_id;
    char name[50];
} Meal;

// Function prototypes

void meal_init_with_name(Meal *m, const char *name);
void meal_print(const Meal *m);
void meal_assign_id(Meal *m);

#endif
