# Lab 1 : Cookbook

## **Lab Description**

Computer science students are moving into off-campus housing and are preparing to manage meals on their own. To simplify meal planning and share recipes, they decided to create a **cookbook program**. As a result of this effort, they are hoping to learn and practice about arrays, structs, and file handling in C.

---

## **Learning Objectives**

1. Practice working with static arrays and structs.
2. Learn basic file I/O in C by reading from and writing to text files.
3. Implement modular programming using separate `.c` and `.h` files.
4. Learning unit testing

---

## **Starter Code**

You are provided with:
1. `Meal.h` and `Meal.c` - Definitions and functions to create and manage a meal object.
2. `ArrayList.h` and `ArrayList.c` - Implementation of a list to store meals.
3. `cookbook.c` - The main driver program.
4. `unittest.c` - A source file for testing
5. `meal_names.txt` - A list of meal names to populate the cookbook.
6. `Makefile` - A build script for easy compilation.

---

## **Task Breakdown**

### 1. **Initialization**

- `MealList` structure is used to store up to 100 meals. Initialize the list in the main function located in `cookbook.c` and then complete the `meallist_init()` function in `ArrayList.c` to finish initialization.

- Read meal names from `meal_names.txt` using file handling techniques.
  Pay attention to what we do after opening a file. 

### 2. **Adding Meals**

- Complete the condition for the `while` loop. Make sure that it checks if file is NULL. 
  Discuss what function to use for reading names from the file. 

- Complete `meal_init_with_name()` to create meal objects with unique IDs.

- Complete `meallist_insert_meal()` to insert the meals into the list .

- Make sure to close the file once you are done with it. 

### 3. **Displaying the Cookbook**

- Complete `meallist_print()` to print the list of meals.

### 4. **Submission**

- Submit all files to the Gradescope.

### 5. **Optional Challenges**

- Analyze unittest.c 

- Run `Make test` and then `./test`

- Analyze the Makefile. How do we create the `test` executable?  

---
## **Questions**

- What is the biggest limitation of the current program? 

- Is listing the struct definitions in the header files a good idea? Why?

---