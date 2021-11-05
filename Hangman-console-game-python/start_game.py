import os

import start_game_functions as s_g_f

def play(SECRET_WORD, lives):

	userAnswer = len(SECRET_WORD) * "-"
	userAnswer = list(userAnswer)
	
	playerMistakes = 0
	userGuess = ""
	
	while (playerMistakes < lives):
		print("Количество жизней = " + str(lives - playerMistakes))
		userGuess = s_g_f.returnCorrectGuess(userAnswer, SECRET_WORD)

		if len(userGuess) == 1:
			if (s_g_f.isLetterInWord(userGuess, SECRET_WORD)):
				os.system("cls")

				print("Верно, " + userGuess + " есть в слове!")
				userAnswer = s_g_f.addLetterToAnswer(userGuess, userAnswer, SECRET_WORD)
			else:
				os.system("cls")
				print("Неверно, \'" + userGuess + "\' нет в слове!")
				playerMistakes+=1
				print("Количество ошибок = " + str(playerMistakes))
				continue
		if (userGuess == SECRET_WORD or userAnswer == SECRET_WORD):
			print("Вы отгадали слово " + SECRET_WORD + " ошибившись " + str(playerMistakes) + " раз!")
			return True
		elif (len(userGuess) == len(SECRET_WORD)) and userGuess != SECRET_WORD:
			return False

