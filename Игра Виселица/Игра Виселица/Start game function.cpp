#include "Start game function.h"

void startGame(const string SECRET_WORD)
{
	short playerMistakes = 0;
	const short MAX_MISTAKES = 8;

	string userAnswer(SECRET_WORD.size(), '-');

	string usedLetters = "";
	char userLetter;

	cout << "\t\tИгра началась!" << endl;

	while (playerMistakes < MAX_MISTAKES)
	{
		enterCorrectGuess(&userAnswer, SECRET_WORD, &userLetter, &usedLetters, playerMistakes);

		if (userAnswer == SECRET_WORD)
		{
			win(playerMistakes, SECRET_WORD);
			break;
		}

		else if (isLetterInWord(SECRET_WORD, userLetter))
		{
			system("cls");
			cout << "Верно, " << userLetter << " есть в слове!" << endl;
			userAnswer = addLetterToAnswer(SECRET_WORD, userLetter, userAnswer);
		}
		else
		{
			system("cls");
			cout << "Неверно, " << userLetter << " нет в слове!" << endl;
			cout << "Количество ошибок = " << ++playerMistakes << endl;
		}

		if (isWin(userAnswer, SECRET_WORD))
		{
			win(playerMistakes, SECRET_WORD);
			break;
		}
	}

	if (playerMistakes == MAX_MISTAKES)
	{
		lose(SECRET_WORD);
	}
}

