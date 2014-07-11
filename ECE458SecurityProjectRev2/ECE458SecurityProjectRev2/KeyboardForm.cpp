#include "KeyboardForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ECE458SecurityProjectRev2::KeyboardForm form;
	Application::Run(%form);
}