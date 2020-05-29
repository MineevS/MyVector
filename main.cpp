//Вызов операций.

#include "MyVector.h"

int main(int argc, char** argv)
{	
	//Создание векторов без значений;
	MyVector Vector1;
	
	const MyVector Vector2;

	//Создание векторов со значениями;
	MyVector Vector3(3, 5);//вызовется конструктор с параметром //Создаем вектор на '3' элементов со значением "5"
	
	const MyVector Vector4(3, 6);//вызовется конструктор с параметром //Создаем вектор на '3' элементов со значением "6"
	
	//Вывод значения не константного вектора;
	cout << Vector3[1] << endl;
	
	//Вывод значения константного вектора;
	cout << Vector4[1] << endl;
	
	//Проверка случая, когда задают индекс больше или меньше длины массива:
		
		//Больше:
			//Вывод значения не константного вектора;//+
			//cout << Vector3[6] << endl;
	
			//Вывод значения константного вектора;//+
			//cout << Vector4[6] << endl;
		//
		
		//Меньше:
			//Вывод значения не константного вектора;//+
			//cout << Vector3[-1] << endl;
	
			//Вывод значения константного вектора;//+
			//cout << Vector4[-1] << endl;
		//
	//
	
	//Оператор присваивания:
	
		Vector1 = Vector3;
	
		//Vector4 = Vector4;// Для Vector4 оператор присваивание не сработает т. к. Vector4 - const;
		
		Vector3 = Vector3;
	
	//
	
	/*
	//+
	MyVector Vector1;  // вызовется конструктор без параметров
	//+
	MyVector Vector2(10, 5); 
	//+
	MyVector Vector3(Vector1), Vector4 = Vector2; // в обоих случаях вызовется конструктор копирования
	//+
	MyVector Vector5, Vector6;
	//+
	Vector5 = Vector6;
	//+
	cout << Vector2.capacity() << endl;
	//+
	cout << Vector2.size() << endl;
	//+
	cout.precision(5);
	cout << Vector2.loadFactor() << endl;
	//+
	cout << Vector2[5] << endl;
	//+
	Vector2.pushBack(6);
	//+
	Vector2.insert(4, Vector3);
	//+
	Vector2.insert(6, 7);
	//+
	//Vector2.popBack();
	//+
	Vector2.erase(2);
	//+
	Vector2.erase(2, 3);
	//+
	Vector2.find(4, true);
	//+
	Vector2.reserve(10);
	//+
	Vector2.resize(4, 5);
	//+
	Vector2.capacity();
	//+
	Vector2.Show_ResizeStrategy();
	//+ -
	Vector2.begin();
	//+ -
	Vector2.end();
	
	// . . . it;
	
	for(it = Vector2.begin(); it < Vector2.end(); it++ )
	{
		cout << *it << endl;
	}
	

	//+ - 
	Vector2.clear();
	
	for(int i = 0; i < 4; i++)//Заполним массив значениями от 0 до 3 (4 элементов).
	{
		Vector3.pushBack(i);
	}
	
	//0 - increasing - Возрастание , 1 - decreasing - убывание;
	SortedStrategy D = SortedStrategy::increasing; //+
	//+ -
	MyVector SortedSquares(Vector3, D);//+
	
	cout << endl;
	
	*/
	return 0;
}