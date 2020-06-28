#include "Category functions.h"

void startGame(const short TRIES, short userTries, string userAnswer, string usedLetters, const string SECRET_WORD)
{
	cout << "\t\tИгра началась!" << endl;
	char guess;

	while (userTries > 0)
	{
		while (true)
		{
			show(usedLetters);
			cout << "Загаданное слово: " << userAnswer << endl;

			guess = enterLetter();

			if (isLetterUsed(usedLetters, guess))
			{
				usedLetters += guess;
				break;
			}
			else
			{
				system("cls");
				cout << "Вы уже использовали букву " << guess << "!" << endl;
			}
		}

		if (checkGuess(SECRET_WORD, guess))
		{
			system("cls");

			cout << "Верно, " << guess << " есть в слове!" << endl;
			userAnswer = addLetterToAnswer(SECRET_WORD, guess, userAnswer);
		}
		else
		{
			system("cls");

			cout << "Неверно, " << guess << " нет в слове!" << endl;
			cout << "Количество попыток = " << --userTries << endl;
		}

		if (userAnswer == SECRET_WORD)
		{
			cout << "Вы отгадали слово " << SECRET_WORD << " ошибившись " << TRIES - userTries << " раз! Поздравляем!" << endl;
			break;
		}
	}
	if (userTries == 0)
	{
		lose(SECRET_WORD);
	}
}

char enterLetter()
{
	string userString;

	while (true)
	{
		cout << "Введите букву: ";
		cin >> userString;

		if (userString.size() != 1)
		{
			cout << "Нельязя вводить несколько букв за раз!" << endl;
		}
		else
		{
			char userLetter = userString[0];

			if (isLetterExist(userLetter))
			{
				if (isSmallLetter(userLetter))
				{
					userLetter = toUpper(userLetter);
				}
				return userLetter;
			}
			else
			{
				cout << "Этой буквы нет в русском алфавите, а значит и в слове!" << endl;
			}
		}
	}
}

bool isLetterUsed(string usedLetters, char letter)
{
	if (usedLetters.find(letter) == string::npos)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void show(string usedLetters)
{
	cout << "Вы уже использовали следующие буквы: " << endl;
	cout << usedLetters << endl;
}

bool isLetterExist(char letter)
{
	if (isSmallLetter(letter))
	{
		return true;
	}
	else if (isBigLetter(letter))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isSmallLetter(char letter)
{
	if ((letter >= -32 && letter <= -1) || letter == -72)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isBigLetter(char letter)
{
	if ((letter >= -64 && letter <= -33) || letter == -88)
	{
		return true;
	}
	else
	{
		return false;
	}
}

char toUpper(char ch)
{
	// согласно таблице аски значение символа в нижнем регистре - 32 = этоn символ в верхнем регистре
	return (char)(ch - 32);
}



bool checkGuess(const string SECRET_WORD, const char guess)
{
	if (SECRET_WORD.find(guess) != string::npos)
	{
		return true;
	}
	else
	{
		return false;
	}
}

string addLetterToAnswer(const string SECRET_WORD, const char guess, string userAnswer)
{
	for (int i = 0; i < SECRET_WORD.length(); ++i)
	{
		if (SECRET_WORD[i] == guess)
		{
			userAnswer[i] = guess;
		}
	}
	return userAnswer;
}

void lose(const string answer)
{
	cout << "Вы проиграли! Вам обязательно повезёт в следующий раз." << endl;
	cout << "Слово, которое вы не смогли отгадать это: " << answer << endl;
}

