#pragma once

namespace CalculatorTut {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// <summary>
	// Summary for MyForm
	// </summary>
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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	public: System::Windows::Forms::Button^ btn_Equal;
	private:
	public: System::Windows::Forms::Button^ btn_BackSPACE;
	public: System::Windows::Forms::Button^ btn_Decimal;




	public: System::Windows::Forms::Button^ btn_0;
	public: System::Windows::Forms::Button^ btn_SUM;
	public: System::Windows::Forms::Button^ btn_3;
	public: System::Windows::Forms::Button^ btn_2;
	public: System::Windows::Forms::Button^ btn_1;
	public: System::Windows::Forms::Button^ btn_MINUS;
	public: System::Windows::Forms::Button^ btn_6;
	public: System::Windows::Forms::Button^ btn_5;
	public: System::Windows::Forms::Button^ btn_4;
	public: System::Windows::Forms::Button^ btn_MULTIPLICATION;
	public: System::Windows::Forms::Button^ btn_9;
	public: System::Windows::Forms::Button^ btn_8;
	public: System::Windows::Forms::Button^ btn_7;
	public: System::Windows::Forms::Button^ btn_DIVISION;
	public: System::Windows::Forms::Button^ btn_PERCENTAGE;
	public: System::Windows::Forms::Button^ btn_BRACKETS;
	public: System::Windows::Forms::Button^ btn_AC;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btn_Equal = (gcnew System::Windows::Forms::Button());
			this->btn_BackSPACE = (gcnew System::Windows::Forms::Button());
			this->btn_Decimal = (gcnew System::Windows::Forms::Button());
			this->btn_0 = (gcnew System::Windows::Forms::Button());
			this->btn_SUM = (gcnew System::Windows::Forms::Button());
			this->btn_3 = (gcnew System::Windows::Forms::Button());
			this->btn_2 = (gcnew System::Windows::Forms::Button());
			this->btn_1 = (gcnew System::Windows::Forms::Button());
			this->btn_MINUS = (gcnew System::Windows::Forms::Button());
			this->btn_6 = (gcnew System::Windows::Forms::Button());
			this->btn_5 = (gcnew System::Windows::Forms::Button());
			this->btn_4 = (gcnew System::Windows::Forms::Button());
			this->btn_MULTIPLICATION = (gcnew System::Windows::Forms::Button());
			this->btn_9 = (gcnew System::Windows::Forms::Button());
			this->btn_8 = (gcnew System::Windows::Forms::Button());
			this->btn_7 = (gcnew System::Windows::Forms::Button());
			this->btn_DIVISION = (gcnew System::Windows::Forms::Button());
			this->btn_PERCENTAGE = (gcnew System::Windows::Forms::Button());
			this->btn_BRACKETS = (gcnew System::Windows::Forms::Button());
			this->btn_AC = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(26, 22);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(226, 54);
			this->textBox1->TabIndex = 22;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// btn_Equal
			// 
			this->btn_Equal->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_Equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Equal->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_Equal->Location = System::Drawing::Point(141, 345);
			this->btn_Equal->Name = L"btn_Equal";
			this->btn_Equal->Size = System::Drawing::Size(52, 59);
			this->btn_Equal->TabIndex = 20;
			this->btn_Equal->Text = L"=";
			this->btn_Equal->UseVisualStyleBackColor = false;
			this->btn_Equal->Click += gcnew System::EventHandler(this, &MyForm::btn_Equal_Click);
			// 
			// btn_BackSPACE
			// 
			this->btn_BackSPACE->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_BackSPACE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_BackSPACE->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_BackSPACE->Location = System::Drawing::Point(25, 85);
			this->btn_BackSPACE->Name = L"btn_BackSPACE";
			this->btn_BackSPACE->Size = System::Drawing::Size(52, 59);
			this->btn_BackSPACE->TabIndex = 19;
			this->btn_BackSPACE->Text = L"⌫";
			this->btn_BackSPACE->UseVisualStyleBackColor = false;
			this->btn_BackSPACE->Click += gcnew System::EventHandler(this, &MyForm::btn_BackSPACE_Click);
			// 
			// btn_Decimal
			// 
			this->btn_Decimal->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_Decimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Decimal->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_Decimal->Location = System::Drawing::Point(83, 345);
			this->btn_Decimal->Name = L"btn_Decimal";
			this->btn_Decimal->Size = System::Drawing::Size(52, 59);
			this->btn_Decimal->TabIndex = 18;
			this->btn_Decimal->Text = L".";
			this->btn_Decimal->UseVisualStyleBackColor = false;
			this->btn_Decimal->Click += gcnew System::EventHandler(this, &MyForm::btn_Decimal_click);
			// 
			// btn_0
			// 
			this->btn_0->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_0->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_0->Location = System::Drawing::Point(25, 345);
			this->btn_0->Name = L"btn_0";
			this->btn_0->Size = System::Drawing::Size(52, 59);
			this->btn_0->TabIndex = 17;
			this->btn_0->Text = L"0";
			this->btn_0->UseVisualStyleBackColor = false;
			this->btn_0->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn_SUM
			// 
			this->btn_SUM->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_SUM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_SUM->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_SUM->Location = System::Drawing::Point(199, 345);
			this->btn_SUM->Name = L"btn_SUM";
			this->btn_SUM->Size = System::Drawing::Size(52, 59);
			this->btn_SUM->TabIndex = 16;
			this->btn_SUM->Text = L"+";
			this->btn_SUM->UseVisualStyleBackColor = false;
			this->btn_SUM->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btn_3
			// 
			this->btn_3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_3->Location = System::Drawing::Point(141, 280);
			this->btn_3->Name = L"btn_3";
			this->btn_3->Size = System::Drawing::Size(52, 59);
			this->btn_3->TabIndex = 15;
			this->btn_3->Text = L"3";
			this->btn_3->UseVisualStyleBackColor = false;
			this->btn_3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn_2
			// 
			this->btn_2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_2->Location = System::Drawing::Point(83, 280);
			this->btn_2->Name = L"btn_2";
			this->btn_2->Size = System::Drawing::Size(52, 59);
			this->btn_2->TabIndex = 14;
			this->btn_2->Text = L"2";
			this->btn_2->UseVisualStyleBackColor = false;
			this->btn_2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn_1
			// 
			this->btn_1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_1->Location = System::Drawing::Point(25, 280);
			this->btn_1->Name = L"btn_1";
			this->btn_1->Size = System::Drawing::Size(52, 59);
			this->btn_1->TabIndex = 13;
			this->btn_1->Text = L"1";
			this->btn_1->UseVisualStyleBackColor = false;
			this->btn_1->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn_MINUS
			// 
			this->btn_MINUS->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_MINUS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_MINUS->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_MINUS->Location = System::Drawing::Point(199, 280);
			this->btn_MINUS->Name = L"btn_MINUS";
			this->btn_MINUS->Size = System::Drawing::Size(52, 59);
			this->btn_MINUS->TabIndex = 21;
			this->btn_MINUS->Text = L"-";
			this->btn_MINUS->UseVisualStyleBackColor = false;
			this->btn_MINUS->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btn_6
			// 
			this->btn_6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_6->Location = System::Drawing::Point(141, 215);
			this->btn_6->Name = L"btn_6";
			this->btn_6->Size = System::Drawing::Size(52, 59);
			this->btn_6->TabIndex = 2;
			this->btn_6->Text = L"6";
			this->btn_6->UseVisualStyleBackColor = false;
			this->btn_6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn_5
			// 
			this->btn_5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_5->Location = System::Drawing::Point(83, 215);
			this->btn_5->Name = L"btn_5";
			this->btn_5->Size = System::Drawing::Size(52, 59);
			this->btn_5->TabIndex = 10;
			this->btn_5->Text = L"5";
			this->btn_5->UseVisualStyleBackColor = false;
			this->btn_5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn_4
			// 
			this->btn_4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_4->Location = System::Drawing::Point(25, 215);
			this->btn_4->Name = L"btn_4";
			this->btn_4->Size = System::Drawing::Size(52, 59);
			this->btn_4->TabIndex = 9;
			this->btn_4->Text = L"4";
			this->btn_4->UseVisualStyleBackColor = false;
			this->btn_4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn_MULTIPLICATION
			// 
			this->btn_MULTIPLICATION->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_MULTIPLICATION->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_MULTIPLICATION->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_MULTIPLICATION->Location = System::Drawing::Point(199, 215);
			this->btn_MULTIPLICATION->Name = L"btn_MULTIPLICATION";
			this->btn_MULTIPLICATION->Size = System::Drawing::Size(52, 59);
			this->btn_MULTIPLICATION->TabIndex = 8;
			this->btn_MULTIPLICATION->Text = L"×";
			this->btn_MULTIPLICATION->UseVisualStyleBackColor = false;
			this->btn_MULTIPLICATION->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btn_9
			// 
			this->btn_9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_9->Location = System::Drawing::Point(141, 150);
			this->btn_9->Name = L"btn_9";
			this->btn_9->Size = System::Drawing::Size(52, 59);
			this->btn_9->TabIndex = 7;
			this->btn_9->Text = L"9";
			this->btn_9->UseVisualStyleBackColor = false;
			this->btn_9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn_8
			// 
			this->btn_8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_8->Location = System::Drawing::Point(83, 150);
			this->btn_8->Name = L"btn_8";
			this->btn_8->Size = System::Drawing::Size(52, 59);
			this->btn_8->TabIndex = 6;
			this->btn_8->Text = L"8";
			this->btn_8->UseVisualStyleBackColor = false;
			this->btn_8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn_7
			// 
			this->btn_7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_7->Location = System::Drawing::Point(25, 150);
			this->btn_7->Name = L"btn_7";
			this->btn_7->Size = System::Drawing::Size(52, 59);
			this->btn_7->TabIndex = 5;
			this->btn_7->Text = L"7";
			this->btn_7->UseVisualStyleBackColor = false;
			this->btn_7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btn_DIVISION
			// 
			this->btn_DIVISION->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_DIVISION->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_DIVISION->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_DIVISION->Location = System::Drawing::Point(199, 150);
			this->btn_DIVISION->Name = L"btn_DIVISION";
			this->btn_DIVISION->Size = System::Drawing::Size(52, 59);
			this->btn_DIVISION->TabIndex = 4;
			this->btn_DIVISION->Text = L"÷";
			this->btn_DIVISION->UseVisualStyleBackColor = false;
			this->btn_DIVISION->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btn_PERCENTAGE
			// 
			this->btn_PERCENTAGE->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_PERCENTAGE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_PERCENTAGE->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_PERCENTAGE->Location = System::Drawing::Point(141, 85);
			this->btn_PERCENTAGE->Name = L"btn_PERCENTAGE";
			this->btn_PERCENTAGE->Size = System::Drawing::Size(52, 59);
			this->btn_PERCENTAGE->TabIndex = 3;
			this->btn_PERCENTAGE->Text = L"%";
			this->btn_PERCENTAGE->UseVisualStyleBackColor = false;
			// 
			// btn_BRACKETS
			// 
			this->btn_BRACKETS->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_BRACKETS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_BRACKETS->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_BRACKETS->Location = System::Drawing::Point(83, 85);
			this->btn_BRACKETS->Name = L"btn_BRACKETS";
			this->btn_BRACKETS->Size = System::Drawing::Size(52, 59);
			this->btn_BRACKETS->TabIndex = 11;
			this->btn_BRACKETS->Text = L"( )";
			this->btn_BRACKETS->UseVisualStyleBackColor = false;
			// 
			// btn_AC
			// 
			this->btn_AC->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btn_AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_AC->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_AC->Location = System::Drawing::Point(199, 85);
			this->btn_AC->Name = L"btn_AC";
			this->btn_AC->Size = System::Drawing::Size(52, 59);
			this->btn_AC->TabIndex = 12;
			this->btn_AC->Text = L"AC";
			this->btn_AC->UseVisualStyleBackColor = false;
			this->btn_AC->Click += gcnew System::EventHandler(this, &MyForm::btn_AC_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(278, 410);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btn_Equal);
			this->Controls->Add(this->btn_BackSPACE);
			this->Controls->Add(this->btn_Decimal);
			this->Controls->Add(this->btn_0);
			this->Controls->Add(this->btn_SUM);
			this->Controls->Add(this->btn_3);
			this->Controls->Add(this->btn_2);
			this->Controls->Add(this->btn_1);
			this->Controls->Add(this->btn_MINUS);
			this->Controls->Add(this->btn_6);
			this->Controls->Add(this->btn_5);
			this->Controls->Add(this->btn_4);
			this->Controls->Add(this->btn_MULTIPLICATION);
			this->Controls->Add(this->btn_9);
			this->Controls->Add(this->btn_8);
			this->Controls->Add(this->btn_7);
			this->Controls->Add(this->btn_DIVISION);
			this->Controls->Add(this->btn_PERCENTAGE);
			this->Controls->Add(this->btn_BRACKETS);
			this->Controls->Add(this->btn_AC);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String^ Operators;
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {

	Button^ Numbers = safe_cast<Button^>(sender);

	if (textBox1->Text == "0")
	{
		textBox1->Text = Numbers->Text;
	}
	else
	{
		textBox1->Text = textBox1->Text + Numbers->Text;
	}
}
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
	Button^ NumbersOp = safe_cast<Button^>(sender);
	firstDigit = double ::Parse(textBox1->Text);
	textBox1->Text = "";
	Operators = NumbersOp->Text;
}
private: System::Void btn_Decimal_click(System::Object^ sender, System::EventArgs^ e) {

	if (!textBox1->Text->Contains("."))
{
		textBox1->Text = textBox1->Text + ".";
}
}

private: System::Void btn_Equal_Click(System::Object^ sender, System::EventArgs^ e) {
	secondDigit = double ::Parse(textBox1->Text);
	if (Operators == "+")
	{
		result = firstDigit + secondDigit;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if(Operators == "-")
	{
		result = firstDigit - secondDigit;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (Operators == "×")
	{
		result = firstDigit * secondDigit;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (Operators == "÷")
	{
		result = firstDigit / secondDigit;
		textBox1->Text = System::Convert::ToString(result);
	}
}

private: System::Void btn_AC_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "0";
}
private: System::Void btn_BackSPACE_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Length > 0) {
	textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length > -1, 1);
	}
}
};
};

