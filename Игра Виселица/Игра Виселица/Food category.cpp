#include "Food category.h"

namespace foodCategory
{
	void startLevel()
	{
		system("cls");

		const short TRIES = 8;
		short userTries = 8;

		vector<string>foodWords;
		foodWords.push_back("������");
		foodWords.push_back("�������");
		foodWords.push_back("������");
		foodWords.push_back("�����");
		foodWords.push_back("�������");

		random_shuffle(foodWords.begin(), foodWords.end());

		const string SECRET_WORD = foodWords[0];
		string userAnswer(SECRET_WORD.size(), '-');

		string usedLetters = "";
		char guess;

		startGame(TRIES, userTries, userAnswer, usedLetters, SECRET_WORD);
	}
};
