/*
* File Name: ArrayList.h
* Author: Ozan Erat
* Date: 1/30/2025
* Version: 1.0.
* Description: 
*   Interface of ArrayList.c for the Cookbook lab
*
* Revisions:
*   None
*/
#ifndef ArrayList_H
#define ArrayList_H

#include "Meal.h"

#define MAX_MEALS 100

// Definition of MealList struct
typedef struct {
    int length;          
    Meal meals[MAX_MEALS];
} MealList;

// Function prototypes
void meallist_init(MealList *list);
void meallist_insert_meal(MealList *list, Meal m);
void meallist_print(const MealList *list);

#endif
