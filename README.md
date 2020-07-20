# Hangman-console-cpp-game
Консольная игра головоломка написанная на С++. Пользователю предстоит угадать зашифрованное слово за 8 попыток.

# Правила игры:
Игрок выбирает категорию, из которой ему будет загадано слово.
После этого игра начинается и в консоль выводится слово, которое отображается как ряд дефисов "-".

Задача игрока угадать, что это за слово и ввести его.
Если игрок вводит 8 букв, которых нет в слове, то он проигрывает.

                           Выбор категории:
![alt tag](https://github.com/Kolonin-Gleb/Hangman-console-game/blob/master/Project%20demonstration/Choose%20category.png "Игрок выбирает категорию")​

                           Игра началась:
![alt tag](https://github.com/Kolonin-Gleb/Hangman-console-game/blob/master/Project%20demonstration/Game%20begin.png "Игра началась")​


                            Загаданное слово можно ввести двумя способами:

1. По буквам, которые как предполагает игрок имеются в слове.

![alt tag](https://github.com/Kolonin-Gleb/Hangman-console-game/blob/master/Project%20demonstration/One%20letter%20entered.png "Вводится буква слова")​

2. Введя целиком слово, если игрок уверен, что именно это слово загаданно.

![alt tag](https://github.com/Kolonin-Gleb/Hangman-console-game/blob/master/Project%20demonstration/Word%20entering.png "Вводится слово целиком")​

                      Подробнее о 1 способе ввода:

Если игрок вводит букву, которая есть в слове, то все "-", загаданного слова где стоит
введенная игроком буква заменяться на эту букву.

![alt tag](https://github.com/Kolonin-Gleb/Hangman-console-game/blob/master/Project%20demonstration/Letter%20was%20correct.png "Буква слова введена верно")

Если игрок вводит букву, которой нет в слове, то количество его ошибочно введенных букв увеличивается.

![alt tag](https://github.com/Kolonin-Gleb/Hangman-console-game/blob/master/Project%20demonstration/Letter%20which%20not%20exist%20entered.png "Буква слова введена неверно")

                      Подробнее о 2 способе ввода:

Если игрок знает, какое слово загадано, то он может ввести его целиком.
Если введенное игроком слово действительно было загадано, то он побеждает.

![alt tag](https://github.com/Kolonin-Gleb/Hangman-console-game/blob/master/Project%20demonstration/Win.png "Победа")

В случае если введенное игроком слово не было загадано, он проигрывает.

                      Определение результата игры:

Если попытки игрока закончатся, то он проиграл.
Если игрок отгадал все буквы слова, то он победили.

# Особенности игры:
Игрок может вводить буквы в разных регистрах. Программа обрабатывает их одинаково.

![alt tag](https://github.com/Kolonin-Gleb/Hangman-console-game/blob/master/Project%20demonstration/One%20capital%20letter%20entered.png "Вводится буква в верхнем регистре")

Если игрок вводит символ, которого нет в языке, на котором загадано слово, то он будет об этом уведомлен.
Данный ввод не будет засчитан за ошибку и игрок получит возможность повторного ввода.

![alt tag](https://github.com/Kolonin-Gleb/Hangman-console-game/blob/master/Project%20demonstration/Incorrect%20letter%20entered.png "Введен несуществующий символ")

