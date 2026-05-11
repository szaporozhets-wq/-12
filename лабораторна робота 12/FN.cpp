//Виконав - Запорожець Святослав
#include "FN.h"
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
 
string text; // глобальна змінна для зберігання тексту
 
// Функція введення тексту
void inputData() {
    cout << "Введіть текст: ";
    getline(cin, text); // введення всього рядка (включаючи пробіли)
}
 
// Функція підрахунку кількості слів
int countWords(string s) {
    stringstream ss(s);
    string word;
    int count = 0;
    
    // рахуємо слова, розділені пробілами
    while (ss >> word) {
        count++;
    }
    
    return count;
}
 
// Функція генерації випадкового індексу
int generateRandomIndex(int wordCount) {
    // випадкове число від 1 до wordCount (включно)
    return (rand() % wordCount) + 1;
}
 
// Функція вилучення слова за номером
void removeWord(string &s, int index) {
    stringstream ss(s);
    vector<string> words;
    string word;
    
    // розбиваємо текст на окремі слова
    while (ss >> word) {
        words.push_back(word);
    }
    
    // вилучаємо слово за індексом (індекс починається з 1)
    if (index > 0 && index <= (int)words.size()) {
        words.erase(words.begin() + index - 1);
        cout << "Видалено слово номер " << index << endl;
    } else {
        cout << "Помилка: невалідний номер слова!" << endl;
    }
    
    // об'єднуємо слова назад в один рядок
    s = "";
    for (int i = 0; i < (int)words.size(); i++) {
        if (i > 0) s += " "; // додаємо пробіл між словами
        s += words[i];
    }
}
 
// Функція виведення результату
void displayResult() {
    cout << "\n=== РЕЗУЛЬТАТ ===" << endl;
    cout << "Текст після вилучення: " << text << endl;
}