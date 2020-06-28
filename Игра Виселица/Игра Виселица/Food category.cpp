#include "Food category.h"

namespace foodCategory
{
	void startLevel()
	{
		system("cls");

		const short TRIES = 8;
		short userTries = 8;

		vector<string>foodWords;
		foodWords.push_back("аспцеп");
		foodWords.push_back("ъхвмхжю");
		foodWords.push_back("нцспеж");
		foodWords.push_back("кхлнм");
		foodWords.push_back("йнркерю");

		random_shuffle(foodWords.begin(), foodWords.end());

		const string SECRET_WORD = foodWords[0];
		string userAnswer(SECRET_WORD.size(), '-');

		string usedLetters = "";
		char guess;

		startGame(TRIES, userTries, userAnswer, usedLetters, SECRET_WORD);
	}
};
