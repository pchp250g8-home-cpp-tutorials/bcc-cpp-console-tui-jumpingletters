umpingLetters. C++ Tutorials. Embarcadero Rad Studio IDE. Console application. Advanced Console Features. Conio Library. 

 1. Loads the PDCurses library.
  2. Creates a standard terminal size window (80 columns, 25 rows).
  3. Clears the created window.
  4. Creates a string variable with the value "Hello World!!! Jumping Letters!!! Press Any Key To Exit!!!".
  5. Determines the length of a string (the number of characters in a string).
  6. The outer loop with the parameter is executed.
     6.1. The initial value of the loop parameter is assigned 0 (the numbering of string characters starts from 0).
     6.2. The final value of the loop parameter is assigned a value that is 1 less than the length of the string.
     6.3. The value of the loop parameter is compared with the end value of the loop.
          If it is greater, the loop terminates and continues otherwise.
     6.4. The inner loop with the parameter is executed.
          6.4.1. The initial value of the loop parameter is assigned 70
          6.4.2. The final value of the loop parameter is assigned the value 10 plus the current value of the outer loop parameter.
          6.4.3. The value of the loop parameter is compared with the end value of the loop.
                 If it is less, the inner loop terminates and continues otherwise.
          6.4.4. The inner loop is executed. The position and number of the current character are calculated for display:
                 symbol number: the current value of the outer loop parameter.
                 Line number: 10.
                 Сolumn number: the value of the inner loop parameter.
                 The string character is displayed on the screen at the calculated position, followed by the space character.
                 This technique creates the effect of a character moving across the screen along a line.
                 The output is delayed by 5 milliseconds.
          6.4.5. The value of the inner loop parameter is decreased by 1 (loop step).
     6.5. The value of the outer loop parameter is incremented by 1 (loop step).
  7. The entire row is displayed on the screen in row 10 and column 10.
  8. Waiting for a key to be pressed.
  9. Unloads the PDCurses library and exits.
    
JumpingLetters. Занятия по C++. ИС Embarcadero Rad Studio. Консольное приложение. Расширенные возможности. Библиотека PDCurses. 
Программа делает следующее:
  1. Загружает библиотеку PDCurses.
  2. Создаёт окно стандартного размера терминала (80 столбцов, 25 строк).
  3. Очищает созданное окно.
  4. Создаёт строковую переменную со значением "Hello World!!! Jumping Letters!!! Press Any Key To Exit!!!".
  5. Определяет длину строки (количество символов в строке).
  6. Вполняется внешний цикл с параметром.
     6.1. Начальному значению параметра цикла присваивается 0 (нумерация символов строки начинается с 0).
     6.2. Конечному значению параметра цикла присваивается значение на 1 меньше длины строки.
     6.3. Значение параметра цикла сравнивается с конечным значением цикла.
          Если оно больше, цикл завершает работу и продолжает её в противном случае.
     6.4. Выполняется внутренний цикл с параметром.
          6.4.1. Начальному значению параметра цикла присвается 70
          6.4.2. Конечному значению параметра цикла присваивается значение 10 плюс текущее значение параметра внешнего цикла.
          6.4.3. Значение параметра цикла сравнивается с конечным значением цикла.
                 Если оно меньше, внутренний цикл завершает работу и продолжает её в противном случае.
          6.4.4. Выполняется серия внутреннего цикла. Вычисляется позиция и номер текущего символа для вывода на экран:
                 номер символа: текущее значение параметра внешнего цикла.
                 номер строки: 10.
                 номер столбца: значение параметра внутреннего цикла.
                 В рассчитанную позицию выводится на экран символ строки, а следом за ним символ пробел.
                 Этот приём создаёт эффект движения символа по экрану вдоль строки.
                 Вывод задерживается на 5 милисекунд.
          6.4.5. Значение параметра внутреннего цикла уменьшается на 1 (шаг цикла).  
     6.5. Значение параметра внешнего цикла увеличивается на 1 (шаг цикла).
  7. На экран в 10 строку и 10 столбец выводится вся строка.
  8. Ждёт нажатия клавиши.
  9. Выгружает библиотеку PDCurses и завершает работу.

