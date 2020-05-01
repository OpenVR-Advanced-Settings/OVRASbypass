#include <iostream>
#include <windows.h>

int main() {
	ShellExecute(NULL, "open", ".\\AdvancedSettings.exe", NULL, NULL, SW_SHOWDEFAULT);
}
