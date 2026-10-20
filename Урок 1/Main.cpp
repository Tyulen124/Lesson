#include <iostream>
#include <Windows.h>
const int size = 5;

template<typename T1, typename T2>
int Sum(T1 one, T2 two)
{
	return one + two;
}

int Fak(int num, int num2)
{
	//int result = 0;
	if (num2 < 0)
	{
		return 0;
	}

	if (num2 == 0)
	{
		
		return 0;
	}
	 return num + Fak(num, num2 - 1);

}



void SetArray(int name[], int size)
{
	 for (int i = 0; i < size; i++)
	{
		name[i] = rand() % 10 + 1;
	}
	 
}
void SetArray(double name[], double size)
{

	for (int i = 0; i < size; i++)
	{
		
		name[i] = (double)(rand() % 10 + 1) / 10;
	}
	
}
void SetArray(char name[], char size)
{
	for (int i = 0; i < size; i++)
	{
		name[i] = 'a' + rand() % 26;
	}
	
}
void PrintArray(int name[], int size)
{
	
	for (int i = 0; i < size; i++)
	{
		std::cout << name[i] << " ";
	}
	std::cout << "\n";

}
void PrintArray(double name[], double)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << name[i] << " ";
	}
	std::cout << "\n";
	
}
void PrintArray(char name[],char size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << name[i] << " ";
	}
	std::cout << "\n";
}
int Sum(int one, int two)
{
	return one + two;
}
double Sum(double one, double two)
{
	return one + two;
}
float Sum(float one)
{
	return one + 52;
}
void Plus(int *num)
{
	*num += 5;
}
void MySwap(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
	
}
void SetArray(int* name, int* size)
{
	for (int i = 0; i < *size; i++)
	{
		*(name + i) = rand() % 10 + 1;
	}

}
void AddArray(int *&arr, int &size, int num)
{
	size++;
	int* temp = new int[size];

	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	std::swap(arr, temp);

	arr[size - 1] = num;

	delete[] temp;
}
void createArr(int *&name, int& size)
{
	name = new int [size] {};
}
void incArr(int *&name, int &size)
{
	
	for (int i = 0; i < size; i++)
	{
		name[i] = i + 1;
	}
}
void stdArr(int *& name, int& size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << name[i];
	}
}
void delArr(int *& name)
{
	delete[] name;
}
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));
	
	/*int a = 5;
	int* ptr = &a; // int* ptr = nullptr (пустой указатель)
	std::cout << a << "\n";
	Plus(ptr); // или &a
	std::cout << a << "\n";
	std::cout << ptr << "\n";
	std::cout << *ptr << "\n";*/
	/*int a = 10;
	int* data = new int;


	*data = 1000;

	delete data;

	data = &a;

	data = new int;

	delete data;

	data = nullptr;
*/

	/*int row = 3, col = 4;

	int** arr = new int* [row];
	for (int i = 0; i < row; i++)
	{
		arr[i] = new int[col] {};
		
	}
	for (int i = 0; i < row; i++)
	{
		delete[] arr[i];

	}
	delete[] arr;*/

	/*int Size = 2, row = 4, col1 = 4, col2 = 3;
	int*** arr = new int**[Size];
	for (int i = 0; i < Size; i++)
	{
		arr[i] = new int* [row];
	}
	
		for (int j = 0; j < row; j++)
		{
			arr[0][j] = new int[col1];
		}
		arr[1][0] = new int[2];
		for (int j = 1; j < row; j++)
		{
			arr[1][j] = new int[col2];
		}
		for (int i = 0; i < Size; i++)
		{
			for (int j = 0; j < row; j++)
			{
				delete[]arr[i][j];

		    }
			delete[]arr[i];
		}
		delete[] arr;
	*/
	int* ptr = nullptr;
	
	int size = 5;
	createArr(ptr, size);
	incArr(*&ptr, size);
	stdArr(*&ptr, size);
	//delArr(*ptr)

	//std::cin >> size;

	/*int size = 5;
	* int* arr = nullptr;
	arr = new int[size] {};

	for (int i = 0; i < size; i++)
	{
		arr[i] = i + 1;
	}

	AddArray(arr, size);

	for (int i = 0; i < size; i++)
	{
		arr[i] = i + 1;
	}*/

	//int one = 10, two = 15;
	//const int size = 5;
	//int arr[size]{  };
	/*std::cout << *arr << "\n";
	std::cout << *(arr + 1) << "\n"; */
	/*SetArray(arr, size);
	std::cout << *arr  << " " << *(arr + 1) << " " << *(arr + 2) << " " << *(arr + 3) << " " << *(arr + 4) << "\n";
	
	std::cout << one << " " << two << "\n";
	// std::swap(one, two);
	MySwap(&one, &two);
	std::cout << one << " " << two << "\n";*/
	

	return 0;
}

