#pragma once
#pragma comment(lib, "winmm.lib")

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <string.h>
#include <io.h>
#include <fcntl.h>
#include <Windows.h>

using namespace std;

wchar_t* ConvertCharactersToMorse(wchar_t ch);

void Command(wchar_t* document);

void Sound(wchar_t* sound);