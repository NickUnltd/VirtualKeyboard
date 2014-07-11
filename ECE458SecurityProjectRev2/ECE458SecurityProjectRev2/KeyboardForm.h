#pragma once

namespace ECE458SecurityProjectRev2 {

	#include <ctype.h>

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
			//
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
	private: System::Windows::Forms::Button^  vKeySpace;
	protected: 
	private: System::Windows::Forms::Button^  vKeySlash;
	private: System::Windows::Forms::Button^  vKeyPeriod;
	private: System::Windows::Forms::Button^  vKeyComma;
	private: System::Windows::Forms::Button^  vKeyM;
	private: System::Windows::Forms::Button^  vKeyN;
	private: System::Windows::Forms::Button^  vKeyB;
	private: System::Windows::Forms::Button^  vKeyV;
	private: System::Windows::Forms::Button^  vKeyC;
	private: System::Windows::Forms::Button^  vKeyX;
	private: System::Windows::Forms::Button^  vKeyZ;
	private: System::Windows::Forms::Button^  vKeyL;
	private: System::Windows::Forms::Button^  vKeyK;
	private: System::Windows::Forms::Button^  vKeyJ;
	private: System::Windows::Forms::Button^  vKeyH;
	private: System::Windows::Forms::Button^  vKeyG;
	private: System::Windows::Forms::Button^  vKeyF;
	private: System::Windows::Forms::Button^  vKeyD;
	private: System::Windows::Forms::Button^  vKeyS;
	private: System::Windows::Forms::Button^  vKeyA;
	private: System::Windows::Forms::Button^  vKeyP;
	private: System::Windows::Forms::Button^  vKeyO;
	private: System::Windows::Forms::Button^  vKeyI;
	private: System::Windows::Forms::Button^  vKeyU;
	private: System::Windows::Forms::Button^  vKeyY;
	private: System::Windows::Forms::Button^  vKeyT;
	private: System::Windows::Forms::Button^  vKeyR;
	private: System::Windows::Forms::Button^  vKeyE;
	private: System::Windows::Forms::Button^  vKeyW;
	private: System::Windows::Forms::Button^  vKeyQ;
	private: System::Windows::Forms::TextBox^  inputBox;
	private: System::Windows::Forms::Button^  vKeyShiftL;
	private: System::Windows::Forms::Button^  vKeyCaps;
	private: System::Windows::Forms::Button^  vKeyShiftR;
	private: System::Windows::Forms::Button^  vKeyEnter;
	private: System::Windows::Forms::Button^  vKeyBackspace;
	
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		bool shiftOn;
	private: System::Windows::Forms::Button^  vKey1;
	private: System::Windows::Forms::Button^  vKey2;
	private: System::Windows::Forms::Button^  vKey3;
	private: System::Windows::Forms::Button^  vKey4;
	private: System::Windows::Forms::Button^  vKey5;
	private: System::Windows::Forms::Button^  vKey6;
	private: System::Windows::Forms::Button^  vKey7;
	private: System::Windows::Forms::Button^  vKey8;
	private: System::Windows::Forms::Button^  vKey9;
	private: System::Windows::Forms::Button^  vKey0;
			 bool capsLockOn;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->vKeySpace = (gcnew System::Windows::Forms::Button());
			this->vKeySlash = (gcnew System::Windows::Forms::Button());
			this->vKeyPeriod = (gcnew System::Windows::Forms::Button());
			this->vKeyComma = (gcnew System::Windows::Forms::Button());
			this->vKeyM = (gcnew System::Windows::Forms::Button());
			this->vKeyN = (gcnew System::Windows::Forms::Button());
			this->vKeyB = (gcnew System::Windows::Forms::Button());
			this->vKeyV = (gcnew System::Windows::Forms::Button());
			this->vKeyC = (gcnew System::Windows::Forms::Button());
			this->vKeyX = (gcnew System::Windows::Forms::Button());
			this->vKeyZ = (gcnew System::Windows::Forms::Button());
			this->vKeyL = (gcnew System::Windows::Forms::Button());
			this->vKeyK = (gcnew System::Windows::Forms::Button());
			this->vKeyJ = (gcnew System::Windows::Forms::Button());
			this->vKeyH = (gcnew System::Windows::Forms::Button());
			this->vKeyG = (gcnew System::Windows::Forms::Button());
			this->vKeyF = (gcnew System::Windows::Forms::Button());
			this->vKeyD = (gcnew System::Windows::Forms::Button());
			this->vKeyS = (gcnew System::Windows::Forms::Button());
			this->vKeyA = (gcnew System::Windows::Forms::Button());
			this->vKeyP = (gcnew System::Windows::Forms::Button());
			this->vKeyO = (gcnew System::Windows::Forms::Button());
			this->vKeyI = (gcnew System::Windows::Forms::Button());
			this->vKeyU = (gcnew System::Windows::Forms::Button());
			this->vKeyY = (gcnew System::Windows::Forms::Button());
			this->vKeyT = (gcnew System::Windows::Forms::Button());
			this->vKeyR = (gcnew System::Windows::Forms::Button());
			this->vKeyE = (gcnew System::Windows::Forms::Button());
			this->vKeyW = (gcnew System::Windows::Forms::Button());
			this->vKeyQ = (gcnew System::Windows::Forms::Button());
			this->inputBox = (gcnew System::Windows::Forms::TextBox());
			this->vKeyShiftL = (gcnew System::Windows::Forms::Button());
			this->vKeyCaps = (gcnew System::Windows::Forms::Button());
			this->vKeyShiftR = (gcnew System::Windows::Forms::Button());
			this->vKeyEnter = (gcnew System::Windows::Forms::Button());
			this->vKeyBackspace = (gcnew System::Windows::Forms::Button());
			this->vKey1 = (gcnew System::Windows::Forms::Button());
			this->vKey2 = (gcnew System::Windows::Forms::Button());
			this->vKey3 = (gcnew System::Windows::Forms::Button());
			this->vKey4 = (gcnew System::Windows::Forms::Button());
			this->vKey5 = (gcnew System::Windows::Forms::Button());
			this->vKey6 = (gcnew System::Windows::Forms::Button());
			this->vKey7 = (gcnew System::Windows::Forms::Button());
			this->vKey8 = (gcnew System::Windows::Forms::Button());
			this->vKey9 = (gcnew System::Windows::Forms::Button());
			this->vKey0 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// vKeySpace
			// 
			this->vKeySpace->Location = System::Drawing::Point(296, 296);
			this->vKeySpace->Name = L"vKeySpace";
			this->vKeySpace->Size = System::Drawing::Size(215, 50);
			this->vKeySpace->TabIndex = 61;
			this->vKeySpace->Text = L"Space";
			this->vKeySpace->UseVisualStyleBackColor = true;
			this->vKeySpace->Click += gcnew System::EventHandler(this, &KeyboardForm::vKeySpace_Click);
			// 
			// vKeySlash
			// 
			this->vKeySlash->Location = System::Drawing::Point(626, 241);
			this->vKeySlash->Name = L"vKeySlash";
			this->vKeySlash->Size = System::Drawing::Size(50, 50);
			this->vKeySlash->TabIndex = 60;
			this->vKeySlash->Text = L"\?\r\n/";
			this->vKeySlash->UseVisualStyleBackColor = true;
			this->vKeySlash->Click += gcnew System::EventHandler(this, &KeyboardForm::vKeySlash_Click);
			// 
			// vKeyPeriod
			// 
			this->vKeyPeriod->Location = System::Drawing::Point(571, 241);
			this->vKeyPeriod->Name = L"vKeyPeriod";
			this->vKeyPeriod->Size = System::Drawing::Size(50, 50);
			this->vKeyPeriod->TabIndex = 59;
			this->vKeyPeriod->Text = L">\r\n.";
			this->vKeyPeriod->UseVisualStyleBackColor = true;
			this->vKeyPeriod->Click += gcnew System::EventHandler(this, &KeyboardForm::vKeyPeriod_Click);
			// 
			// vKeyComma
			// 
			this->vKeyComma->Location = System::Drawing::Point(516, 241);
			this->vKeyComma->Name = L"vKeyComma";
			this->vKeyComma->Size = System::Drawing::Size(50, 50);
			this->vKeyComma->TabIndex = 58;
			this->vKeyComma->Text = L"<\r\n,";
			this->vKeyComma->UseVisualStyleBackColor = true;
			this->vKeyComma->Click += gcnew System::EventHandler(this, &KeyboardForm::vKeyComma_Click);
			// 
			// vKeyM
			// 
			this->vKeyM->Location = System::Drawing::Point(461, 241);
			this->vKeyM->Name = L"vKeyM";
			this->vKeyM->Size = System::Drawing::Size(50, 50);
			this->vKeyM->TabIndex = 57;
			this->vKeyM->Text = L"M";
			this->vKeyM->UseVisualStyleBackColor = true;
			this->vKeyM->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			// 
			// vKeyN
			// 
			this->vKeyN->Location = System::Drawing::Point(406, 241);
			this->vKeyN->Name = L"vKeyN";
			this->vKeyN->Size = System::Drawing::Size(50, 50);
			this->vKeyN->TabIndex = 56;
			this->vKeyN->Text = L"N";
			this->vKeyN->UseVisualStyleBackColor = true;
			this->vKeyN->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			// 
			// vKeyB
			// 
			this->vKeyB->Location = System::Drawing::Point(351, 241);
			this->vKeyB->Name = L"vKeyB";
			this->vKeyB->Size = System::Drawing::Size(50, 50);
			this->vKeyB->TabIndex = 55;
			this->vKeyB->Text = L"B";
			this->vKeyB->UseVisualStyleBackColor = true;
			this->vKeyB->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			// 
			// vKeyV
			// 
			this->vKeyV->Location = System::Drawing::Point(296, 241);
			this->vKeyV->Name = L"vKeyV";
			this->vKeyV->Size = System::Drawing::Size(50, 50);
			this->vKeyV->TabIndex = 54;
			this->vKeyV->Text = L"V";
			this->vKeyV->UseVisualStyleBackColor = true;
			this->vKeyV->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			// 
			// vKeyC
			// 
			this->vKeyC->Location = System::Drawing::Point(241, 241);
			this->vKeyC->Name = L"vKeyC";
			this->vKeyC->Size = System::Drawing::Size(50, 50);
			this->vKeyC->TabIndex = 53;
			this->vKeyC->Text = L"C";
			this->vKeyC->UseVisualStyleBackColor = true;
			this->vKeyC->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			// 
			// vKeyX
			// 
			this->vKeyX->Location = System::Drawing::Point(186, 241);
			this->vKeyX->Name = L"vKeyX";
			this->vKeyX->Size = System::Drawing::Size(50, 50);
			this->vKeyX->TabIndex = 52;
			this->vKeyX->Text = L"X";
			this->vKeyX->UseVisualStyleBackColor = true;
			this->vKeyX->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			// 
			// vKeyZ
			// 
			this->vKeyZ->Location = System::Drawing::Point(131, 241);
			this->vKeyZ->Name = L"vKeyZ";
			this->vKeyZ->Size = System::Drawing::Size(50, 50);
			this->vKeyZ->TabIndex = 51;
			this->vKeyZ->Text = L"Z";
			this->vKeyZ->UseVisualStyleBackColor = true;
			this->vKeyZ->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			// 
			// vKeyL
			// 
			this->vKeyL->Location = System::Drawing::Point(598, 186);
			this->vKeyL->Name = L"vKeyL";
			this->vKeyL->Size = System::Drawing::Size(50, 50);
			this->vKeyL->TabIndex = 50;
			this->vKeyL->Text = L"L";
			this->vKeyL->UseVisualStyleBackColor = true;
			this->vKeyL->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			// 
			// vKeyK
			// 
			this->vKeyK->Location = System::Drawing::Point(543, 186);
			this->vKeyK->Name = L"vKeyK";
			this->vKeyK->Size = System::Drawing::Size(50, 50);
			this->vKeyK->TabIndex = 49;
			this->vKeyK->Text = L"K";
			this->vKeyK->UseVisualStyleBackColor = true;
			this->vKeyK->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			// 
			// vKeyJ
			// 
			this->vKeyJ->Location = System::Drawing::Point(488, 186);
			this->vKeyJ->Name = L"vKeyJ";
			this->vKeyJ->Size = System::Drawing::Size(50, 50);
			this->vKeyJ->TabIndex = 48;
			this->vKeyJ->Text = L"J";
			this->vKeyJ->UseVisualStyleBackColor = true;
			this->vKeyJ->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			// 
			// vKeyH
			// 
			this->vKeyH->Location = System::Drawing::Point(433, 186);
			this->vKeyH->Name = L"vKeyH";
			this->vKeyH->Size = System::Drawing::Size(50, 50);
			this->vKeyH->TabIndex = 47;
			this->vKeyH->Text = L"H";
			this->vKeyH->UseVisualStyleBackColor = true;
			this->vKeyH->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			// 
			// vKeyG
			// 
			this->vKeyG->Location = System::Drawing::Point(378, 186);
			this->vKeyG->Name = L"vKeyG";
			this->vKeyG->Size = System::Drawing::Size(50, 50);
			this->vKeyG->TabIndex = 46;
			this->vKeyG->Text = L"G";
			this->vKeyG->UseVisualStyleBackColor = true;
			this->vKeyG->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			// 
			// vKeyF
			// 
			this->vKeyF->Location = System::Drawing::Point(323, 186);
			this->vKeyF->Name = L"vKeyF";
			this->vKeyF->Size = System::Drawing::Size(50, 50);
			this->vKeyF->TabIndex = 45;
			this->vKeyF->Text = L"F";
			this->vKeyF->UseVisualStyleBackColor = true;
			this->vKeyF->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			// 
			// vKeyD
			// 
			this->vKeyD->Location = System::Drawing::Point(268, 186);
			this->vKeyD->Name = L"vKeyD";
			this->vKeyD->Size = System::Drawing::Size(50, 50);
			this->vKeyD->TabIndex = 44;
			this->vKeyD->Text = L"D";
			this->vKeyD->UseVisualStyleBackColor = true;
			this->vKeyD->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			// 
			// vKeyS
			// 
			this->vKeyS->Location = System::Drawing::Point(213, 186);
			this->vKeyS->Name = L"vKeyS";
			this->vKeyS->Size = System::Drawing::Size(50, 50);
			this->vKeyS->TabIndex = 43;
			this->vKeyS->Text = L"S";
			this->vKeyS->UseVisualStyleBackColor = true;
			this->vKeyS->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			// 
			// vKeyA
			// 
			this->vKeyA->Location = System::Drawing::Point(158, 186);
			this->vKeyA->Name = L"vKeyA";
			this->vKeyA->Size = System::Drawing::Size(50, 50);
			this->vKeyA->TabIndex = 42;
			this->vKeyA->Text = L"A";
			this->vKeyA->UseVisualStyleBackColor = true;
			this->vKeyA->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			// 
			// vKeyP
			// 
			this->vKeyP->Location = System::Drawing::Point(626, 131);
			this->vKeyP->Name = L"vKeyP";
			this->vKeyP->Size = System::Drawing::Size(50, 50);
			this->vKeyP->TabIndex = 41;
			this->vKeyP->Text = L"P";
			this->vKeyP->UseVisualStyleBackColor = true;
			this->vKeyP->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			// 
			// vKeyO
			// 
			this->vKeyO->Location = System::Drawing::Point(571, 131);
			this->vKeyO->Name = L"vKeyO";
			this->vKeyO->Size = System::Drawing::Size(50, 50);
			this->vKeyO->TabIndex = 40;
			this->vKeyO->Text = L"O";
			this->vKeyO->UseVisualStyleBackColor = true;
			this->vKeyO->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			// 
			// vKeyI
			// 
			this->vKeyI->Location = System::Drawing::Point(516, 131);
			this->vKeyI->Name = L"vKeyI";
			this->vKeyI->Size = System::Drawing::Size(50, 50);
			this->vKeyI->TabIndex = 39;
			this->vKeyI->Text = L"I";
			this->vKeyI->UseVisualStyleBackColor = true;
			this->vKeyI->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			// 
			// vKeyU
			// 
			this->vKeyU->Location = System::Drawing::Point(461, 131);
			this->vKeyU->Name = L"vKeyU";
			this->vKeyU->Size = System::Drawing::Size(50, 50);
			this->vKeyU->TabIndex = 38;
			this->vKeyU->Text = L"U";
			this->vKeyU->UseVisualStyleBackColor = true;
			this->vKeyU->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			// 
			// vKeyY
			// 
			this->vKeyY->Location = System::Drawing::Point(406, 131);
			this->vKeyY->Name = L"vKeyY";
			this->vKeyY->Size = System::Drawing::Size(50, 50);
			this->vKeyY->TabIndex = 37;
			this->vKeyY->Text = L"Y";
			this->vKeyY->UseVisualStyleBackColor = true;
			this->vKeyY->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			// 
			// vKeyT
			// 
			this->vKeyT->Location = System::Drawing::Point(351, 131);
			this->vKeyT->Name = L"vKeyT";
			this->vKeyT->Size = System::Drawing::Size(50, 50);
			this->vKeyT->TabIndex = 36;
			this->vKeyT->Text = L"T";
			this->vKeyT->UseVisualStyleBackColor = true;
			this->vKeyT->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			// 
			// vKeyR
			// 
			this->vKeyR->Location = System::Drawing::Point(296, 131);
			this->vKeyR->Name = L"vKeyR";
			this->vKeyR->Size = System::Drawing::Size(50, 50);
			this->vKeyR->TabIndex = 35;
			this->vKeyR->Text = L"R";
			this->vKeyR->UseVisualStyleBackColor = true;
			this->vKeyR->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			// 
			// vKeyE
			// 
			this->vKeyE->Location = System::Drawing::Point(241, 131);
			this->vKeyE->Name = L"vKeyE";
			this->vKeyE->Size = System::Drawing::Size(50, 50);
			this->vKeyE->TabIndex = 34;
			this->vKeyE->Text = L"E";
			this->vKeyE->UseVisualStyleBackColor = true;
			this->vKeyE->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			// 
			// vKeyW
			// 
			this->vKeyW->Location = System::Drawing::Point(186, 131);
			this->vKeyW->Name = L"vKeyW";
			this->vKeyW->Size = System::Drawing::Size(50, 50);
			this->vKeyW->TabIndex = 33;
			this->vKeyW->Text = L"W";
			this->vKeyW->UseVisualStyleBackColor = true;
			this->vKeyW->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			// 
			// vKeyQ
			// 
			this->vKeyQ->Location = System::Drawing::Point(131, 131);
			this->vKeyQ->Name = L"vKeyQ";
			this->vKeyQ->Size = System::Drawing::Size(50, 50);
			this->vKeyQ->TabIndex = 32;
			this->vKeyQ->Text = L"Q";
			this->vKeyQ->UseVisualStyleBackColor = true;
			this->vKeyQ->Click += gcnew System::EventHandler(this, &KeyboardForm::LetterKey_Click);
			// 
			// inputBox
			// 
			this->inputBox->BackColor = System::Drawing::Color::White;
			this->inputBox->Location = System::Drawing::Point(103, 21);
			this->inputBox->Name = L"inputBox";
			this->inputBox->ReadOnly = true;
			this->inputBox->Size = System::Drawing::Size(600, 20);
			this->inputBox->TabIndex = 31;
			// 
			// vKeyShiftL
			// 
			this->vKeyShiftL->Location = System::Drawing::Point(46, 241);
			this->vKeyShiftL->Name = L"vKeyShiftL";
			this->vKeyShiftL->Size = System::Drawing::Size(80, 50);
			this->vKeyShiftL->TabIndex = 62;
			this->vKeyShiftL->Text = L"Shift";
			this->vKeyShiftL->UseVisualStyleBackColor = true;
			this->vKeyShiftL->Click += gcnew System::EventHandler(this, &KeyboardForm::ShiftKeyPressed);
			// 
			// vKeyCaps
			// 
			this->vKeyCaps->Location = System::Drawing::Point(46, 186);
			this->vKeyCaps->Name = L"vKeyCaps";
			this->vKeyCaps->Size = System::Drawing::Size(105, 50);
			this->vKeyCaps->TabIndex = 63;
			this->vKeyCaps->Text = L"CRUISE CONTROL FOR COOL";
			this->vKeyCaps->UseVisualStyleBackColor = true;
			this->vKeyCaps->Click += gcnew System::EventHandler(this, &KeyboardForm::CapsLockKeyPressed);
			// 
			// vKeyShiftR
			// 
			this->vKeyShiftR->Location = System::Drawing::Point(681, 241);
			this->vKeyShiftR->Name = L"vKeyShiftR";
			this->vKeyShiftR->Size = System::Drawing::Size(80, 50);
			this->vKeyShiftR->TabIndex = 64;
			this->vKeyShiftR->Text = L"Shift";
			this->vKeyShiftR->UseVisualStyleBackColor = true;
			this->vKeyShiftR->Click += gcnew System::EventHandler(this, &KeyboardForm::ShiftKeyPressed);
			// 
			// vKeyEnter
			// 
			this->vKeyEnter->Location = System::Drawing::Point(654, 186);
			this->vKeyEnter->Name = L"vKeyEnter";
			this->vKeyEnter->Size = System::Drawing::Size(106, 50);
			this->vKeyEnter->TabIndex = 65;
			this->vKeyEnter->Text = L"Enter";
			this->vKeyEnter->UseVisualStyleBackColor = true;
			this->vKeyEnter->Click += gcnew System::EventHandler(this, &KeyboardForm::vKeyEnter_Click);
			// 
			// vKeyBackspace
			// 
			this->vKeyBackspace->Location = System::Drawing::Point(681, 131);
			this->vKeyBackspace->Name = L"vKeyBackspace";
			this->vKeyBackspace->Size = System::Drawing::Size(80, 50);
			this->vKeyBackspace->TabIndex = 66;
			this->vKeyBackspace->Text = L"Backspace";
			this->vKeyBackspace->UseVisualStyleBackColor = true;
			this->vKeyBackspace->Click += gcnew System::EventHandler(this, &KeyboardForm::vKeyBackspace_Click);
			// 
			// vKey1
			// 
			this->vKey1->Location = System::Drawing::Point(106, 76);
			this->vKey1->Name = L"vKey1";
			this->vKey1->Size = System::Drawing::Size(50, 50);
			this->vKey1->TabIndex = 67;
			this->vKey1->Text = L"!\r\n1";
			this->vKey1->UseVisualStyleBackColor = true;
			this->vKey1->Click += gcnew System::EventHandler(this, &KeyboardForm::vKey1_Click);
			// 
			// vKey2
			// 
			this->vKey2->Location = System::Drawing::Point(162, 76);
			this->vKey2->Name = L"vKey2";
			this->vKey2->Size = System::Drawing::Size(50, 50);
			this->vKey2->TabIndex = 68;
			this->vKey2->Text = L"@\r\n2";
			this->vKey2->UseVisualStyleBackColor = true;
			this->vKey2->Click += gcnew System::EventHandler(this, &KeyboardForm::vKey2_Click);
			// 
			// vKey3
			// 
			this->vKey3->Location = System::Drawing::Point(218, 76);
			this->vKey3->Name = L"vKey3";
			this->vKey3->Size = System::Drawing::Size(50, 50);
			this->vKey3->TabIndex = 69;
			this->vKey3->Text = L"#\r\n3";
			this->vKey3->UseVisualStyleBackColor = true;
			this->vKey3->Click += gcnew System::EventHandler(this, &KeyboardForm::vKey3_Click);
			// 
			// vKey4
			// 
			this->vKey4->Location = System::Drawing::Point(274, 76);
			this->vKey4->Name = L"vKey4";
			this->vKey4->Size = System::Drawing::Size(50, 50);
			this->vKey4->TabIndex = 70;
			this->vKey4->Text = L"$\r\n4";
			this->vKey4->UseVisualStyleBackColor = true;
			this->vKey4->Click += gcnew System::EventHandler(this, &KeyboardForm::vKey4_Click);
			// 
			// vKey5
			// 
			this->vKey5->Location = System::Drawing::Point(330, 76);
			this->vKey5->Name = L"vKey5";
			this->vKey5->Size = System::Drawing::Size(50, 50);
			this->vKey5->TabIndex = 71;
			this->vKey5->Text = L"%\r\n5";
			this->vKey5->UseVisualStyleBackColor = true;
			this->vKey5->Click += gcnew System::EventHandler(this, &KeyboardForm::vKey5_Click);
			// 
			// vKey6
			// 
			this->vKey6->Location = System::Drawing::Point(386, 76);
			this->vKey6->Name = L"vKey6";
			this->vKey6->Size = System::Drawing::Size(50, 50);
			this->vKey6->TabIndex = 72;
			this->vKey6->Text = L"^\r\n6";
			this->vKey6->UseVisualStyleBackColor = true;
			this->vKey6->Click += gcnew System::EventHandler(this, &KeyboardForm::vKey6_Click);
			// 
			// vKey7
			// 
			this->vKey7->Location = System::Drawing::Point(442, 76);
			this->vKey7->Name = L"vKey7";
			this->vKey7->Size = System::Drawing::Size(50, 50);
			this->vKey7->TabIndex = 73;
			this->vKey7->Text = L"&&\r\n7";
			this->vKey7->UseVisualStyleBackColor = true;
			this->vKey7->Click += gcnew System::EventHandler(this, &KeyboardForm::vKey7_Click);
			// 
			// vKey8
			// 
			this->vKey8->Location = System::Drawing::Point(498, 76);
			this->vKey8->Name = L"vKey8";
			this->vKey8->Size = System::Drawing::Size(50, 50);
			this->vKey8->TabIndex = 74;
			this->vKey8->Text = L"*\r\n8";
			this->vKey8->UseVisualStyleBackColor = true;
			this->vKey8->Click += gcnew System::EventHandler(this, &KeyboardForm::vKey8_Click);
			// 
			// vKey9
			// 
			this->vKey9->Location = System::Drawing::Point(554, 76);
			this->vKey9->Name = L"vKey9";
			this->vKey9->Size = System::Drawing::Size(50, 50);
			this->vKey9->TabIndex = 75;
			this->vKey9->Text = L"(\r\n9";
			this->vKey9->UseVisualStyleBackColor = true;
			this->vKey9->Click += gcnew System::EventHandler(this, &KeyboardForm::vKey9_Click);
			// 
			// vKey0
			// 
			this->vKey0->Location = System::Drawing::Point(610, 76);
			this->vKey0->Name = L"vKey0";
			this->vKey0->Size = System::Drawing::Size(50, 50);
			this->vKey0->TabIndex = 76;
			this->vKey0->Text = L")\r\n0";
			this->vKey0->UseVisualStyleBackColor = true;
			this->vKey0->Click += gcnew System::EventHandler(this, &KeyboardForm::vKey0_Click);
			// 
			// KeyboardForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
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
			this->Text = L"KeyboardForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LetterKey_Click(System::Object^  sender, System::EventArgs^  e) {
				 Button^ toGet = safe_cast<Button ^>(sender);
				 AppendLetterToTextbox(toGet -> Text -> ToLower());
		 }
	private: System::Void vKey1_Click(System::Object^  sender, System::EventArgs^  e) {
			 AppendNumberSymbolToTextbox('!','1');
	}
	private: System::Void vKey2_Click(System::Object^  sender, System::EventArgs^  e) {
			 AppendNumberSymbolToTextbox('@','2');
	}
	private: System::Void vKey3_Click(System::Object^  sender, System::EventArgs^  e) {
			 AppendNumberSymbolToTextbox('#','3');
	}
	private: System::Void vKey4_Click(System::Object^  sender, System::EventArgs^  e) {
			 AppendNumberSymbolToTextbox('$','4');
	}
	private: System::Void vKey5_Click(System::Object^  sender, System::EventArgs^  e) {
			 AppendNumberSymbolToTextbox('%','5');
	}
	private: System::Void vKey6_Click(System::Object^  sender, System::EventArgs^  e) {
			 AppendNumberSymbolToTextbox('^','6');
	}
	private: System::Void vKey7_Click(System::Object^  sender, System::EventArgs^  e) {
			 AppendNumberSymbolToTextbox('&','7');
	}
	private: System::Void vKey8_Click(System::Object^  sender, System::EventArgs^  e) {
			 AppendNumberSymbolToTextbox('*','8');
	}
	private: System::Void vKey9_Click(System::Object^  sender, System::EventArgs^  e) {
			 AppendNumberSymbolToTextbox('(','9');
	}
	private: System::Void vKey0_Click(System::Object^  sender, System::EventArgs^  e) {
			 AppendNumberSymbolToTextbox(')','0');
	}
	private: System::Void vKeyComma_Click(System::Object^  sender, System::EventArgs^  e) {
				 AppendNumberSymbolToTextbox('<',',');
		 }
	private: System::Void vKeyPeriod_Click(System::Object^  sender, System::EventArgs^  e) {
				 AppendNumberSymbolToTextbox('>','.');
		 }
	private: System::Void vKeySlash_Click(System::Object^  sender, System::EventArgs^  e) {
				 AppendNumberSymbolToTextbox('?','/');
		 }
	private: System::Void vKeySpace_Click(System::Object^  sender, System::EventArgs^  e) {
				 inputBox -> AppendText(" ");
		 }
	private: System::Void ShiftKeyPressed(System::Object^  sender, System::EventArgs^  e) {
				 shiftOn = !shiftOn;
				 UpdateKeyAppearances();
		 }
	private: System::Void CapsLockKeyPressed(System::Object^  sender, System::EventArgs^  e) {
				 capsLockOn = !capsLockOn;
				 UpdateKeyAppearances();
		 }
	private: System::Void vKeyBackspace_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (inputBox -> Text -> Length > 0) {
					inputBox -> Text = inputBox -> Text -> Substring(0, inputBox -> Text -> Length - 1);
				 }
		 }
	private: System::Void UpdateKeyAppearances() {
				 //Update key appearances based on whether capslock / shift is enabled.
				 if (shiftOn) {
					 //Change background color.
					 vKeyShiftL -> BackColor = SystemColors::Highlight;
					 vKeyShiftR -> BackColor = SystemColors::Highlight;
				 }
				 else {
					 vKeyShiftL -> BackColor = SystemColors::Control;
					 vKeyShiftR -> BackColor = SystemColors::Control;
				 }
				 if (capsLockOn) {
					 vKeyCaps -> BackColor = SystemColors::Highlight;
				 }
				 else {
					 vKeyCaps -> BackColor = SystemColors::Control;
				 }

	}
	private: System::Void AppendLetterToTextbox(String^ characterToAppend) {
				if (capsLockOn)
				{
					characterToAppend = characterToAppend -> ToUpper();
				}
				if (shiftOn) {
					if (characterToAppend -> Equals(characterToAppend -> ToUpper())) {
						characterToAppend = characterToAppend -> ToLower();
					}
					else {
						characterToAppend = characterToAppend -> ToUpper();
					}
					shiftOn = false;
					UpdateKeyAppearances();
				}
				inputBox -> AppendText(characterToAppend);
	}
	private: System::Void AppendNumberSymbolToTextbox(char upperToAppend, char lowerToAppend) {
			 if (shiftOn) {
				 shiftOn = false;
				 UpdateKeyAppearances();
				 inputBox -> AppendText(gcnew String(upperToAppend, 1));
			 }
			 else {
				 inputBox -> AppendText(gcnew String(lowerToAppend, 1));
			 }
	}
	private: System::Void vKeyEnter_Click(System::Object^  sender, System::EventArgs^  e) {
			//return textbox text and close form.
	}
};
}
