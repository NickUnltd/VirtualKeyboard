#pragma once
#pragma comment(lib, "user32.lib") 

#include <ctime>

namespace ECE458SecurityProjectRev2 {

	#include <ctype.h>
	#include <windows.h>

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	ref class FocuslessButton : Button {
	protected:
		bool ShowFocusCues() override{
			this->SetStyle(ControlStyles::Selectable, false);
			return false;
		}

	public:
		FocuslessButton(void) {
			this->SetStyle(ControlStyles::Selectable, false);
			this->UseVisualStyleBackColor = false;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
			this->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Control;
			this->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		}
	};

	/// <summary>
	/// Summary for KeyboardForm
	/// </summary>
	public ref class KeyboardForm : public System::Windows::Forms::Form
	{
	public:
		KeyboardForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			capsLockOn = false;
			shiftOn = false;
			cursorShown = true;
			int screenWidth = GetSystemMetrics(0);
			int screenHeight = GetSystemMetrics(1);
			srand(time(NULL));
			int randScreenWidth = rand() % (screenWidth - this -> Width);
			int randScreenHeight = rand() % (screenHeight - this -> Height);
			this -> Location = Point(randScreenWidth, randScreenHeight);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~KeyboardForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		FocuslessButton^  vKeySpace;
		FocuslessButton^  vKeySlash;
		FocuslessButton^  vKeyPeriod;
		FocuslessButton^  vKeyComma;
		FocuslessButton^  vKeyM;
		FocuslessButton^  vKeyN;
		FocuslessButton^  vKeyB;
		FocuslessButton^  vKeyV;
		FocuslessButton^  vKeyC;
		FocuslessButton^  vKeyX;
		FocuslessButton^  vKeyZ;
		FocuslessButton^  vKeyL;
		FocuslessButton^  vKeyK;
		FocuslessButton^  vKeyJ;
		FocuslessButton^  vKeyH;
		FocuslessButton^  vKeyG;
		FocuslessButton^  vKeyF;
		FocuslessButton^  vKeyD;
		FocuslessButton^  vKeyS;
		FocuslessButton^  vKeyA;
		FocuslessButton^  vKeyP;
		FocuslessButton^  vKeyO;
		FocuslessButton^  vKeyI;
		FocuslessButton^  vKeyU;
		FocuslessButton^  vKeyY;
		FocuslessButton^  vKeyT;
		FocuslessButton^  vKeyR;
		FocuslessButton^  vKeyE;
		FocuslessButton^  vKeyW;
		FocuslessButton^  vKeyQ;
		System::Windows::Forms::TextBox^  inputBox;
		FocuslessButton^  vKeyShiftL;
		FocuslessButton^  vKeyCaps;
		FocuslessButton^  vKeyShiftR;
		FocuslessButton^  vKeyEnter;
		FocuslessButton^  vKeyBackspace;
	
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		bool shiftOn;
		FocuslessButton^  vKey1;
		FocuslessButton^  vKey2;
		FocuslessButton^  vKey3;
		FocuslessButton^  vKey4;
		FocuslessButton^  vKey5;
		FocuslessButton^  vKey6;
		FocuslessButton^  vKey7;
		FocuslessButton^  vKey8;
		FocuslessButton^  vKey9;
		FocuslessButton^  vKey0;
		bool capsLockOn;
		bool cursorShown;
		String^ returnString;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->vKeySpace = (gcnew FocuslessButton());
			this->vKeySlash = (gcnew FocuslessButton());
			this->vKeyPeriod = (gcnew FocuslessButton());
			this->vKeyComma = (gcnew FocuslessButton());
			this->vKeyM = (gcnew FocuslessButton());
			this->vKeyN = (gcnew FocuslessButton());
			this->vKeyB = (gcnew FocuslessButton());
			this->vKeyV = (gcnew FocuslessButton());
			this->vKeyC = (gcnew FocuslessButton());
			this->vKeyX = (gcnew FocuslessButton());
			this->vKeyZ = (gcnew FocuslessButton());
			this->vKeyL = (gcnew FocuslessButton());
			this->vKeyK = (gcnew FocuslessButton());
			this->vKeyJ = (gcnew FocuslessButton());
			this->vKeyH = (gcnew FocuslessButton());
			this->vKeyG = (gcnew FocuslessButton());
			this->vKeyF = (gcnew FocuslessButton());
			this->vKeyD = (gcnew FocuslessButton());
			this->vKeyS = (gcnew FocuslessButton());
			this->vKeyA = (gcnew FocuslessButton());
			this->vKeyP = (gcnew FocuslessButton());
			this->vKeyO = (gcnew FocuslessButton());
			this->vKeyI = (gcnew FocuslessButton());
			this->vKeyU = (gcnew FocuslessButton());
			this->vKeyY = (gcnew FocuslessButton());
			this->vKeyT = (gcnew FocuslessButton());
			this->vKeyR = (gcnew FocuslessButton());
			this->vKeyE = (gcnew FocuslessButton());
			this->vKeyW = (gcnew FocuslessButton());
			this->vKeyQ = (gcnew FocuslessButton());
			this->inputBox = (gcnew System::Windows::Forms::TextBox());
			this->vKeyShiftL = (gcnew FocuslessButton());
			this->vKeyCaps = (gcnew FocuslessButton());
			this->vKeyShiftR = (gcnew FocuslessButton());
			this->vKeyEnter = (gcnew FocuslessButton());
			this->vKeyBackspace = (gcnew FocuslessButton());
			this->vKey1 = (gcnew FocuslessButton());
			this->vKey2 = (gcnew FocuslessButton());
			this->vKey3 = (gcnew FocuslessButton());
			this->vKey4 = (gcnew FocuslessButton());
			this->vKey5 = (gcnew FocuslessButton());
			this->vKey6 = (gcnew FocuslessButton());
			this->vKey7 = (gcnew FocuslessButton());
			this->vKey8 = (gcnew FocuslessButton());
			this->vKey9 = (gcnew FocuslessButton());
			this->vKey0 = (gcnew FocuslessButton());
			this->SuspendLayout();
			// 
			// vKeySpace
			// 
			this->vKeySpace->Location = System::Drawing::Point(296, 296);
			this->vKeySpace->Name = L"vKeySpace";
			this->vKeySpace->Size = System::Drawing::Size(215, 50);
			this->vKeySpace->TabIndex = 61;
			this->vKeySpace->Text = L"Space";
			this->vKeySpace->Click += gcnew System::EventHandler(this, &KeyboardForm::vKeySpace_Click);
			this->vKeySpace->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeySpace->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKeySlash
			// 
			this->vKeySlash->Location = System::Drawing::Point(626, 241);
			this->vKeySlash->Name = L"vKeySlash";
			this->vKeySlash->Size = System::Drawing::Size(50, 50);
			this->vKeySlash->TabIndex = 60;
			this->vKeySlash->Text = L"\?\r\n/";
			
			this->vKeySlash->Click += gcnew System::EventHandler(this, &KeyboardForm::vKeySlash_Click);
			this->vKeySlash->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeySlash->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKeyPeriod
			// 
			this->vKeyPeriod->Location = System::Drawing::Point(571, 241);
			this->vKeyPeriod->Name = L"vKeyPeriod";
			this->vKeyPeriod->Size = System::Drawing::Size(50, 50);
			this->vKeyPeriod->TabIndex = 59;
			this->vKeyPeriod->Text = L">\r\n.";
			
			this->vKeyPeriod->Click += gcnew System::EventHandler(this, &KeyboardForm::vKeyPeriod_Click);
			this->vKeyPeriod->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeyPeriod->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKeyComma
			// 
			this->vKeyComma->Location = System::Drawing::Point(516, 241);
			this->vKeyComma->Name = L"vKeyComma";
			this->vKeyComma->Size = System::Drawing::Size(50, 50);
			this->vKeyComma->TabIndex = 58;
			this->vKeyComma->Text = L"<\r\n,";
			
			this->vKeyComma->Click += gcnew System::EventHandler(this, &KeyboardForm::vKeyComma_Click);
			this->vKeyComma->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeyComma->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKeyM
			//
			this->vKeyM->Location = System::Drawing::Point(461, 241);
			this->vKeyM->Name = L"vKeyM";
			this->vKeyM->Size = System::Drawing::Size(50, 50);
			this->vKeyM->TabIndex = 57;
			this->vKeyM->Text = L"M";
			
			this->vKeyM->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			this->vKeyM->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeyM->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKeyN
			// 
			this->vKeyN->Location = System::Drawing::Point(406, 241);
			this->vKeyN->Name = L"vKeyN";
			this->vKeyN->Size = System::Drawing::Size(50, 50);
			this->vKeyN->TabIndex = 56;
			this->vKeyN->Text = L"N";
			
			this->vKeyN->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			this->vKeyN->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeyN->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKeyB
			// 
			this->vKeyB->Location = System::Drawing::Point(351, 241);
			this->vKeyB->Name = L"vKeyB";
			this->vKeyB->Size = System::Drawing::Size(50, 50);
			this->vKeyB->TabIndex = 55;
			this->vKeyB->Text = L"B";
			
			this->vKeyB->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			this->vKeyB->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeyB->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKeyV
			// 
			this->vKeyV->Location = System::Drawing::Point(296, 241);
			this->vKeyV->Name = L"vKeyV";
			this->vKeyV->Size = System::Drawing::Size(50, 50);
			this->vKeyV->TabIndex = 54;
			this->vKeyV->Text = L"V";
			
			this->vKeyV->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			this->vKeyV->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeyV->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKeyC
			// 
			this->vKeyC->Location = System::Drawing::Point(241, 241);
			this->vKeyC->Name = L"vKeyC";
			this->vKeyC->Size = System::Drawing::Size(50, 50);
			this->vKeyC->TabIndex = 53;
			this->vKeyC->Text = L"C";
			
			this->vKeyC->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			this->vKeyC->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeyC->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKeyX
			// 
			this->vKeyX->Location = System::Drawing::Point(186, 241);
			this->vKeyX->Name = L"vKeyX";
			this->vKeyX->Size = System::Drawing::Size(50, 50);
			this->vKeyX->TabIndex = 52;
			this->vKeyX->Text = L"X";
			
			this->vKeyX->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			this->vKeyX->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeyX->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKeyZ
			// 
			this->vKeyZ->Location = System::Drawing::Point(131, 241);
			this->vKeyZ->Name = L"vKeyZ";
			this->vKeyZ->Size = System::Drawing::Size(50, 50);
			this->vKeyZ->TabIndex = 51;
			this->vKeyZ->Text = L"Z";
			
			this->vKeyZ->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			this->vKeyZ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeyZ->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKeyL
			// 
			this->vKeyL->Location = System::Drawing::Point(598, 186);
			this->vKeyL->Name = L"vKeyL";
			this->vKeyL->Size = System::Drawing::Size(50, 50);
			this->vKeyL->TabIndex = 50;
			this->vKeyL->Text = L"L";
			
			this->vKeyL->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			this->vKeyL->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeyL->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKeyK
			// 
			this->vKeyK->Location = System::Drawing::Point(543, 186);
			this->vKeyK->Name = L"vKeyK";
			this->vKeyK->Size = System::Drawing::Size(50, 50);
			this->vKeyK->TabIndex = 49;
			this->vKeyK->Text = L"K";
			
			this->vKeyK->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			this->vKeyK->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeyK->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKeyJ
			// 
			this->vKeyJ->Location = System::Drawing::Point(488, 186);
			this->vKeyJ->Name = L"vKeyJ";
			this->vKeyJ->Size = System::Drawing::Size(50, 50);
			this->vKeyJ->TabIndex = 48;
			this->vKeyJ->Text = L"J";
			
			this->vKeyJ->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			this->vKeyJ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeyJ->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKeyH
			// 
			this->vKeyH->Location = System::Drawing::Point(433, 186);
			this->vKeyH->Name = L"vKeyH";
			this->vKeyH->Size = System::Drawing::Size(50, 50);
			this->vKeyH->TabIndex = 47;
			this->vKeyH->Text = L"H";
			
			this->vKeyH->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			this->vKeyH->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeyH->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKeyG
			// 
			this->vKeyG->Location = System::Drawing::Point(378, 186);
			this->vKeyG->Name = L"vKeyG";
			this->vKeyG->Size = System::Drawing::Size(50, 50);
			this->vKeyG->TabIndex = 46;
			this->vKeyG->Text = L"G";
			
			this->vKeyG->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			this->vKeyG->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeyG->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKeyF
			// 
			this->vKeyF->Location = System::Drawing::Point(323, 186);
			this->vKeyF->Name = L"vKeyF";
			this->vKeyF->Size = System::Drawing::Size(50, 50);
			this->vKeyF->TabIndex = 45;
			this->vKeyF->Text = L"F";
			
			this->vKeyF->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			this->vKeyF->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeyF->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKeyD
			// 
			this->vKeyD->Location = System::Drawing::Point(268, 186);
			this->vKeyD->Name = L"vKeyD";
			this->vKeyD->Size = System::Drawing::Size(50, 50);
			this->vKeyD->TabIndex = 44;
			this->vKeyD->Text = L"D";
			
			this->vKeyD->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			this->vKeyD->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeyD->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKeyS
			// 
			this->vKeyS->Location = System::Drawing::Point(213, 186);
			this->vKeyS->Name = L"vKeyS";
			this->vKeyS->Size = System::Drawing::Size(50, 50);
			this->vKeyS->TabIndex = 43;
			this->vKeyS->Text = L"S";
			
			this->vKeyS->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			this->vKeyS->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeyS->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKeyA
			// 
			this->vKeyA->Location = System::Drawing::Point(158, 186);
			this->vKeyA->Name = L"vKeyA";
			this->vKeyA->Size = System::Drawing::Size(50, 50);
			this->vKeyA->TabIndex = 42;
			this->vKeyA->Text = L"A";
			
			this->vKeyA->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			this->vKeyA->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeyA->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKeyP
			// 
			this->vKeyP->Location = System::Drawing::Point(626, 131);
			this->vKeyP->Name = L"vKeyP";
			this->vKeyP->Size = System::Drawing::Size(50, 50);
			this->vKeyP->TabIndex = 41;
			this->vKeyP->Text = L"P";
			
			this->vKeyP->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			this->vKeyP->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeyP->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKeyO
			// 
			this->vKeyO->Location = System::Drawing::Point(571, 131);
			this->vKeyO->Name = L"vKeyO";
			this->vKeyO->Size = System::Drawing::Size(50, 50);
			this->vKeyO->TabIndex = 40;
			this->vKeyO->Text = L"O";
			
			this->vKeyO->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			this->vKeyO->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeyO->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKeyI
			// 
			this->vKeyI->Location = System::Drawing::Point(516, 131);
			this->vKeyI->Name = L"vKeyI";
			this->vKeyI->Size = System::Drawing::Size(50, 50);
			this->vKeyI->TabIndex = 39;
			this->vKeyI->Text = L"I";
			
			this->vKeyI->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			this->vKeyI->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeyI->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKeyU
			// 
			this->vKeyU->Location = System::Drawing::Point(461, 131);
			this->vKeyU->Name = L"vKeyU";
			this->vKeyU->Size = System::Drawing::Size(50, 50);
			this->vKeyU->TabIndex = 38;
			this->vKeyU->Text = L"U";
			
			this->vKeyU->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			this->vKeyU->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeyU->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKeyY
			// 
			this->vKeyY->Location = System::Drawing::Point(406, 131);
			this->vKeyY->Name = L"vKeyY";
			this->vKeyY->Size = System::Drawing::Size(50, 50);
			this->vKeyY->TabIndex = 37;
			this->vKeyY->Text = L"Y";
			
			this->vKeyY->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			this->vKeyY->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeyY->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKeyT
			// 
			this->vKeyT->Location = System::Drawing::Point(351, 131);
			this->vKeyT->Name = L"vKeyT";
			this->vKeyT->Size = System::Drawing::Size(50, 50);
			this->vKeyT->TabIndex = 36;
			this->vKeyT->Text = L"T";
			
			this->vKeyT->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			this->vKeyT->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeyT->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKeyR
			// 
			this->vKeyR->Location = System::Drawing::Point(296, 131);
			this->vKeyR->Name = L"vKeyR";
			this->vKeyR->Size = System::Drawing::Size(50, 50);
			this->vKeyR->TabIndex = 35;
			this->vKeyR->Text = L"R";
			
			this->vKeyR->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			this->vKeyR->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeyR->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKeyE
			// 
			this->vKeyE->Location = System::Drawing::Point(241, 131);
			this->vKeyE->Name = L"vKeyE";
			this->vKeyE->Size = System::Drawing::Size(50, 50);
			this->vKeyE->TabIndex = 34;
			this->vKeyE->Text = L"E";
			
			this->vKeyE->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			this->vKeyE->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeyE->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKeyW
			// 
			this->vKeyW->Location = System::Drawing::Point(186, 131);
			this->vKeyW->Name = L"vKeyW";
			this->vKeyW->Size = System::Drawing::Size(50, 50);
			this->vKeyW->TabIndex = 33;
			this->vKeyW->Text = L"W";
			
			this->vKeyW->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			this->vKeyW->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeyW->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKeyQ
			// 
			this->vKeyQ->Location = System::Drawing::Point(131, 131);
			this->vKeyQ->Name = L"vKeyQ";
			this->vKeyQ->Size = System::Drawing::Size(50, 50);
			this->vKeyQ->TabIndex = 32;
			this->vKeyQ->Text = L"Q";
			
			this->vKeyQ->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			this->vKeyQ->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKeyQ->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// inputBox
			// 
			this->inputBox->BackColor = System::Drawing::Color::White;
			this->inputBox->Location = System::Drawing::Point(103, 21);
			this->inputBox->Name = L"inputBox";
			this->inputBox->ReadOnly = true;
			this->inputBox->Size = System::Drawing::Size(600, 20);
			this->inputBox->UseSystemPasswordChar = true;
			this->inputBox->TabIndex = 31;
			// 
			// vKeyShiftL
			// 
			this->vKeyShiftL->Location = System::Drawing::Point(46, 241);
			this->vKeyShiftL->Name = L"vKeyShiftL";
			this->vKeyShiftL->Size = System::Drawing::Size(80, 50);
			this->vKeyShiftL->TabIndex = 62;
			this->vKeyShiftL->Text = L"Shift";
			
			this->vKeyShiftL->Click += gcnew System::EventHandler(this, &KeyboardForm::ShiftKeyPressed);
			// 
			// vKeyCaps
			// 
			this->vKeyCaps->Location = System::Drawing::Point(46, 186);
			this->vKeyCaps->Name = L"vKeyCaps";
			this->vKeyCaps->Size = System::Drawing::Size(105, 50);
			this->vKeyCaps->TabIndex = 63;
			this->vKeyCaps->Text = L"CapsLock";
			
			this->vKeyCaps->Click += gcnew System::EventHandler(this, &KeyboardForm::CapsLockKeyPressed);
			// 
			// vKeyShiftR
			// 
			this->vKeyShiftR->Location = System::Drawing::Point(681, 241);
			this->vKeyShiftR->Name = L"vKeyShiftR";
			this->vKeyShiftR->Size = System::Drawing::Size(80, 50);
			this->vKeyShiftR->TabIndex = 64;
			this->vKeyShiftR->Text = L"Shift";
			
			this->vKeyShiftR->Click += gcnew System::EventHandler(this, &KeyboardForm::ShiftKeyPressed);
			// 
			// vKeyEnter
			// 
			this->vKeyEnter->Location = System::Drawing::Point(654, 186);
			this->vKeyEnter->Name = L"vKeyEnter";
			this->vKeyEnter->Size = System::Drawing::Size(106, 50);
			this->vKeyEnter->TabIndex = 65;
			this->vKeyEnter->Text = L"Enter";
			
			this->vKeyEnter->Click += gcnew System::EventHandler(this, &KeyboardForm::vKeyEnter_Click);
			// 
			// vKeyBackspace
			// 
			this->vKeyBackspace->Location = System::Drawing::Point(681, 131);
			this->vKeyBackspace->Name = L"vKeyBackspace";
			this->vKeyBackspace->Size = System::Drawing::Size(80, 50);
			this->vKeyBackspace->TabIndex = 66;
			this->vKeyBackspace->Text = L"Backspace";
			
			this->vKeyBackspace->Click += gcnew System::EventHandler(this, &KeyboardForm::vKeyBackspace_Click);
			// 
			// vKey1
			// 
			this->vKey1->Location = System::Drawing::Point(106, 76);
			this->vKey1->Name = L"vKey1";
			this->vKey1->Size = System::Drawing::Size(50, 50);
			this->vKey1->TabIndex = 67;
			this->vKey1->Text = L"!\r\n1";
			
			this->vKey1->Click += gcnew System::EventHandler(this, &KeyboardForm::vKey1_Click);
			this->vKey1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKey1->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKey2
			// 
			this->vKey2->Location = System::Drawing::Point(162, 76);
			this->vKey2->Name = L"vKey2";
			this->vKey2->Size = System::Drawing::Size(50, 50);
			this->vKey2->TabIndex = 68;
			this->vKey2->Text = L"@\r\n2";
			
			this->vKey2->Click += gcnew System::EventHandler(this, &KeyboardForm::vKey2_Click);
			this->vKey2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKey2->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKey3
			// 
			this->vKey3->Location = System::Drawing::Point(218, 76);
			this->vKey3->Name = L"vKey3";
			this->vKey3->Size = System::Drawing::Size(50, 50);
			this->vKey3->TabIndex = 69;
			this->vKey3->Text = L"#\r\n3";
			
			this->vKey3->Click += gcnew System::EventHandler(this, &KeyboardForm::vKey3_Click);
			this->vKey3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKey3->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKey4
			// 
			this->vKey4->Location = System::Drawing::Point(274, 76);
			this->vKey4->Name = L"vKey4";
			this->vKey4->Size = System::Drawing::Size(50, 50);
			this->vKey4->TabIndex = 70;
			this->vKey4->Text = L"$\r\n4";
			
			this->vKey4->Click += gcnew System::EventHandler(this, &KeyboardForm::vKey4_Click);
			this->vKey4->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKey4->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKey5
			// 
			this->vKey5->Location = System::Drawing::Point(330, 76);
			this->vKey5->Name = L"vKey5";
			this->vKey5->Size = System::Drawing::Size(50, 50);
			this->vKey5->TabIndex = 71;
			this->vKey5->Text = L"%\r\n5";
			
			this->vKey5->Click += gcnew System::EventHandler(this, &KeyboardForm::vKey5_Click);
			this->vKey5->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKey5->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKey6
			// 
			this->vKey6->Location = System::Drawing::Point(386, 76);
			this->vKey6->Name = L"vKey6";
			this->vKey6->Size = System::Drawing::Size(50, 50);
			this->vKey6->TabIndex = 72;
			this->vKey6->Text = L"^\r\n6";
			
			this->vKey6->Click += gcnew System::EventHandler(this, &KeyboardForm::vKey6_Click);
			this->vKey6->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKey6->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKey7
			// 
			this->vKey7->Location = System::Drawing::Point(442, 76);
			this->vKey7->Name = L"vKey7";
			this->vKey7->Size = System::Drawing::Size(50, 50);
			this->vKey7->TabIndex = 73;
			this->vKey7->Text = L"&&\r\n7";
			
			this->vKey7->Click += gcnew System::EventHandler(this, &KeyboardForm::vKey7_Click);
			this->vKey7->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKey7->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKey8
			// 
			this->vKey8->Location = System::Drawing::Point(498, 76);
			this->vKey8->Name = L"vKey8";
			this->vKey8->Size = System::Drawing::Size(50, 50);
			this->vKey8->TabIndex = 74;
			this->vKey8->Text = L"*\r\n8";
			
			this->vKey8->Click += gcnew System::EventHandler(this, &KeyboardForm::vKey8_Click);
			this->vKey8->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKey8->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKey9
			// 
			this->vKey9->Location = System::Drawing::Point(554, 76);
			this->vKey9->Name = L"vKey9";
			this->vKey9->Size = System::Drawing::Size(50, 50);
			this->vKey9->TabIndex = 75;
			this->vKey9->Text = L"(\r\n9";
			
			this->vKey9->Click += gcnew System::EventHandler(this, &KeyboardForm::vKey9_Click);
			this->vKey9->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKey9->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// vKey0
			// 
			this->vKey0->Location = System::Drawing::Point(610, 76);
			this->vKey0->Name = L"vKey0";
			this->vKey0->Size = System::Drawing::Size(50, 50);
			this->vKey0->TabIndex = 76;
			this->vKey0->Text = L")\r\n0";
			
			this->vKey0->Click += gcnew System::EventHandler(this, &KeyboardForm::vKey0_Click);
			this->vKey0->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyboardForm::Key_MouseDown);
			this->vKey0->MouseLeave += gcnew System::EventHandler(this, &KeyboardForm::Key_MouseLeave);
			// 
			// KeyboardForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(784, 362);
			this->Controls->Add(this->vKey0);
			this->Controls->Add(this->vKey9);
			this->Controls->Add(this->vKey8);
			this->Controls->Add(this->vKey7);
			this->Controls->Add(this->vKey6);
			this->Controls->Add(this->vKey5);
			this->Controls->Add(this->vKey4);
			this->Controls->Add(this->vKey3);
			this->Controls->Add(this->vKey2);
			this->Controls->Add(this->vKey1);
			this->Controls->Add(this->vKeyBackspace);
			this->Controls->Add(this->vKeyEnter);
			this->Controls->Add(this->vKeyShiftR);
			this->Controls->Add(this->vKeyCaps);
			this->Controls->Add(this->vKeyShiftL);
			this->Controls->Add(this->vKeySpace);
			this->Controls->Add(this->vKeySlash);
			this->Controls->Add(this->vKeyPeriod);
			this->Controls->Add(this->vKeyComma);
			this->Controls->Add(this->vKeyM);
			this->Controls->Add(this->vKeyN);
			this->Controls->Add(this->vKeyB);
			this->Controls->Add(this->vKeyV);
			this->Controls->Add(this->vKeyC);
			this->Controls->Add(this->vKeyX);
			this->Controls->Add(this->vKeyZ);
			this->Controls->Add(this->vKeyL);
			this->Controls->Add(this->vKeyK);
			this->Controls->Add(this->vKeyJ);
			this->Controls->Add(this->vKeyH);
			this->Controls->Add(this->vKeyG);
			this->Controls->Add(this->vKeyF);
			this->Controls->Add(this->vKeyD);
			this->Controls->Add(this->vKeyS);
			this->Controls->Add(this->vKeyA);
			this->Controls->Add(this->vKeyP);
			this->Controls->Add(this->vKeyO);
			this->Controls->Add(this->vKeyI);
			this->Controls->Add(this->vKeyU);
			this->Controls->Add(this->vKeyY);
			this->Controls->Add(this->vKeyT);
			this->Controls->Add(this->vKeyR);
			this->Controls->Add(this->vKeyE);
			this->Controls->Add(this->vKeyW);
			this->Controls->Add(this->vKeyQ);
			this->Controls->Add(this->inputBox);
			this->Name = L"KeyboardForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"KeyboardForm";
			this->ResumeLayout(false);
			this->PerformLayout();

