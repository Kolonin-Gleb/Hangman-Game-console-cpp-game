#pragma once

#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

void startGame(const short TRIES, short userTries, string userAnswer, string usedLetters, const string SECRET_WORD);

char enterLetter();

bool isLetterUsed(string usedLetters, char letter);

void show(string usedLetters);

bool isLetterExist(char letter);

bool isSmallLetter(char letter);

bool isBigLetter(char letter);

char toUpper(char ch);



bool checkGuess(const string SECRET_WORD, const char guess);

string addLetterToAnswer(const string SECRET_WORD, const char guess, string userAnswer);

void lose(const string answer);

