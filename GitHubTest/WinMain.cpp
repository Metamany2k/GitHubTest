#include "WinHeader.h"


int APIENTRY wWinMain(
    _In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPWSTR lpCmdLine,
    _In_ int nShowCmd)
{
 
    MessageBoxA(nullptr, "Error in happy land", "error here", MB_OK);
    return 0;
}