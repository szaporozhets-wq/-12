/*Завдання - Варіант 2 Написати програму, яка вилучає з тексту слово, задане
задане своїм порядковим номером. Номер слова, що має бути вилучене згенерувати випадковим чином.*/
//Виконують завдання студенти групи ПЦ-11: Воробей Максим, Запорожець Святослав;
//Виконав - Воробей Максим
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "FN.h"

using namespace std;
extern string text; // глобальна змінна

int main() {
    // змінні
    int wordCount; // кількість слів у тексті
    int index;     // випадковий номер слова для вилучення

    srand(time(NULL)); // ініціалізація генератора випадкових чисел

    inputData(); // введення тексту

    wordCount = countWords(text); // підрахунок кількості слів

    if (wordCount == 0) {
        cout << "Текст не містить слів." << endl;
        return 1;
    }

    index = generateRandomIndex(wordCount); // генерація випадкового номера слова
    cout << "Номер слова для вилучення: " << index << endl;

    removeWord(text, index); // вилучення слова за номером

    displayResult(); // виведення результату

    return 0;
}