# Test-for-WayToA
Данная программа решает задачу подсчёта минимального количества белых клеток ('w') в любом подотрезке строки длины k, используя методы из библиотеки STL C++ для чтения данных и базовые действия с векторами.

Как это работает:
Входные данные:
Сначала мы читаем число тестов t, то есть сколько задач требуется решить.
Затем для каждого теста читаем строку длины n и значение k — длину подотрезка.
Представление белых клеток:
Для упрощения работы с данными создаём вектор, где для каждой ячейки строки заполняем 1 (если текущий символ — 'w') или 0 (если это, например, 'b').
Вычисление через префиксные суммы:
Используем вспомогательный массив prefixSum, чтобы быстро узнать количество белых клеток на любом отрезке строки. Чтобы это сделать:
На каждом шаге заполняем prefixSum так, чтобы каждая позиция хранила сумму всех белых клеток от начала строки до текущей позиции.
Поиск минимального количества:
Проверяем каждый возможный подотрезок длины k, начиная с позиции i до i+k−1. 
Для этого вычисляем разницу между значениями вектора prefixSum на концах отрезка.
Полученное значение сравниваем с минимумом, который обновляем, если найдено меньшее.
Вывод результата для каждого теста:
После завершения проверки всех отрезков выводим минимальное количество белых клеток для данной строки.
Простыми словами:
Представь, что ты смотришь на длинную строку из чёрных ('b') и белых ('w') клеток на полу. У тебя есть линейка длины k, и ты хочешь найти такое место, куда ты можешь положить эту линейку, чтобы на расстоянии в k
 клеток было как можно меньше белых клеток. Мы используем заранее подготовленные «промежуточные» суммы, чтобы быстро узнавать, сколько там белых клеток, а потом ищем среди всех возможных мест самый выгодный вариант.

Для работы достаточно понимать основы векторов и как в них записывать данные, а также концепцию работы с индексами.
