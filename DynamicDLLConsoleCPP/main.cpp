#include <Windows.h>
#include <tchar.h>
#include <conio.h>
#include <iostream>

using namespace std;

//typedef char* (*PFN_SayHello)();
typedef char* (*PFN_SayHello)(char*, int k);

int main()
{
	HINSTANCE hDynamicDLL;

	//if ((hDynamicDLL = LoadLibrary(TEXT("DynamicDLL"))) == NULL)
	if ((hDynamicDLL = LoadLibrary(TEXT("CipherTritemiusDLL"))) == NULL)
	{
		
	}
	else
	{
		PFN_SayHello pfn_SayHello;
		//pfn_SayHello = (PFN_SayHello)GetProcAddress(hDynamicDLL, "SayHello");
		pfn_SayHello = (PFN_SayHello)GetProcAddress(hDynamicDLL, "mainTritemius");
		// << (*pfn_SayHello)() << endl;
		cout<<(*pfn_SayHello)("hello", 3)<<endl;
	}


	_getch();
	return 0;
}