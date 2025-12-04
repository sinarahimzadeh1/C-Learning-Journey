// A simple program that uses LoadLibrary and 
// GetProcAddress to access myPuts from Myputs.dll. 
 
#include <windows.h> 
#include <stdio.h> 
 
typedef int (__cdecl *function_plusFunc)(int , int); 


int main( void ) 
{ 
    HINSTANCE hinstLib; 
    function_plusFunc plusFunc; 
    BOOL fFreeResult, fRunTimeLinkSuccess = FALSE; 
 
    // Get a handle to the DLL module.
 
    hinstLib = LoadLibrary(TEXT("firstDllFile.dll")); 
 
    // If the handle is valid, try to get the function address.
 
    if (hinstLib != NULL) 
    { 
        plusFunc = (function_plusFunc) GetProcAddress(hinstLib, "plus"); 
 
        // If the function address is valid, call the function.
 
        if (NULL != plusFunc) 
        {
            fRunTimeLinkSuccess = TRUE;
            printf("%d" , (plusFunc) (2, 2) ); 
        }
        // Free the DLL module.
 
        fFreeResult = FreeLibrary(hinstLib); 
    } 

    // If unable to call the DLL function, use an alternative.
    if (!fRunTimeLinkSuccess) {
        printf("Error!!!!!!"); 

    }

    return 0;

}