/*

Настойка: боярышник

Если пользователь выбрал хотя бы 1 литр любого фруктового сока, то купить боярышник нельзя
А если он уже был куплен, то покупка сока анулирует все настойки


*/

/*
int qt1 = 0;
	int qt2 = 0;
	int qt3 = 0;
	int qt4 = 0;
	int qt5 = 0;
	int qt6 = 0;
	int qt7 = 0;
	int qt8 = 0;
	int qt9 = 0;
	int qt10 = 0;
	int AJ = 50;

	const int size = 100;
	double price = 0;
	double priceAJ = 0;


	int id;
	int arr[size]{};

	int quantity;
	int qFJ = 0;

	int disTea;
	double priceN = 0;






	for (int i = 0; i < size; i++)
	{
		std::cout << "---------------------------------------------------------------------------------------------\n";
		std::cout << "| Фруктовые Соки | id-11 Яблочный | id-12 Апельсиновый | id-13 Абрикосовый | id-14 Грушевый |\n";
		std::cout << "|                | 85р за 1 литр  |    80р за 1 литр   |    82р за 1 литр  |  87р за 1 литр |\n";
		std::cout << "---------------------------------------------------------------------------------------------\n";
		std::cout << "| Овощные Соки   | id-21 Томатный |    id-22 Луковый   |  id-23 Огуречный  |                |\n";
		std::cout << "|                | 75р за 1 литр  |    70р за 1 литр   |    78р за 1 литр  |                |\n";
		std::cout << "---------------------------------------------------------------------------------------------\n";
		std::cout << "|     Чаи        | id-31 Чесночный|  id-32 Петрушевый  |                   |                |\n";
		std::cout << "|                | 90р за 1 литр  |    95р за 1 литр   |                   |                |\n";
		std::cout << "---------------------------------------------------------------------------------------------\n";
		std::cout << "|    Настойки    | id-41 Боярышник|                    |                   |                |\n";
		std::cout << "---------------------------------------------------------------------------------------------\n";
		std::cout << "Введите id товара который хотите выбрать (Максимальный размер чека 100 позиций)\nили введите 0 чтобы завершить добавление товаров: ";
		std::cin >> id;
		if (id == 0)
		{
			break;
		}

		std::cout << "Введите количество данного товара товаров которые хотите: ";
		std::cin >> quantity;


		if (id == 11 && quantity > 0)
		{

			AJ = AJ - quantity;
			if (quantity > AJ)
			{

				std::cout << "Такого количества яблочного сока нет в наличии\n его осталось: " << AJ;
				Sleep(2500);
			}

			else
			{
				arr[i] = 85 * quantity;
				priceAJ += arr[i];
				qFJ += 1;

				qt1 += quantity;
			}



		}


		if (id == 12 && quantity > 0)
		{
			arr[i] = 80 * quantity;
			price += arr[i];
			qFJ += 1;
			qt2 += quantity;

		}
		if (id == 13 && quantity > 0)
		{
			arr[i] = 82 * quantity;
			price += arr[i];
			qFJ += 1;
			qt3 += quantity;
		}
		if (id == 14 && quantity > 0)
		{
			arr[i] = 87 * quantity;
			price += arr[i];
			qFJ += 1;
			qt4 += quantity;
		}
		if (id == 21 && quantity > 0)
		{
			arr[i] = 75 * quantity;
			price += arr[i];
			qt5 += quantity;
		}
		if (id == 22 && quantity > 0)
		{
			disTea = quantity / 4;

			arr[i] = 70 * quantity;

			price += arr[i];
			price = price - (70 * disTea);
			qt6 += quantity;

		}
		if (id == 23 && quantity > 0)
		{
			arr[i] = 78 * quantity;
			price += arr[i];
			qt7 += quantity;
		}
		if (id == 31 && quantity > 0)
		{
			arr[i] = 90 * quantity;
			price += arr[i];
			qt8 += quantity;
		}
		if (id == 32 && quantity > 0)
		{

			arr[i] = 95 * quantity;
			price += arr[i];
			if (quantity > 3)
			{
				price = price * (1 - 0.05);
			}
			qt9 += quantity;
		}
			if (id == 41 && quantity > 0)
			{

				if (qFJ > 0)
				{
					std::cout << "Боярышник недоступен\n";
					Sleep(1000);
					priceN *= 0;

				}
				else
				{
					arr[i] = 150 * quantity;
					priceN += arr[i];
					qt10 += quantity;
				}



			}




		system("cls");
		Sleep(750);








	}
	if (qFJ > 0)
	{

		priceN *= 0;
	}
	int dis = 0;
	if (price > 1500)
	{
		price = price - (1.0 - 0.13);
		dis += 13;
	}
	price += priceN;
	price += priceAJ;


	std::cout << "Ваши товары: \n";
		if (qt1 > 0)
		{
			std::cout << "Яблочные соки - " << qt1 << "шт\n";
		}
		if (qt2 > 0)
		{
			std::cout << "Апельсиновые соки - " << qt2 << "шт\n";
		}
		if (qt3 > 0)
		{
			std::cout << "Абрикосовые   соки - " << qt3 << "шт\n";
		}
		if (qt4 > 0)
		{
			std::cout << "Грушевые соки - " << qt4 << "шт\n";
		}
		if (qt5 > 0)
		{
			std::cout << "Томатные соки - " << qt5 << "шт\n";
		}
		if (qt6 > 0)
		{
			std::cout << "Луковые соки - " << qt6 << "шт\n";
		}
		if (qt7 > 0)
		{
			std::cout << "Огуречные соки - " << qt7 << "шт\n";
		}
		if (qt8 > 0)
		{
			std::cout << "Чесночные чаи - " << qt8 << "шт\n";
		}
		if (qt9 > 0)
		{
			std::cout << "Петрушевые чаи - " << qt9 << "шт\n";
		}
		if (qt10 > 0)
		{
			std::cout << "Боярышник - " << qt10 << "шт\n";
		}
		std::cout << "\nОбщая стоимость покупки: " << price << "\n" << "Скидка: " << dis << "\n";

*/

