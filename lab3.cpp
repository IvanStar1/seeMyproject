#include <iostream> 
#include <locale.h> 
#include <iomanip> 
#include <bitset>

// КОНСТРУКЦИИ ЯЗЫКА C/C++

int main()
{
	setlocale(LC_ALL, "Russian");

	int *ptr_int;

	// std::cout << ptr_int << std::endl;   Нельзя распечатать неинициализированную переменную

	// std::cout << *ptr_int << std::endl;  Нельзя распечатать неинициализированную переменную

	std::cout << "sizeof(ptr_int) = " << sizeof(ptr_int) << std::endl;
	std::cout << "sizeof(ptr_int) = " << sizeof(*ptr_int) << std::endl;
	int a = 10;

	ptr_int = &a;

	std::cout << "Значение адреса a = " << ptr_int << std::endl;
	std::cout << "Значение *ptr_int = " << *ptr_int << std::endl << std::endl;

	// ------------------------------------------------------
	int array_of_int[10];
	
	for (int i = 0; i < 9; i++)
		{
		std::cout << array_of_int[10] << std::endl;
		}
	
	int c = 7;
	//   int array_of_int[c];  нельзя объявлять массив с переменной в качестве длины

	double array_of_double[10][20];
	for (int i = 0; i < 9; i++)
	{
		std::cout << std::endl << array_of_double[1] << std::endl;
	}
	/*
	Задания к конспекту
		1. Объявить одномерный массив без инициализации и распечатать весь массив в цикле.
		2. Попробуйте изменить объявление массива так, чтобы его длина задавалась переменной(заранее объявленной).Запишите результат в комментарии.
		3. Объявить двумерный массив с инициализацией и распечатать весть массива в цикле в виде матрицы(по строкам и столбцам, первый индекс - индекс строки, второй индекс - индекс столбца).
		4. Распечатайте выбранный вами элемент двумерного массива(индексы попадают в диапазон массива).Убедитесь, что значение совпадает с тем, которое было задано при инициализации.
		5. Распечатайте выбранный вами элемент двумерного массива, задав индексы, выходящие за размеры массива на 5 - 10 позиций, и на 10000 - 100000 позиций.Пронаблюдайте и прокомментируйте результат.
		6. Распечатайте массив без указания индексов(как указатель на вершину массива).
		7. Распечатайте элемент массива с выбранным вами индексом, пользуясь формулой(1) для доступа к значению.
		8. Объявите двумерный массив размерности 10x10 и заполните его с помощью цикла значениями по треугольному шаблону :
	    1	0	0	...
		1	2	0	...
		1	2	3	...
		...	...	...	...
		9. Выведите формулу(2), аналогичную формуле(1) для доступа к элементам двумерного массива(через сумму указателя и индексов и разыменование, без использования квадратных скобок).С помощью доступа по выведенной формуле к элементам массива и печати убедитесь, что формула работает как ожидается и предоставляет доступ к выбранному элементу.
    */




    std::system("pause"); // вызов функции system() из стандартной библиотеки
	return 0;
}
