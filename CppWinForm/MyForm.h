#pragma once

namespace CppWinForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelDate;
	protected:

	private: System::Windows::Forms::Button^  buttonClose;
	protected:

	private: System::Windows::Forms::Button^  buttonGo;

	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->labelDate = (gcnew System::Windows::Forms::Label());
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->buttonGo = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// labelDate
			// 
			this->labelDate->AutoSize = true;
			this->labelDate->Location = System::Drawing::Point(73, 47);
			this->labelDate->Name = L"labelDate";
			this->labelDate->Size = System::Drawing::Size(0, 13);
			this->labelDate->TabIndex = 0;
			// 
			// buttonClose
			// 
			this->buttonClose->Location = System::Drawing::Point(44, 107);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(75, 23);
			this->buttonClose->TabIndex = 1;
			this->buttonClose->Text = L"Close";
			this->buttonClose->UseVisualStyleBackColor = true;
			this->buttonClose->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// buttonGo
			// 
			this->buttonGo->Location = System::Drawing::Point(176, 107);
			this->buttonGo->Name = L"buttonGo";
			this->buttonGo->Size = System::Drawing::Size(101, 23);
			this->buttonGo->TabIndex = 2;
			this->buttonGo->Text = L"On/Off";
			this->buttonGo->UseVisualStyleBackColor = true;
			this->buttonGo->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(361, 157);
			this->Controls->Add(this->buttonGo);
			this->Controls->Add(this->buttonClose);
			this->Controls->Add(this->labelDate);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		timer1->Enabled = !timer1->Enabled;
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		DateTime date;
		labelDate->Text = date.Now.ToString();
	}
};
}
