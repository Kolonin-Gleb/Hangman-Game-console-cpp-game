# Hangman-console-cpp-game
Консольная игра головоломка написанная на С++. Пользователю предстоит угадать зашифрованное слово за 8 попыток.

                            Правила игры:
Компьютер загадывает вам слово из выбранной вами категории.
Слово отображается, как ряд дефисов "-".

Ваша задача угадать, что это за слово и ввести его.
На это у вас есть 8 попыток.
Слово можно ввести двумя способами:
1. По буквам, которые как вы предполагаете имеются в слове.
2. Введя целиком слово, если вы уверенны, что загаданно именно это слово.

Подробнее о 1 способе ввода:
Если вы вводите букву, которая есть в слове, то все "-", загаданного слова где стоит
введенная вами буква заменяться на эту букву.
Если вы вводите букву, которой нет в слове, то У вас отнимается одна попытка.
Если попытки закончатся, то вы проиграли.
Если вы отгадали все буквы слова, то вы победили.

Подробнее о 2 способе ввода:
Если вы знаете, какое слово загадано, то вы можете ввести его целиком.
Если введенное вами слово действительно было загадано, то вы победите.
В случае если введенное вами слово не было загадано вы сразу же проиграете.
