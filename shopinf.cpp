
#include <windows.h>
#include "shopinf.h"  
#include "login.h"    

using namespace System;
using namespace System::Windows::Forms;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    
    miniproject::login^ loginForm = gcnew miniproject::login();

    if (loginForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
        
        miniproject::shopinf^ shopinfForm = gcnew miniproject::shopinf();

        
        if (loginForm->Tag->ToString() == "staff") {
            shopinfForm->DisableStaffButtons();  
        }

        Application::Run(shopinfForm);
    }

    return 0;
}
