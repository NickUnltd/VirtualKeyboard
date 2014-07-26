#pragma once
namespace ECE458SecurityProjectRev2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  nameLabel;
	protected:

	private: System::Windows::Forms::TextBox^  nameField;
	private: System::Windows::Forms::Label^  passLabel;
	protected:


	private: System::Windows::Forms::TextBox^  passField;
	private: System::Windows::Forms::Button^  togglePass;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->nameField = (gcnew System::Windows::Forms::TextBox());
			this->passLabel = (gcnew System::Windows::Forms::Label());
			this->passField = (gcnew System::Windows::Forms::TextBox());
			this->togglePass = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// nameLabel
			// 
			this->nameLabel->AccessibleName = L"Name";
			this->nameLabel->AutoSize = true;
			this->nameLabel->Location = System::Drawing::Point(115, 60);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(35, 13);
			this->nameLabel->TabIndex = 0;
			this->nameLabel->Text = L"Name";
			// 
			// nameField
			// 
			this->nameField->Location = System::Drawing::Point(156, 57);
			this->nameField->Name = L"nameField";
			this->nameField->Size = System::Drawing::Size(242, 20);
			this->nameField->TabIndex = 1;
			// 
			// passLabel
			// 
			this->passLabel->AccessibleName = L"Password";
			this->passLabel->AutoSize = true;
			this->passLabel->Location = System::Drawing::Point(97, 90);
			this->passLabel->Name = L"passLabel";
			this->passLabel->Size = System::Drawing::Size(53, 13);
			this->passLabel->TabIndex = 2;
			this->passLabel->Text = L"Password";
			// 
			// passField
			// 
			this->passField->AccessibleName = L"passField";
			this->passField->Location = System::Drawing::Point(156, 90);
			this->passField->Name = L"passField";
			this->passField->ReadOnly = true;
			this->passField->Size = System::Drawing::Size(242, 20);
			this->passField->TabIndex = 3;
			this->passField->UseSystemPasswordChar = true;
			this->passField->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::passField_MouseClick);
			// 
			// togglePass
			// 
			this->togglePass->Location = System::Drawing::Point(221, 116);
			this->togglePass->Name = L"togglePass";
			this->togglePass->Size = System::Drawing::Size(99, 38);
			this->togglePass->TabIndex = 4;
			this->togglePass->Text = L"Toggle Password";
			this->togglePass->UseVisualStyleBackColor = true;
			this->togglePass->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::togglePass_MouseClick);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(531, 314);
			this->Controls->Add(this->togglePass);
			this->Controls->Add(this->passField);
			this->Controls->Add(this->passLabel);
			this->Controls->Add(this->nameField);
			this->Controls->Add(this->nameLabel);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		System::Void passField_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		System::Void togglePass_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	};
}
