import os

import start_game

def returnCorrectGuess(userAnswer, SECRET_WORD):
	userInput = ""

	userAnswer = ''.join(userAnswer)

	while True:
		print("Загаданное слово: " + userAnswer)

		userInput = enterWord()

		if len(userInput) != 1: #Ввод это слово
			if len(userInput) == len(SECRET_WORD):
				return userInput
			else:
				os.system("cls")
				print("Нельзя вводить несколько букв за раз!" )
		#Ввод это буква
		else:
			return userInput

def enterWord():
	while True:
		guess = input("Введите букву или загаданное слово: ")
		guess = guess.upper()
		
		if guess.isdigit():
			os.system("cls")
			print("Введены некорректные данные!")
		else:
			break
	return guess

def isLetterInWord(letter, SECRET_WORD):
	if (SECRET_WORD.find(letter) != -1):
		return True
	else:
		return False

def addLetterToAnswer(letter, userAnswer, SECRET_WORD):
	userAnwerList = list(userAnswer)

	for i in range(len(SECRET_WORD)):
		if (SECRET_WORD[i] == letter):
			userAnwerList[i] = letter
	userAnswer = ''.join(userAnwerList)
	return userAnswer

def startRound(ls, lives):
	for i in range(len(ls)):
		os.system("cls")
		print( "Вы отгадываете слово " + str(i) + " из " + str(len(ls)-1) )

		if( start_game.play(ls[i], lives) ): #Если отгодали слово
			os.system("cls")
			print("Вы отгадали слово! Поздравляем!")
		else:
			os.system("cls")
			print("Вы проиграли! Вам повезет в следующий раз.")
			print("Слово, что вы не смогли отгадать это: " + ls[i])

		print("Если хотите продолжить играть на этом уровне введите 1")
		print("Если хотите выйти - введите 2")
		userDecision = input()
		if userDecision == "1":
			continue
		else:
			return False #Игрок покинул легкий уровень
	return True #Игра на легком уровне завершена победой
