#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;


namespace dll3 {
	public ref class Class1
	{
		public:
		void get_rand(bool* mas, int count)
		{
			srand(time(NULL));
			bool a = true;
			for (int i = 0; i < 15; i++) mas[i] = false;
			while (a)
			{
				mas[rand() % 15] = true;
				for (int i = 0, k = 0; i < 15; i++)
				{
					if (mas[i] == true) k++;
					if (k == count)
					{
						a = false;
						break;
					}
				}
			}
		}

		// TODO: Здесь следует добавить свои методы для этого класса.
	};
}

