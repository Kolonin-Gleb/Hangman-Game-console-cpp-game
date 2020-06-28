#include "Category functions.h"

void startGame(const short TRIES, short userTries, string userAnswer, string usedLetters, const string SECRET_WORD)
{
	cout << "\t\t���� ��������!" << endl;
	char guess;

	while (userTries > 0)
	{
		while (true)
		{
			show(usedLetters);
			cout << "���������� �����: " << userAnswer << endl;

			guess = enterLetter();

			if (isLetterUsed(usedLetters, guess))
			{
				usedLetters += guess;
				break;
			}
			else
			{
				system("cls");
				cout << "�� ��� ������������ ����� " << guess << "!" << endl;
			}
		}

		if (checkGuess(SECRET_WORD, guess))
		{
			system("cls");

			cout << "�����, " << guess << " ���� � �����!" << endl;
			userAnswer = addLetterToAnswer(SECRET_WORD, guess, userAnswer);
		}
		else
		{
			system("cls");

			cout << "�������, " << guess << " ��� � �����!" << endl;
			cout << "���������� ������� = " << --userTries << endl;
		}

		if (userAnswer == SECRET_WORD)
		{
			cout << "�� �������� ����� " << SECRET_WORD << " ���������� " << TRIES - userTries << " ���! �����������!" << endl;
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
		cout << "������� �����: ";
		cin >> userString;

		if (userString.size() != 1)
		{
			cout << "������� ������� ��������� ���� �� ���!" << endl;
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
				cout << "���� ����� ��� � ������� ��������, � ������ � � �����!" << endl;
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
	cout << "�� ��� ������������ ��������� �����: " << endl;
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
	// �������� ������� ���� �������� ������� � ������ �������� - 32 = ���n ������ � ������� ��������
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
	cout << "�� ���������! ��� ����������� ������ � ��������� ���." << endl;
	cout << "�����, ������� �� �� ������ �������� ���: " << answer << endl;
}

