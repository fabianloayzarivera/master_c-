// 10_Practica10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TList.h"

TList GetReverseList(TList lstSrc);
int main()
{
	TList List;

	List.Push("Hello");
	List.Push("World");
	List.Push("My");
	List.Push("Name");
	List.Push("Is");
	List.Push("Fabian");

	TList List2 = List;
	cout << List.Next() << endl;
	cout << List.Next() << endl;
	cout << List.Next() << endl;
	cout << List.Next() << endl;
	cout << List.Next() << endl;
	cout << List.Next() << endl;

	/*cout << List2.Next() << endl;
	cout << List2.Next() << endl;
	cout << List2.Next() << endl;
	cout << List2.Next() << endl;
	cout << List2.Next() << endl;
	cout << List2.Next() << endl;*/
	

	getchar();

    return 0;
}

TList GetReverseList(TList lstSrc) {
	TList reverseList;
	for (int i = reverseList.Size() - 1; i >= 0; i--) {
		
	}
	return reverseList;
}
