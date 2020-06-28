#include "Sport category.h"

namespace sportCategory
{
	void startLevel()
	{
		system("cls");

		const short TRIES = 8;
		short userTries = 8;

		vector<string>sportWords;
		sportWords.push_back("’Œ  ≈…");
		sportWords.push_back("‘”“¡ŒÀ");
		sportWords.push_back("¡¿— ≈“¡ŒÀÀ");
		sportWords.push_back("œÀ¿¬¿Õ»≈");
		sportWords.push_back(" ¿–¿“≈");

		random_shuffle(sportWords.begin(), sportWords.end());

		const string SECRET_WORD = sportWords[0];
		string userAnswer(SECRET_WORD.size(), '-');

		string usedLetters = "";

		startGame(TRIES, userTries, userAnswer, usedLetters, SECRET_WORD);
	}
};

