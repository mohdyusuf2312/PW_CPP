#include <iostream>
#include <cwchar>

int main() {
    // Define a wide character string
    const wchar_t *wstr = L"Hello, wchar_t!";

    // Output the wide character string
    std::wcout << wstr << std::endl;

    // Use wide character functions
    size_t length = wcslen(wstr);
    std::wcout << L"The length of the string is: " << length << std::endl;

    return 0;
}