			returnString = "";
		}
#pragma endregion
	private: 
		System::Void LetterKey_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void vKey1_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void vKey2_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void vKey3_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void vKey4_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void vKey5_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void vKey6_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void vKey7_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void vKey8_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void vKey9_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void vKey0_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void vKeyComma_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void vKeyPeriod_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void vKeySlash_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void vKeySpace_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void ShiftKeyPressed(System::Object^  sender, System::EventArgs^  e);
		System::Void CapsLockKeyPressed(System::Object^  sender, System::EventArgs^  e);
		System::Void vKeyBackspace_Click(System::Object^  sender, System::EventArgs^  e);
		System::Void UpdateKeyAppearances();
		System::Void AppendLetterToTextbox(String^ characterToAppend);
		System::Void AppendNumberSymbolToTextbox(char upperToAppend, char lowerToAppend);
		System::Void RevealCursor(clock_t startTime);
		System::Void Key_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		System::Void Key_MouseLeave(System::Object^  sender, System::EventArgs^  e);
		System::Void CustomShowMouse();
		System::Void CustomHideMouse();
		System::Void vKeyEnter_Click(System::Object^  sender, System::EventArgs^  e);

	public:
		String^ getReturnString();
	};
}


//Ideas:
//-Invisible cursor on click to prevent screen capture (TODO: need to also make boxes not color) (see properties of b button)


//Things we have done:
//-Hides cursor for short time during / after click
//-No color indications for what key is selected (degrades user experience, but can get feedback from mouse disappearing)
//-Hides letters as stars (trivial)
//-Random window location to avoid mouse recording
//-