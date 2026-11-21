
#include "util.h"
#include <iostream>
using namespace std;
#include<cctype>
#include<cstring>
#include<cstdlib>

// Function 1: Keep a number within limits
int clampInt(int val, int minVal, int maxVal) {

if (val < minVal) {
    
    return minVal;

}

if (val > maxVal) {
    
    return maxVal;

    }

 return val;
   
}



// Function 2: Remove extra spaces from beginning and end
void trimWhitespace(char* str) {

 if (str == nullptr) {

    return;

}

    char* start = str;

    while (*start != '\0' &&  isspace(static_cast<unsigned char>(*start))) {
          
        start++;

    }

    char* end = start + strlen(start);

 while (end > start && isspace(static_cast<unsigned char>(*(end - 1)))) {
        
        end--;
    }

    int length = static_cast<int>(end - start);

memmove(str, start, length);

    str[length] = '\0';
}

// Function 3: Compare two strings
bool stringEquals(const char* a, const char* b) {

    if (a == nullptr || b == nullptr) {
    
        return a == b;
    }

    return std::strcmp(a, b) == 0;
}

// Function 4: Print a heading
void printHeader(const char* title) {

    cout << "\n========================================\n";

    if (title != nullptr) {
    
        std::cout << "  " << title << "\n";
 }

cout << "========================================\n";

}

// Function 5: Clear terminal screen
void clearScreen() {

    system("cls");

}