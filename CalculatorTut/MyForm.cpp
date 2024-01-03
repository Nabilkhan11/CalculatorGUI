#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    CalculatorTut::MyForm form;
    Application::Run(% form);

    return 0; // Add this line to indicate successful completion
}

//#include "MyForm.h"
//
//using namespace System;
//using namespace System::Windows::Forms;
//
//[STAThread] // Corrected attribute name
//
//void main(array<String^>^ args)
//{
//    Application::EnableVisualStyles();
//    Application::SetCompatibleTextRenderingDefault(false);
//    CalculatorTut::MyForm form; // Make sure to use the correct namespace (CalculatorTutorial)
//    Application::Run(% form);
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////#include "MyForm.h"
////using namespace System;
////using namespace System::Windows::Forms;
////[STAThredAttribute]
////void main(array<String^>^ args)
////{
////    Application::EnableVisualStyles();
////    Application::SetCompatibleTextRenderingDefault(false);
////    CalculatorTut::MyForm form;
////    Application::Run(% form);
////
////
