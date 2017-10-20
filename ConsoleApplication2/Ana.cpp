#include <windows.h>
#include <iostream>
#include "Anaa1.hpp"

using namespace std;

int main(int argc, char* argv[]) {
	HANDLE hGame = GetBastardHandle(L"csgo.exe", PARENT_PCASVC, TRUE);
	cout << "Handle to target: 0x" << hex << hGame << endl;

	system("pause");
	return EXIT_SUCCESS;
}