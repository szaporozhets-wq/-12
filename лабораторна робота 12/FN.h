//Виконав - Воробей Максим
#pragma once
#include <string>

using namespace std;

extern string text; // оголошення глобальної змінної

// оголошення функцій
void inputData();                      // введення тексту
int countWords(string s);             // підрахунок кількості слів
int generateRandomIndex(int wordCount); // генерація випадкового індексу
void removeWord(string &s, int index); // вилучення слова з тексту
void displayResult();                  // виведення результату