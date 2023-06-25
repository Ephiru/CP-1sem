#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <wchar.h>

int main()
{
    //PDWORD charCount = NULL;
    //HANDLE stdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    //if (stdOut == INVALID_HANDLE_VALUE) {
    //int err = GetLastError();
    //wprintf(L"Can't open stdout! Error code: %d", err);
   // return err;
//}
//wchar_t text[] = L"Hello, world! Привет, мир! Γειά σου Κόσμε!";
//WriteConsoleW(stdOut, text, wcslen(text), charCount, NULL);
//CloseHandle(stdOut);
//return 0;



int x = GetSystemMetrics(SM_CXSCREEN);
    int y = GetSystemMetrics(SM_CYSCREEN);

    printf("The screen size is: %dx%d\n", x, y);



 int z = GetSystemMetrics(SM_CMONITORS);
 printf("number of monitors: %d\n", z);



 int f = GetSystemMetrics(SM_CMOUSEBUTTONS);
printf("number of buttons: %d", f);
return 0;
}
