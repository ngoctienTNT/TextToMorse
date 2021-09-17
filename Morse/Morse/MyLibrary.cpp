#include "MyLibrary.h"

wchar_t* ConvertCharactersToMorse(wchar_t ch)
{
	wchar_t *result=new wchar_t[10];
	switch (ch)
	{
	case 'a':
	case 'A': 
		wcscpy(result, L".-");
		break;
	case L'á':
	case L'Á':
		wcscpy(result, L".- ...");
		break;
	case L'à':
	case L'À':
		wcscpy(result, L".- ..-.");
		break;
	case L'ạ':
	case L'Ạ':
		wcscpy(result, L".- .---");
		break;
	case L'ã':
	case L'Ã':
		wcscpy(result, L".- -..-");
		break;
	case L'â':
	case L'Â':
		wcscpy(result, L".- .-");
		break;
	case L'ấ':
	case L'Ấ':
		wcscpy(result, L".- .- ...");
		break;
	case L'ầ':
	case L'Ầ':
		wcscpy(result, L".- .- ..-.");
		break;
	case L'ậ':
	case L'Ậ':
		wcscpy(result, L".- .- .---");
		break;
	case L'ă':
	case L'Ă':
		wcscpy(result, L".- .--");
		break;
	case L'ắ':
	case L'Ắ':
		wcscpy(result, L".- .-- ...");
		break;
	case L'ẵ':
	case L'Ẵ':
		wcscpy(result, L".- .-- -..-");
		break;
	case L'ằ':
	case L'Ằ':
		wcscpy(result, L".- .-- ..-.");
		break;
	case L'ặ':
	case L'Ặ':
		wcscpy(result, L".- .-- .---");
		break;
	case 'b':
	case 'B': 
		wcscpy(result, L"-...");
		break;
	case 'c':
	case 'C': 
		wcscpy(result, L"-.-.");
		break;
	case 'd':
	case 'D': 
		wcscpy(result, L"-..");
		break;
	case L'đ':
	case L'Đ':
		wcscpy(result, L"-.. -..");
		break;
	case 'e':
	case 'E': 
		wcscpy(result, L".");
		break;
	case L'é':
	case L'É':
		wcscpy(result, L". ...");
		break;
	case L'è':
	case L'È':
		wcscpy(result, L". ..-.");
		break;
	case L'ẹ':
	case L'Ẹ':
		wcscpy(result, L". .---");
		break;
	case L'ẽ':
	case L'Ẽ':
		wcscpy(result, L". -..-");
		break;
	case L'ẻ':
	case L'Ẻ':
		wcscpy(result, L". .-.");
		break;
	case L'ê':
	case L'Ê':
		wcscpy(result, L". .");
		break;
	case L'ế':
	case L'Ế':
		wcscpy(result, L". . ...");
		break;
	case L'ề':
	case L'Ề':
		wcscpy(result, L". . ..-.");
		break;
	case L'ễ':
	case L'Ễ':
		wcscpy(result, L". . -..-");
		break;
	case L'ệ':
	case L'Ệ':
		wcscpy(result, L". . .---");
		break;
	case 'f':
	case 'F': 
		wcscpy(result, L"..-.");
		break;
	case 'g': 
	case 'G': 
		wcscpy(result, L"--.");
		break;
	case 'h':
	case 'H': 
		wcscpy(result, L"....");
		break;
	case 'i':
	case 'I': 
		wcscpy(result, L"..");
		break;
	case L'í':
	case L'Í':
		wcscpy(result, L".. ...");
		break;
	case L'ì':
	case L'Ì':
		wcscpy(result, L".. ..-.");
		break;
	case L'ị':
	case L'Ị':
		wcscpy(result, L".. .---");
		break;
	case 'j':
	case 'J': 
		wcscpy(result, L".---");
		break;
	case 'k':
	case 'K': 
		wcscpy(result, L"-.-");
		break;
	case 'l':
	case 'L': 
		wcscpy(result, L".-..");
		break;
	case 'm':
	case 'M': 
		wcscpy(result, L"--");
		break;
	case 'n':
	case 'N': 
		wcscpy(result, L"-.");
		break;
	case 'o':
	case 'O': 
		wcscpy(result, L"---");
		break;
	case L'ó':
	case L'Ó':
		wcscpy(result, L"--- ...");
		break;
	case L'ò':
	case L'Ò':
		wcscpy(result, L"--- ..-.");
		break;
	case L'ọ':
	case L'Ọ':
		wcscpy(result, L"--- .---");
		break;
	case L'õ':
	case L'Õ':
		wcscpy(result, L"--- -..-");
		break;
	case L'ỏ':
	case L'Ỏ':
		wcscpy(result, L"--- .-.");
		break;
	case L'ô':
	case L'Ô': 
		wcscpy(result, L"--- ---");
		break;
	case L'ố':
	case L'Ố':
		wcscpy(result, L"--- --- ...");
		break;
	case L'ồ':
	case L'Ồ':
		wcscpy(result, L"--- --- ..-.");
		break;
	case L'ổ':
	case L'Ổ':
		wcscpy(result, L"--- --- .-.");
		break;
	case L'ỗ':
	case L'Ỗ':
		wcscpy(result, L"--- --- -..-");
		break;
	case L'ơ':
	case L'Ơ':
		wcscpy(result, L"--- .--");
		break;
	case L'ớ':
	case L'Ớ':
		wcscpy(result, L"--- .-- ...");
		break;
	case L'ờ':
	case L'Ờ':
		wcscpy(result, L"--- .-- ..-.");
		break;
	case L'ỡ':
	case L'Ỡ':
		wcscpy(result, L"--- .-- -..-");
		break;
	case L'ợ':
	case L'Ợ':
		wcscpy(result, L"--- .-- .---");
		break;
	case L'ở':
	case L'Ở':
		wcscpy(result, L"--- .-- .-.");
		break;
	case 'p':
	case 'P': 
		wcscpy(result, L".--.");
		break;
	case 'q':
	case 'Q': 
		wcscpy(result, L"--.-");
		break;
	case 'r':
	case 'R': 
		wcscpy(result, L".-.");
		break;
	case 's':
	case 'S': 
		wcscpy(result, L"...");
		break;
	case 't':
	case 'T': 
		wcscpy(result, L"-");
		break;
	case 'u':
	case 'U': 
		wcscpy(result, L"..-");
		break;
	case L'ú':
	case L'Ú':
		wcscpy(result, L"..- ...");
		break;
	case L'ù':
	case L'Ù':
		wcscpy(result, L"..- ..-.");
		break;
	case L'ủ':
	case L'Ủ':
		wcscpy(result, L"..- .-.");
		break;
	case L'ũ':
	case L'Ũ':
		wcscpy(result, L"..- -..-");
		break;
	case L'ụ':
	case L'Ụ':
		wcscpy(result, L"..- .---");
		break;
	case L'ư':
	case L'Ư':
		wcscpy(result, L"..- .--");
		break;
	case L'ứ':
	case L'Ứ':
		wcscpy(result, L"..- .-- ...");
		break;
	case L'ừ':
	case L'Ừ':
		wcscpy(result, L"..- .-- ..-.");
		break;
	case L'ữ':
	case L'Ữ':
		wcscpy(result, L"..- .-- -..-");
		break;
	case L'ự':
	case L'Ự':
		wcscpy(result, L"..- .-- .---");
		break;
	case L'ử':
	case L'Ử':
		wcscpy(result, L"..- .-- .-.");
		break;
	case 'v':
	case 'V': 
		wcscpy(result, L"...-");
		break;
	case 'w':
	case 'W': 
		wcscpy(result, L".--");
		break;
	case 'x':
	case 'X': 
		wcscpy(result, L"-..-");
		break;
	case 'y':
	case 'Y': 
		wcscpy(result, L"-.--");
		break;
	case L'ý':
	case L'Ý':
		wcscpy(result, L"-.-- ...");
		break;
	case L'ỳ':
	case L'Ỳ':
		wcscpy(result, L"-.-- ..-.");
		break;
	case L'ỵ':
	case L'Ỵ':
		wcscpy(result, L"-.-- .---");
		break;
	case L'ỷ':
	case L'Ỷ':
		wcscpy(result, L"-.-- .-.");
		break;
	case L'ỹ':
	case L'Ỹ':
		wcscpy(result, L"-.-- -..-");
		break;
	case 'z':
	case 'Z': 
		wcscpy(result, L"--..");
		break;
	case '0': 
		wcscpy(result, L"-----");
		break;
	case '1': 
		wcscpy(result, L".----");
		break;
	case '2': 
		wcscpy(result, L"..---");
		break;
	case '3': 
		wcscpy(result, L"...--");
		break;
	case '4': 
		wcscpy(result, L"....-");
		break;
	case '5': 
		wcscpy(result, L".....");
		break;
	case '6': 
		wcscpy(result, L"-....");
		break;
	case '7': 
		wcscpy(result, L"--...");
		break;
	case '8': 
		wcscpy(result, L"---..");
		break;
	case '9': 
		wcscpy(result, L"----.");
		break;
	case ' ':
		wcscpy(result, L" /");
		break;
	case '.': 
		wcscpy(result, L".-.-.-");
		break;
	case ',':
		wcscpy(result, L"--..--");
		break;
	case '?':
		wcscpy(result, L"..--..");
		break;
	case '\'':
		wcscpy(result, L".----.");
		break;
	case '"':
		wcscpy(result, L".-..-.");
		break;
	case '!':
		wcscpy(result, L"-.-.--");
		break;
	case '/':
		wcscpy(result, L"-..-.");
		break;
	case '(':
		wcscpy(result, L"-.--.");
		break;
	case ')':
		wcscpy(result, L"-.--.-");
		break;
	case '&':
		wcscpy(result, L".-...");
		break;
	case ':':
		wcscpy(result, L"---...");
		break;
	case ';':
		wcscpy(result, L"-.-.-.");
		break;
	case '=':
		wcscpy(result, L"-...-");
		break;
	case '+':
		wcscpy(result, L".-.-.");
		break;
	case '-':
		wcscpy(result, L"-....-");
		break;
	case '_':
		wcscpy(result, L"..--.-");
		break;
	case '$':
		wcscpy(result, L"...-..-");
		break;
	case '@':
		wcscpy(result, L".--.-.");
		break;
	case '¿':
		wcscpy(result, L"	..-.-");
		break;
	case '¡':
		wcscpy(result, L"--...-");
		break;
	default: 
		wcscpy(result, L"");
		break;
	}
	return result;
}

void Command(wchar_t* document)
{
	wchar_t* result = new wchar_t[6000];
	wcscpy(result, L"");
	int i = 0;
	while (document[i] != '\0')
	{
		wcscat(result, ConvertCharactersToMorse(document[i]));		
		i++;
		if (document[i] != ' ' && document[i] != '\0') wcscat(result, L" ");
	}
	Sound(result);
	delete[] result;
}

void Sound(wchar_t* sound)
{
	int i = 0;
	wcout << "Morse: ";
	while (sound[i] != '\0')
	{
		if (sound[i] == '.') PlaySound(TEXT("tich.wav"), NULL, SND_FILENAME | SND_ASYNC);
		else if (sound[i] == '-') PlaySound(TEXT("te.wav"), NULL, SND_FILENAME | SND_ASYNC);
		wcout << sound[i];
		if (sound[i] != ' ') Sleep(400);
		else Sleep(600);
		i++;		
	}
}