/*std::cout << "\t\t\t\t\t     Магазин \"Соки Даниил\" \n\n";
		std::cout << "\t\t\t\t\t         КАТАЛОГ  \n\n";
		std::cout << "\t\t-----------------------------------------------------------------------------------\n";
		std::cout << "\t\t|     Фруктовые Соки     |   Овощные соки   |        Чаи        |     Настойки    |\n";
		std::cout << "\t\t-----------------------------------------------------------------------------------\n";
		std::cout << "\t\t| id-11  Яблочный        |  id-21 Томатный  | id-31  Чесночный  | id-41 Боярышник |\n";
		std::cout << "\t\t|    (85р за литр)       |  (75р за литр)   |   (90р за литр)   | (150р за литр)  |\n";
		std::cout << "\t\t-----------------------------------------------------------------------------------\n";
		std::cout << "\t\t| id-12  Апельсиновый    |  id-22 Луковый   | id-32 Петрушевый  |                 |\n";
		std::cout << "\t\t|    (80р за литр)       |   (70р за литр)  |   (95р за литр)   |                 |\n";
		std::cout << "\t\t-----------------------------------------------------------------------------------\n";
		std::cout << "\t\t| id-13  Абрикосовый     |  id-23 Огуречный |                   |                 |\n";
		std::cout << "\t\t|    (82р за литр)       |  (78р за литр)   |                   |                 |\n";
		std::cout << "\t\t-----------------------------------------------------------------------------------\n";
		std::cout << "\t\t| id-14  Грушевый        |                  |                   |                 |\n";
		std::cout << "\t\t|    (87р за литр)       |                  |                   |                 |\n";
		std::cout << "\t\t-----------------------------------------------------------------------------------\n\n";
 */
 /*:(id - 11) Яблочный(85р за литр) | (id - 12) Апельсиновый(80р за литр) | ";
	 std::cout << " (id - 13) \n\t\t\t Абрикосовый (82р за литр) | (id - 14) Грушевый (87р за литр)\n\n";
 std::cout << "Овощные Соки: (id - 21) Томатный (75р за литр) | (id - 22) Луковый (70р за литр) | (id - 23) Огуречный (78р за литр)\n\n";
 std::cout << "Чаи: (id - 31) Чесночный 90р за литр | (id - 32)Петрушевый (95р за литр)\n\n";*/


