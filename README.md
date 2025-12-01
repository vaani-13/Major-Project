SAPID: **590025226**

# **MAJOR PROJECT – C PROGRAMMING**

# 💥 Laptop Search Engine

A simple C Programming–based **Laptop Search Engine** implemented using  
**File Handling, Arrays, Structures, Strings, Functions, Sorting & Modular Programming**.

The program loads a database of **50 laptops** categorized into **5 different categories**,  
takes user preferences, scores all laptops, and finally recommends the **Top 3 best matches**.

---

## ⭐ **PROJECT SUMMARY**

This project helps users find the best laptop according to their requirements.

The project works in **4 major steps**:

1. **Load** all laptops from *laptops.txt* using file handling  
2. **Take input** from user (brand, category, budget, RAM, rating, etc.)  
3. **Score** all laptops by comparing with user preferences  
4. **Sort** laptops by score using Bubble Sort and **recommend top 3**

This project uses **multiple .c files**, making the code modular and easy to understand.

---

## 📍 **FEATURES**

✔ Beginner-friendly, clean, fully documented C code  
✔ Loads **50 laptops** from an external database  
✔ Matches user requirements with each laptop  
✔ Smart scoring system based on multiple characteristics  
✔ Flexible matching (similar processors, ±5k budget supported)  
✔ Recommends **Top 3 laptops**  
✔ Uses modular file structure

---

## 📂 **DIRECTORY STRUCTURE**

```
LaptopProject/
│
├── laptops.txt           # Database of 50 laptops
├── laptop.h              # Structure definitions
├── database.c            # Loads laptop database
├── input.c               # Takes user preferences
├── scoring.c             # Scores every laptop
├── recommendation.c      # Sorts & recommends top 3
└── main.c                # Controls the program
```

---

## 🌈 **CONCEPTS DEMONSTRATED**

- Structures  
- String handling (`strstr`, `strcasecmp`, `strcmp`)  
- File handling (`fopen`, `fclose`, `sscanf`)  
- Bubble Sort  
- Use of pointers  
- Functions & modular programming  
- Conditional statements  
- Loops  

---

## 💫 **COMPILATION INSTRUCTIONS**

Open terminal inside project folder:

```bash
gcc src/main.c src/database.c src/input.c src/scoring.c src/recommendation.c -I include -o laptop_app

```

Run the program:

```bash
./laptopsearchengine
```

---

## 🍀 **MADE BY**

**Vaani Kamboj**  
Batch 61  
C Programming  
B.Tech CSE – 1st Year  

---

## 🍀 **SUBMITTED TO**

**Instructor:** Dr. Srinivasan Ramachandran  
School of Computer Science  
University of Petroleum and Energy Studies  

