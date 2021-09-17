#include "MyLibrary.h"
#include "Graphics.h"

bool Restart()
{
	int s = 0;
	wchar_t ch;
	do
	{
		clrscr();
		TextColor(15);
		wcout << L"Hãy chọn thao tác:\n";
		if (s == 0) TextColor(12);
		else TextColor(15);
		wcout << L"1. Tiếp tục\n";
		if (s == 1) TextColor(12);
		else TextColor(15);
		wcout << L"2. Thoát\n";
		ch = _getwch();
		if (ch == 80)
		{
			s++;
			if (s > 1) s = 0;
		}
		else if (ch == 72)
		{
			s--;
			if (s < 0) s = 1;
		}
	} while (ch != 13);
	if (s == 0) return true;
	else return false;
}

int main()
{
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
	wchar_t* document = new wchar_t[1000];
	wcscpy(document, L"");
	do
	{
		clrscr();
		wcout << L"Nhập vào văn bản: ";
		wcin.getline(document, 1000);
		Command(document);
		wcout << L"\nNhấn phím bất kỳ để tiếp tục!";
		wchar_t ch = _getwch();
	} while (Restart());
	TextColor(15);
	clrscr();
	gotoXY(50, 14);
	PlaySound(TEXT("TNT.wav"), NULL, SND_FILENAME | SND_ASYNC);
	wcout << L"Tạm biệt!";
	Sleep(1000);
	delete[] document;
}