/*
const int size = 5;
	int intArr[size];
	double doubleArr[size];
	char charArr[size];



SetArray(intArr, size);
SetArray(doubleArr, size);
SetArray(charArr, size);
PrintArray(intArr, size);
PrintArray(doubleArr, size);
PrintArray(charArr, size);*/

	/*for (int i = 0; i < size; ++i) {
		arr[i] = std::rand() % 5; 
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";

	
	int a = 0; 
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] != 0) {
			arr[a++] = arr[i]; 
		}
	}

	
	while (a < size) 
	{
		arr[a++] = -1;
	}

	
	
	for (int i = 0; i < size; i++) 
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";

	return 0;
}
	*/

	
	
	
	
	// // тип_данных имя_массива [строки][стобики];
	// тип_данных имя_массива [кол_ячеек];
	// тип_данных имя_переменной

	

/*
	const int row = 3, col = 4;
	int arr[row][col];

	for (int i = 0; i < row; i++)
	{


		for (int  a = 0;  a < col;  a++)
		{

			arr[i][a] = rand() % 10 + 1;
			std::cout << arr[i][a] << " ";


		}
		std::cout << "\n";
	}
	std::cout << "123";
	*/

	/*int arr[3];
	arr[0] = 100;
	arr[1] = 102;
	arr[2] = 110;
	std::cout << arr[0] << "\n";
	std::cout << arr[1] << "\n";
	std::cout << arr[2] << "\n";*/
	/* int number[5];

	std::cout << "Заполните массив пятью числами: ";
	std::cin >> number[0] >> number[1] >> number[2] >> number[3] >> number[4];
   system("cls");

	 std::cout  << number[0] << " " << number[1] << " " << number[2] << " " << number[3] << " " << number[4];

   */

	/*
	int number[10]{};
	int pNumber = 0;
	int nNumber = 0;
	while (true)
	{
		for (int i = 0; i < 10; i++)
		{
			number[i] = rand() % 21 - 10;
			if (number[i] > 0)
			{
				pNumber += number[i];
			}
			else if (number[i] < 0)
			{
				nNumber += number[i];
			}

		}
		for (int i = 0; i < 10; i++)
		{
			std::cout << number[i] << " ";
		}
		std::cout << "\n";
	

			
			std::cout << "2) " << pNumber << "\n";
			std::cout << "3) " << nNumber;

		
		break;
	}

		
		

	return 0;
}
*/
/* 
  типы данных

  bool		true/false  0 - false
  char		'+'     43

  short		        123			-32768 - 32767
  unsigned short	123			0 - 65535

  int		        123456		-2147483648 - 2147483647
  unsigned int		123456		0 - 4294967295
  long long int		123456789   a lot

  float				123.456		+-(3.4E-38 ... 3.4E+38)
  double			1234567.4567 +-(1.7E-308 ... 1.7E+308)
  long double		no comment	 +-(3.4E-4932 ... 1.1E+4932)

  Операторы:

  Математические: + - * / = ++ -- += -= *= /= % 

  сравнительные: < > >= <= == !=	<=>

  логические:	&& (и)  || (или)  ! (не)

  ТАБУ: goto	and or not		int имяПеременной







*/
/*std::cout << "\tHello \\ world \"Data\" 5 + 2 " << 5 + 2 << std::endl;
		std::cout << "Info\n\n";
		std::cout << "Меня\n \tзовут\n \t\tАлександр\n" << " \t  Тюленев\n" << "Евгеньевич";
		*/
