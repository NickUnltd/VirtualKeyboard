#include "KeyboardForm.h"
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace ECE458SecurityProjectRev2;

[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ECE458SecurityProjectRev2::MainForm form;
	Application::Run(%form);
}

System::Void MainForm::passField_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	passField->Text = KeyboardForm::LaunchVirtualKeyboard();
}

System::Void MainForm::togglePass_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	bool state = passField->UseSystemPasswordChar;
	passField->UseSystemPasswordChar = !state;
}
