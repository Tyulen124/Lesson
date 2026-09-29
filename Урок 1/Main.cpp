#include <iostream>
#include <Windows.h>


int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));
	const int row = 3, col = 4;
	int arr[row][col]; // // тип_данных имя_массива [строки][стобики];
	// тип_данных имя_массива [кол_ячеек];
	// тип_данных имя_переменной
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
	return 0;
}

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

