/* double a = 0;
double b = 0;

std::cin >> a;


if (a > 0)
{
	std::cout << "Фарит";
}
else if (a < 0)
{
	std::cout << "Привет";
}
else
{
	std::cout << "Пока";
}
*/
/*double a;
	double b;
	int c;
	std::cout << "Добро пожаловать в калькулятор!\n";
	std::cout << "Введите число:\n";
	std::cin >> a;
	

	
	std::cout << "Введите второе число:\n";
	std::cin >> b;
	std::cout << "Введите математический оператор где:\n 1 = +\n 2 = -\n 3 = *\n 4 = /\n";

	std::cin >> c;
	std::cout << "Результат вычисления:";
	if (c == 1)
	{
		std::cout << a + b;
	}
	else if (c == 2)
	{
		std::cout << a - b;
	}
	else if (c == 3)
	{
		std::cout << a * b;
	}
	else if (c == 4)
	{
		std::cout << a / b;
	}
	else
	{
		std::cout << "ERROR Такого оператора не существует";
	}
	

		
		// тип_данных имя_переменной

		
		

	return 0;
}
*/
/*while (true)
	{
		std::cout << "Hello ";
		c++;

		if (c == 3)
		{
			continue;
		}
		std::cout << "world\n";
	}
	do

	{




	} while (true);

	*/
 /*int c = 0;
	int summa = 0;
	
	
	while(true)
	{
		std::cout << "Введите число: ";
		std::cin >> c;
		if (c == 0)
		{
			std::cout << "Сумма всех предыдущих чисел: ";
			std::cout << summa ;
			break;
		}
		else 
		{
			summa += c ;
			 
			

		}

		
		




	}
*/
/*int choose = 0, hp = 0, number = 0, randomNumber = 0;
	int maxHp = 25, maxHpHard = 25, chance = 30;


	

	std::cout << randomNumber << "\n";

	
	while (true)
	{
		system("cls");
		std::cout << "\n\n\n\t\tИгра \"Угадай число\"\n\n\n";
		std::cout << "1 - Начать игру\n";
		std::cout << "2 - Настройки\n";
		std::cout << "0 - Выход\n\n";
		std::cout << "Ввод: ";
		std::cin >> choose;
		if (choose == 1)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\t\tВыберите уровень сложности\n\n\n";
				std::cout << "1 - Лёгкий (1 - 500)\n";
				std::cout << "2 - Сложный (1 - 5000)\n";
				std::cout << "0 - Выход в меню\n\n";
				std::cout << "Ввод: ";
				std::cin >> choose;

				if (choose == 1)
				{
					randomNumber = rand() % 500 + 1;
					hp = maxHp;
					while(true)
					{ 
						system("cls");
						std::cout << "Кол-во жизней: " << hp << "\n";
						
						std::cout << "Введите число от 1 до 500: ";
						std::cin >> number;

						if (number == randomNumber)
						{
							std::cout << "Поздравляем! Вы выиграли!\n";
							std::cout << "Осталось жизней: " << hp << "\n";
							system("pause");
							break;
						}
						else if (number < 1 || number > 500 )
						{
							std::cout << "Вы вышли за лимиты!\n";
							Sleep(1500);
						}
						else
						{
							hp--;
							if (hp <= 0)
							{
								std::cout << "Вы проиграли!\nЧисло компьютера было: " << randomNumber << "\n";
								system("pause");
								break;
							}
							std::cout << "Не угадали\n";
							std::cout << "Кол-во жизней: " << hp << "\n";
							std::cout << "Взять подсказку за 1 жизнь?\n";
							std::cout << "1 - Да\nЛюбое число - Нет\n\n";
							std::cout << "Ввод: ";
							std::cin >> choose;
							if (choose == 1)
							{
								hp--;
								if (hp <= 0)
								{
									std::cout << "Вы проиграли!\nЧисло компьютера было: " << randomNumber << "\n";
									system("pause");
									break;
								}
								if (number < randomNumber)
								{
									std::cout << "Ваше число меньше числа компьютера\n";
								}
								else
								{
									std::cout << "Ваше число больше числа компьютера\n";
								}
								Sleep(1500);
							}
							else
							{
								std::cout << "Отказ от подсказки\n";
								Sleep(500);
							}

						}
					}
				
					
				}
				else if (choose == 2)
				{ 
					randomNumber = rand() % 5000 + 1;
					hp = maxHpHard;
					while (true)
					{
						system("cls");
						std::cout << "Кол-во жизней: " << hp << "\n";

						std::cout << "Введите число от 1 до 5000: ";
						std::cin >> number;

						if (number == randomNumber)
						{
							std::cout << "Поздравляем! Вы выиграли!\n";
							std::cout << "Осталось жизней: " << hp << "\n";
							system("pause");
							break;
						}
						else if (number < 1 || number > 5000)
						{
							std::cout << "Вы вышли за лимиты!\n";
							Sleep(1500);
						}
						else
						{
							hp--;
							if (hp <= 0)
							{
								std::cout << "Вы проиграли!\nЧисло компьютера было: " << randomNumber << "\n";
								system("pause");
								break;
							}
							std::cout << "Не угадали\n";
							std::cout << "Кол-во жизней: " << hp << "\n";
							std::cout << "Взять подсказку за 1 жизнь?\n";
							std::cout << "1 - Да\nЛюбое число - Нет\n\n";
							std::cout << "Ввод: ";
							std::cin >> choose;
							if (choose == 1)
							{
								if (rand() % 100 + 1 <= chance)
								{
									std::cout << "Бесплатная подсказка\n";
									Sleep(1000);
								}
								else
								{
									hp--;
									if (hp <= 0)
									{
										std::cout << "Вы проиграли!\nЧисло компьютера было: " << randomNumber << "\n";
										system("pause");
										break;
									}
								}
								
								if (number < randomNumber)
								{
									std::cout << "Ваше число меньше числа компьютера\n";
								}
								else
								{
									std::cout << "Ваше число больше числа компьютера\n";
								}
								Sleep(1500);
							}
							else
							{
								std::cout << "Отказ от подсказки\n";
								Sleep(500);
							}

						}
					}

				}
				else if (choose == 0)
				{
					break;
				}
				else
				{
					std::cout << "Некорректный ввод\n\n";
					Sleep(1500);
				}
				
			}
			
		}
		else if (choose == 2)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\t\tНастройки игры\n\n\n";
				std::cout << "1 - Изменить кол-во жизней для легкой игры\n";
				std::cout << "2 - Изменить кол-во жизней для сложной игры\n";
				std::cout << "3 - Изменить вероятность бесплатной подсказки для сложной игры\n";
				std::cout << "0 - Выход в меню\n";
				std::cout << "Ввод: ";
				std::cin >> choose;

				if (choose == 1)
				{
					while (true)
					{
						system("cls");
						std::cout << "Введите кол-во жизней для легкой игры: ";
						std::cin >> choose;
						if (choose < 1 || choose > 100)
						{
							std::cout << "Допустимые значения от 1 до 100\n";
							Sleep(2000);

						}
						else
						{
							maxHp = choose;
							std::cout << "Успешно\n";
							Sleep(1000);
							break;

						}
					}
				}
				else if (choose == 2)
				{
					while (true)
					{
						system("cls");
						std::cout << "Введите кол-во жизней для сложной игры: ";
						std::cin >> choose;
						if (choose < 1 || choose > 100)
						{
							std::cout << "Допустимые значения от 1 до 100\n";
							Sleep(2000);

						}
						else
						{
							maxHpHard = choose;
							std::cout << "Успешно\n";
							Sleep(1000);
							break;

						}
					}
				}
				else if (choose == 3)
				{
					while (true)
					{
						system("cls");
						std::cout << "Введите вероятность бесплатной подсказки для сложной игры: ";
						std::cin >> choose;
						if (choose < 0 || choose > 100)
						{
							std::cout << "Допустимые значения от 0 до 100\n";
							Sleep(2000);

						}
						else
						{
							chance = choose;
							std::cout << "Успешно\n";
							Sleep(1000);
							break;

						}
					}
				}
				else if (choose == 0)
				{
					break;
				}
				else
				{
					std::cout << "Некорректный ввод\n\n";
					Sleep(1500);
				}
				



			}
		}
		else if (choose == 0)
		{
			system("cls");
			std::cout << "\n\n\n\t\tСпасибо за игру!\n\n";
			break;

		}
		else
		{
			std::cout << "Некорректный ввод\n\n";
			Sleep(1500);
		}
		




	}*/

























