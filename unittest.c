#include <stdio.h>
#include <string.h>
#include "Meal.h"
#include "ArrayList.h"

void test_meal_init_with_name() {
    Meal m;
    meal_init_with_name(&m, "Spaghetti Carbonara");
    
    if (strcmp(m.name, "Spaghetti Carbonara") == 0 && m.meal_id == 1) {
        printf("PASSED\ttest_meal_init_with_name\n");
    } else {
        printf("FAILED\ttest_meal_init_with_name\n");
        printf("      \tMeal name: %s\n", m.name);
        printf("      \tMeal ID: %d\n", m.meal_id);
    }
}

void test_meallist_init() {
    MealList list;
    meallist_init(&list);

    if (list.length == 0) {
        printf("PASSED\ttest_meallist_init\n");
    } else {
        printf("FAILED\ttest_meallist_init\n");
        printf("      \tInitial length: %d\n", list.length);
    }
}

void test_meallist_insert_meal() {
    MealList list;
    meallist_init(&list);

    Meal m;
    meal_init_with_name(&m, "Chicken Alfredo");
    meallist_insert_meal(&list, m);

    if (list.length == 1 && strcmp(list.meals[0].name, "Chicken Alfredo") == 0) {
        printf("PASSED\ttest_meallist_insert_meal\n");
    } else {
        printf("FAILED\ttest_meallist_insert_meal\n");
        printf("      \tLength: %d\n", list.length);
        printf("      \tMeal name: %s\n", list.meals[0].name);
    }
}

int main() {
    test_meal_init_with_name();
    test_meallist_init();
    test_meallist_insert_meal();
    return 0;
}
