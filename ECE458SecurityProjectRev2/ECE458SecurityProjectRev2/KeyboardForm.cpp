#include "KeyboardForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace ECE458SecurityProjectRev2;

System::Void KeyboardForm::LetterKey_Click(System::Object^  sender, System::EventArgs^  e) {
	FocuslessButton^ toGet = safe_cast<FocuslessButton ^>(sender);
	AppendLetterToTextbox(toGet->Text->ToLower());
}
System::Void KeyboardForm::vKey1_Click(System::Object^  sender, System::EventArgs^  e) {
	AppendNumberSymbolToTextbox('!', '1');
}
System::Void KeyboardForm::vKey2_Click(System::Object^  sender, System::EventArgs^  e) {
	AppendNumberSymbolToTextbox('@', '2');
}
System::Void KeyboardForm::vKey3_Click(System::Object^  sender, System::EventArgs^  e) {
	AppendNumberSymbolToTextbox('#', '3');
}
System::Void KeyboardForm::vKey4_Click(System::Object^  sender, System::EventArgs^  e) {
	AppendNumberSymbolToTextbox('$', '4');
}
System::Void KeyboardForm::vKey5_Click(System::Object^  sender, System::EventArgs^  e) {
	AppendNumberSymbolToTextbox('%', '5');
}
System::Void KeyboardForm::vKey6_Click(System::Object^  sender, System::EventArgs^  e) {
	AppendNumberSymbolToTextbox('^', '6');
}
System::Void KeyboardForm::vKey7_Click(System::Object^  sender, System::EventArgs^  e) {
	AppendNumberSymbolToTextbox('&', '7');
}
System::Void KeyboardForm::vKey8_Click(System::Object^  sender, System::EventArgs^  e) {
	AppendNumberSymbolToTextbox('*', '8');
}
System::Void KeyboardForm::vKey9_Click(System::Object^  sender, System::EventArgs^  e) {
	AppendNumberSymbolToTextbox('(', '9');
}
System::Void KeyboardForm::vKey0_Click(System::Object^  sender, System::EventArgs^  e) {
	AppendNumberSymbolToTextbox(')', '0');
}
System::Void KeyboardForm::vKeyComma_Click(System::Object^  sender, System::EventArgs^  e) {
	AppendNumberSymbolToTextbox('<', ',');
}
System::Void KeyboardForm::vKeyPeriod_Click(System::Object^  sender, System::EventArgs^  e) {
	AppendNumberSymbolToTextbox('>', '.');
}
System::Void KeyboardForm::vKeySlash_Click(System::Object^  sender, System::EventArgs^  e) {
	AppendNumberSymbolToTextbox('?', '/');
}
System::Void KeyboardForm::vKeySpace_Click(System::Object^  sender, System::EventArgs^  e) {
	clock_t startTime = clock();
	inputBox->AppendText(" ");
	RevealCursor(startTime);
}
System::Void KeyboardForm::ShiftKeyPressed(System::Object^  sender, System::EventArgs^  e) {
	shiftOn = !shiftOn;
	UpdateKeyAppearances();
}
System::Void KeyboardForm::CapsLockKeyPressed(System::Object^  sender, System::EventArgs^  e) {
	capsLockOn = !capsLockOn;
	UpdateKeyAppearances();
}
System::Void KeyboardForm::vKeyBackspace_Click(System::Object^  sender, System::EventArgs^  e) {
	if (inputBox->Text->Length > 0) {
		inputBox->Text = inputBox->Text->Substring(0, inputBox->Text->Length - 1);
	}
}
System::Void KeyboardForm::UpdateKeyAppearances() {
	//Update key appearances based on whether capslock / shift is enabled.
	if (shiftOn) {
		//Change background color.
		vKeyShiftL->BackColor = SystemColors::Highlight;
		vKeyShiftR->BackColor = SystemColors::Highlight;
	}
	else {
		vKeyShiftL->BackColor = SystemColors::Control;
		vKeyShiftR->BackColor = SystemColors::Control;
	}
	if (capsLockOn) {
		vKeyCaps->BackColor = SystemColors::Highlight;
	}
	else {
		vKeyCaps->BackColor = SystemColors::Control;
	}

}
System::Void KeyboardForm::AppendLetterToTextbox(String^ characterToAppend) {
	clock_t startTime = clock();

	if (capsLockOn)
	{
		characterToAppend = characterToAppend->ToUpper();
	}
	if (shiftOn) {
		if (characterToAppend->Equals(characterToAppend->ToUpper())) {
			characterToAppend = characterToAppend->ToLower();
		}
		else {
			characterToAppend = characterToAppend->ToUpper();
		}
		shiftOn = false;
		UpdateKeyAppearances();
	}
	inputBox->AppendText(characterToAppend);

	RevealCursor(startTime);
}
System::Void KeyboardForm::AppendNumberSymbolToTextbox(char upperToAppend, char lowerToAppend) {
	clock_t startTime = clock();

	if (shiftOn) {
		shiftOn = false;
		UpdateKeyAppearances();
		inputBox->AppendText(gcnew String(upperToAppend, 1));
	}
	else {
		inputBox->AppendText(gcnew String(lowerToAppend, 1));
	}

	RevealCursor(startTime);
}
System::Void KeyboardForm::RevealCursor(clock_t startTime) {
	clock_t endTime = clock();
	while ((double)(endTime - startTime) < (double)CLOCKS_PER_SEC / 4) {
		endTime = clock();
		//Hurry up and wait.
	}
	CustomShowMouse();
}
System::Void KeyboardForm::Key_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	CustomHideMouse();
}
System::Void KeyboardForm::Key_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	if (!cursorShown) {
		CustomShowMouse();
	}
}
System::Void KeyboardForm::CustomShowMouse() {
	if (!cursorShown) {
		Cursor->Show();
		cursorShown = true;
	}
}
System::Void KeyboardForm::CustomHideMouse() {
	if (cursorShown) {
		Cursor->Hide();
		cursorShown = false;
	}
}
String^ KeyboardForm::getReturnString() {
	return returnString;
}
System::Void KeyboardForm::vKeyEnter_Click(System::Object^  sender, System::EventArgs^  e) {
	returnString = inputBox->Text;
	this->DialogResult = System::Windows::Forms::DialogResult::OK;
	this->Close();
}