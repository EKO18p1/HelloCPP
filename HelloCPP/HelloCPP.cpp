#include "stdafx.h"
#include "ResoucesStrings.h"

void main()
{
	string str;
	string name = "Name of user is ";
	
	cout << cinUserName << endl;
	std::getline(std::cin, str);

	name += str;
	cout << name << endl;

	cout << helloString << endl;

	str.clear();

	cout << str.find('e', 0) << endl;

	if (str != name)
		cout << "Str" << endl;

	if (!str.empty())
	{
		cout << str.length() << endl;
		cout << str.size() << endl;
	}

	system("pause");
}
