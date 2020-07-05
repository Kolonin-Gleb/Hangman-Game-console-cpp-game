#include "Category functions.h"

void enterCorrectGuess(string* userAnswer, const string correctAnswer, char* userLetter, string* usedLetters, const short playerMistakes)
{
	string userWord;

	while (true)
	{
		cout << "Загаданное слово: " << *userAnswer << endl;
		show(*usedLetters);
		userWord = enterWord();

		if (isWord(userWord))
		{
			if (isFinalDecision(userWord.size(), correctAnswer.size()))
			{
				userWord = wordToWORD(userWord);
				if (isWordExist(userWord))
				{
					if (isWin(userWord, correctAnswer))
					{
						*userAnswer = correctAnswer;
						break;
					}
				}
				else
				{
					lose(correctAnswer);
					break;
				}
			}
			else
			{
				system("cls");
				cout << "Нельзя вводить несколько букв за раз!" << endl;
			}
		}
		// буква
		else
		{
			*userLetter = userWord[0];

			if (isLetterExist(*userLetter))
			{
				if (isSmallLetter(*userLetter))
				{
					*userLetter = toUpper(*userLetter);
				}
				if (!isLetterUsed(*usedLetters, *userLetter))
				{
					*usedLetters += *userLetter;
					break;
				}
				else
				{
					system("cls");
					cout << "Вы уже использовали букву " << userLetter << "!" << endl;
				}
			}
			else
			{
				system("cls");
				cout << "Введенная буква отсутствует в русском языке, а значит и в слове!" << endl;
			}
		}
	}
}

string enterWord()
{
	string guess;
	cout << "Введите букву или загаданное слово: ";
	cin >> guess;

	return guess;
}

bool isWord(const string word)
{
	if (word.size() != 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

string wordToWORD(string word)
{
	for (int i = 0; i < word.size(); i++)
	{
		if (isSmallLetter(word[i]))
		{
			word[i] = toUpper(word[i]);
		}
	}
	return word;
}

bool isFinalDecision(const short userAnswerSize, const short correctAnswerSize)
{
	if (userAnswerSize == correctAnswerSize)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isLetterUsed(const string usedLetters, const char letter)
{
	if (usedLetters.find(letter) == string::npos)
	{
		return false;
	}
	else
	{
		return true;
	}
}

void show(const string usedLetters)
{
	cout << "Вы уже использовали следующие буквы: " << endl;
	cout << usedLetters << endl;
}

bool isLetterExist(const char letter)
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

bool isWordExist(const string word)
{
	for (int i = 0; i < word.size(); i++)
	{
		if (isSmallLetter(word[i]))
		{
			return false;
		}
	}
	return true;
}

bool isSmallLetter(const char letter)
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

bool isBigLetter(const char letter)
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



bool isLetterInWord(const string SECRET_WORD, const char letter)
{
	if (SECRET_WORD.find(letter) != string::npos)
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

bool isWin(const string answer, const string correctAnswer)
{
	if (answer == correctAnswer)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void win(const short mistakes, const string answer)
{
	cout << "Вы отгадали слово " << answer << " ошибившись " << mistakes << " раз! Поздравляем!" << endl;
}

void lose(const string answer)
{
	cout << "Вы проиграли! Вам обязательно повезёт в следующий раз." << endl;
	cout << "Слово, которое вы не смогли отгадать это: " << answer << endl;
}
