#include "Sport category.h"

namespace sportCategory
{
	void startLevel()
	{
		system("cls");

		vector<string>sportWords;
		sportWords.push_back("унййеи");
		sportWords.push_back("тсранк");
		sportWords.push_back("аюяйеранк");
		sportWords.push_back("окюбюмхе");
		sportWords.push_back("йюпюре");

		random_shuffle(sportWords.begin(), sportWords.end());

		const string SECRET_WORD = sportWords[0];

		startGame(SECRET_WORD);
	}
};

