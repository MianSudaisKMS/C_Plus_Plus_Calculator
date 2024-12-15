#pragma once

namespace calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for calculator
	/// </summary>
	public ref class calculator : public System::Windows::Forms::Form
	{
	public:
		calculator(void)
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
		~calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnone;
	private: System::Windows::Forms::Button^ btntwo;
	private: System::Windows::Forms::Button^ btnthree;
	private: System::Windows::Forms::Button^ btnfour;
	private: System::Windows::Forms::Button^ btnfive;
	private: System::Windows::Forms::Button^ btnsix;
	private: System::Windows::Forms::Button^ btnseven;
	private: System::Windows::Forms::Button^ btneight;
	private: System::Windows::Forms::Button^ btnnine;
	private: System::Windows::Forms::Button^ btnzero;
	protected:










	private: System::Windows::Forms::Button^ btnequal;
	private: System::Windows::Forms::Button^ btnclear;
	private: System::Windows::Forms::Button^ btnplus;
	private: System::Windows::Forms::Button^ btnminus;
	private: System::Windows::Forms::Button^ btnmultiply;





	private: System::Windows::Forms::Button^ btndivide;
	private: System::Windows::Forms::RichTextBox^ outputdisplay;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(calculator::typeid));
			this->btnone = (gcnew System::Windows::Forms::Button());
			this->btntwo = (gcnew System::Windows::Forms::Button());
			this->btnthree = (gcnew System::Windows::Forms::Button());
			this->btnfour = (gcnew System::Windows::Forms::Button());
			this->btnfive = (gcnew System::Windows::Forms::Button());
			this->btnsix = (gcnew System::Windows::Forms::Button());
			this->btnseven = (gcnew System::Windows::Forms::Button());
			this->btneight = (gcnew System::Windows::Forms::Button());
			this->btnnine = (gcnew System::Windows::Forms::Button());
			this->btnzero = (gcnew System::Windows::Forms::Button());
			this->btnequal = (gcnew System::Windows::Forms::Button());
			this->btnclear = (gcnew System::Windows::Forms::Button());
			this->btnplus = (gcnew System::Windows::Forms::Button());
			this->btnminus = (gcnew System::Windows::Forms::Button());
			this->btnmultiply = (gcnew System::Windows::Forms::Button());
			this->btndivide = (gcnew System::Windows::Forms::Button());
			this->outputdisplay = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// btnone
			// 
			this->btnone->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnone->Location = System::Drawing::Point(24, 103);
			this->btnone->Name = L"btnone";
			this->btnone->Size = System::Drawing::Size(57, 57);
			this->btnone->TabIndex = 0;
			this->btnone->Text = L"1";
			this->btnone->UseVisualStyleBackColor = false;
			this->btnone->Click += gcnew System::EventHandler(this, &calculator::btnone_Click);
			// 
			// btntwo
			// 
			this->btntwo->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btntwo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btntwo->Location = System::Drawing::Point(101, 103);
			this->btntwo->Name = L"btntwo";
			this->btntwo->Size = System::Drawing::Size(57, 57);
			this->btntwo->TabIndex = 1;
			this->btntwo->Text = L"2";
			this->btntwo->UseVisualStyleBackColor = false;
			this->btntwo->Click += gcnew System::EventHandler(this, &calculator::btntwo_Click);
			// 
			// btnthree
			// 
			this->btnthree->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnthree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnthree->Location = System::Drawing::Point(179, 103);
			this->btnthree->Name = L"btnthree";
			this->btnthree->Size = System::Drawing::Size(57, 57);
			this->btnthree->TabIndex = 2;
			this->btnthree->Text = L"3";
			this->btnthree->UseVisualStyleBackColor = false;
			this->btnthree->Click += gcnew System::EventHandler(this, &calculator::btnthree_Click);
			// 
			// btnfour
			// 
			this->btnfour->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnfour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnfour->Location = System::Drawing::Point(24, 180);
			this->btnfour->Name = L"btnfour";
			this->btnfour->Size = System::Drawing::Size(57, 57);
			this->btnfour->TabIndex = 3;
			this->btnfour->Text = L"4";
			this->btnfour->UseVisualStyleBackColor = false;
			this->btnfour->Click += gcnew System::EventHandler(this, &calculator::btnfour_Click);
			// 
			// btnfive
			// 
			this->btnfive->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnfive->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnfive->Location = System::Drawing::Point(101, 180);
			this->btnfive->Name = L"btnfive";
			this->btnfive->Size = System::Drawing::Size(57, 57);
			this->btnfive->TabIndex = 4;
			this->btnfive->Text = L"5";
			this->btnfive->UseVisualStyleBackColor = false;
			this->btnfive->Click += gcnew System::EventHandler(this, &calculator::btnfive_Click);
			// 
			// btnsix
			// 
			this->btnsix->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnsix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsix->Location = System::Drawing::Point(179, 180);
			this->btnsix->Name = L"btnsix";
			this->btnsix->Size = System::Drawing::Size(57, 57);
			this->btnsix->TabIndex = 5;
			this->btnsix->Text = L"6";
			this->btnsix->UseVisualStyleBackColor = false;
			this->btnsix->Click += gcnew System::EventHandler(this, &calculator::btnsix_Click);
			// 
			// btnseven
			// 
			this->btnseven->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnseven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnseven->Location = System::Drawing::Point(24, 261);
			this->btnseven->Name = L"btnseven";
			this->btnseven->Size = System::Drawing::Size(57, 57);
			this->btnseven->TabIndex = 6;
			this->btnseven->Text = L"7";
			this->btnseven->UseVisualStyleBackColor = false;
			this->btnseven->Click += gcnew System::EventHandler(this, &calculator::btnseven_Click);
			// 
			// btneight
			// 
			this->btneight->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btneight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btneight->Location = System::Drawing::Point(101, 261);
			this->btneight->Name = L"btneight";
			this->btneight->Size = System::Drawing::Size(57, 57);
			this->btneight->TabIndex = 7;
			this->btneight->Text = L"8";
			this->btneight->UseVisualStyleBackColor = false;
			this->btneight->Click += gcnew System::EventHandler(this, &calculator::btneight_Click);
			// 
			// btnnine
			// 
			this->btnnine->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnnine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnnine->Location = System::Drawing::Point(179, 261);
			this->btnnine->Name = L"btnnine";
			this->btnnine->Size = System::Drawing::Size(57, 57);
			this->btnnine->TabIndex = 8;
			this->btnnine->Text = L"9";
			this->btnnine->UseVisualStyleBackColor = false;
			this->btnnine->Click += gcnew System::EventHandler(this, &calculator::btnnine_Click);
			// 
			// btnzero
			// 
			this->btnzero->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnzero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnzero->Location = System::Drawing::Point(101, 343);
			this->btnzero->Name = L"btnzero";
			this->btnzero->Size = System::Drawing::Size(57, 57);
			this->btnzero->TabIndex = 9;
			this->btnzero->Text = L"0";
			this->btnzero->UseVisualStyleBackColor = false;
			this->btnzero->Click += gcnew System::EventHandler(this, &calculator::btnzero_Click);
			// 
			// btnequal
			// 
			this->btnequal->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnequal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnequal->Location = System::Drawing::Point(24, 343);
			this->btnequal->Name = L"btnequal";
			this->btnequal->Size = System::Drawing::Size(57, 57);
			this->btnequal->TabIndex = 10;
			this->btnequal->Text = L"=";
			this->btnequal->UseVisualStyleBackColor = false;
			this->btnequal->Click += gcnew System::EventHandler(this, &calculator::btnequal_Click);
			// 
			// btnclear
			// 
			this->btnclear->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnclear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnclear->Location = System::Drawing::Point(179, 343);
			this->btnclear->Name = L"btnclear";
			this->btnclear->Size = System::Drawing::Size(57, 57);
			this->btnclear->TabIndex = 11;
			this->btnclear->Text = L"C";
			this->btnclear->UseVisualStyleBackColor = false;
			this->btnclear->Click += gcnew System::EventHandler(this, &calculator::btnclear_Click);
			// 
			// btnplus
			// 
			this->btnplus->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnplus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnplus->Location = System::Drawing::Point(255, 103);
			this->btnplus->Name = L"btnplus";
			this->btnplus->Size = System::Drawing::Size(57, 57);
			this->btnplus->TabIndex = 12;
			this->btnplus->Text = L"+";
			this->btnplus->UseVisualStyleBackColor = false;
			this->btnplus->Click += gcnew System::EventHandler(this, &calculator::btnplus_Click);
			// 
			// btnminus
			// 
			this->btnminus->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnminus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnminus->Location = System::Drawing::Point(255, 180);
			this->btnminus->Name = L"btnminus";
			this->btnminus->Size = System::Drawing::Size(57, 57);
			this->btnminus->TabIndex = 13;
			this->btnminus->Text = L"-";
			this->btnminus->UseVisualStyleBackColor = false;
			this->btnminus->Click += gcnew System::EventHandler(this, &calculator::btnminus_Click);
			// 
			// btnmultiply
			// 
			this->btnmultiply->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnmultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnmultiply->Location = System::Drawing::Point(255, 261);
			this->btnmultiply->Name = L"btnmultiply";
			this->btnmultiply->Size = System::Drawing::Size(57, 57);
			this->btnmultiply->TabIndex = 14;
			this->btnmultiply->Text = L"x";
			this->btnmultiply->UseVisualStyleBackColor = false;
			this->btnmultiply->Click += gcnew System::EventHandler(this, &calculator::btnmultiply_Click);
			// 
			// btndivide
			// 
			this->btndivide->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btndivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndivide->Location = System::Drawing::Point(255, 343);
			this->btndivide->Name = L"btndivide";
			this->btndivide->Size = System::Drawing::Size(57, 57);
			this->btndivide->TabIndex = 15;
			this->btndivide->Text = L"/";
			this->btndivide->UseVisualStyleBackColor = false;
			this->btndivide->Click += gcnew System::EventHandler(this, &calculator::btndivide_Click);
			// 
			// outputdisplay
			// 
			this->outputdisplay->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->outputdisplay->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->outputdisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->outputdisplay->Location = System::Drawing::Point(24, 26);
			this->outputdisplay->Name = L"outputdisplay";
			this->outputdisplay->ReadOnly = true;
			this->outputdisplay->Size = System::Drawing::Size(288, 59);
			this->outputdisplay->TabIndex = 16;
			this->outputdisplay->Text = L"";
			this->outputdisplay->TextChanged += gcnew System::EventHandler(this, &calculator::outputdisplay_TextChanged);
			// 
			// calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(338, 429);
			this->Controls->Add(this->outputdisplay);
			this->Controls->Add(this->btndivide);
			this->Controls->Add(this->btnmultiply);
			this->Controls->Add(this->btnminus);
			this->Controls->Add(this->btnplus);
			this->Controls->Add(this->btnclear);
			this->Controls->Add(this->btnequal);
			this->Controls->Add(this->btnzero);
			this->Controls->Add(this->btnnine);
			this->Controls->Add(this->btneight);
			this->Controls->Add(this->btnseven);
			this->Controls->Add(this->btnsix);
			this->Controls->Add(this->btnfive);
			this->Controls->Add(this->btnfour);
			this->Controls->Add(this->btnthree);
			this->Controls->Add(this->btntwo);
			this->Controls->Add(this->btnone);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"calculator";
			this->Text = L"calculator";
			this->ResumeLayout(false);

		}
		//#pragma endregion
		//	private: System::Void outputdisplay_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		//	}
		//private: System::Void btnone_Click(System::Object^ sender, System::EventArgs^ e) {
		//}
		//private: System::Void btntwo_Click(System::Object^ sender, System::EventArgs^ e) {
		//}
		//private: System::Void btnthree_Click(System::Object^ sender, System::EventArgs^ e) {
		//}
		//private: System::Void btnfour_Click(System::Object^ sender, System::EventArgs^ e) {
		//}
		//private: System::Void btnfive_Click(System::Object^ sender, System::EventArgs^ e) {
		//}
		//private: System::Void btnsix_Click(System::Object^ sender, System::EventArgs^ e) {
		//}
		//private: System::Void btnseven_Click(System::Object^ sender, System::EventArgs^ e) {
		//}
		//private: System::Void btneight_Click(System::Object^ sender, System::EventArgs^ e) {
		//}
		//private: System::Void btnnine_Click(System::Object^ sender, System::EventArgs^ e) {
		//}
		//private: System::Void btnzero_Click(System::Object^ sender, System::EventArgs^ e) {
		//}
		//private: System::Void btnequal_Click(System::Object^ sender, System::EventArgs^ e) {
		//}
		//private: System::Void btnclear_Click(System::Object^ sender, System::EventArgs^ e) {
		//}
		//private: System::Void btnplus_Click(System::Object^ sender, System::EventArgs^ e) {
		//}
		//private: System::Void btnminus_Click(System::Object^ sender, System::EventArgs^ e) {
		//}
		//private: System::Void btnmultiply_Click(System::Object^ sender, System::EventArgs^ e) {
		//}
		//private: System::Void btndivide_Click(System::Object^ sender, System::EventArgs^ e) {
		//}
		//};
		//}
#pragma endregion
	private:
		// Variables for calculation
		double operand1 = 0;       // First operand
		double operand2 = 0;       // Second operand
		char operation = '\0';     // Operation (+, -, *, /)
		bool isSecondOperand = false; // Flag to track if second operand is being entered

	private: System::Void outputdisplay_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		outputdisplay->ReadOnly = true;
	}

		   // Number button click handlers
	private: System::Void btnone_Click(System::Object^ sender, System::EventArgs^ e) { outputdisplay->Text += "1"; }
	private: System::Void btntwo_Click(System::Object^ sender, System::EventArgs^ e) { outputdisplay->Text += "2"; }
	private: System::Void btnthree_Click(System::Object^ sender, System::EventArgs^ e) { outputdisplay->Text += "3"; }
	private: System::Void btnfour_Click(System::Object^ sender, System::EventArgs^ e) { outputdisplay->Text += "4"; }
	private: System::Void btnfive_Click(System::Object^ sender, System::EventArgs^ e) { outputdisplay->Text += "5"; }
	private: System::Void btnsix_Click(System::Object^ sender, System::EventArgs^ e) { outputdisplay->Text += "6"; }
	private: System::Void btnseven_Click(System::Object^ sender, System::EventArgs^ e) { outputdisplay->Text += "7"; }
	private: System::Void btneight_Click(System::Object^ sender, System::EventArgs^ e) { outputdisplay->Text += "8"; }
	private: System::Void btnnine_Click(System::Object^ sender, System::EventArgs^ e) { outputdisplay->Text += "9"; }
	private: System::Void btnzero_Click(System::Object^ sender, System::EventArgs^ e) { outputdisplay->Text += "0"; }

		   // Operator button click handlers
	private: System::Void btnplus_Click(System::Object^ sender, System::EventArgs^ e) {
		operand1 = Convert::ToDouble(outputdisplay->Text);
		operation = '+';
		outputdisplay->Text += " + ";
	}

	private: System::Void btnminus_Click(System::Object^ sender, System::EventArgs^ e) {
		operand1 = Convert::ToDouble(outputdisplay->Text);
		operation = '-';
		outputdisplay->Text += " - ";
	}

	private: System::Void btnmultiply_Click(System::Object^ sender, System::EventArgs^ e) {
		operand1 = Convert::ToDouble(outputdisplay->Text);
		operation = '*';
		outputdisplay->Text += " * ";
	}

	private: System::Void btndivide_Click(System::Object^ sender, System::EventArgs^ e) {
		operand1 = Convert::ToDouble(outputdisplay->Text);
		operation = '/';
		outputdisplay->Text += " / ";
	}

		   // Equals button click handler
	private: System::Void btnequal_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Extract the second operand from the text after the operator
			array<String^>^ parts = outputdisplay->Text->Split(' ');
			if (parts->Length < 3) {
				outputdisplay->Text = "Error";
				return;
			}

			operand2 = Convert::ToDouble(parts[2]);
			double result = 0;

			switch (operation) {
			case '+':
				result = operand1 + operand2;
				break;
			case '-':
				result = operand1 - operand2;
				break;
			case '*':
				result = operand1 * operand2;
				break;
			case '/':
				if (operand2 != 0) {
					result = operand1 / operand2;
				}
				else {
					outputdisplay->Text = "Error";
					return;
				}
				break;
			default:
				outputdisplay->Text = "Error";
				return;
			}

			outputdisplay->Text = result.ToString();
		}
		catch (Exception^) {
			outputdisplay->Text = "Error";
		}
	}

		   // Clear button click handler
	private: System::Void btnclear_Click(System::Object^ sender, System::EventArgs^ e) {
		outputdisplay->Text = "";
		operand1 = 0;
		operand2 = 0;
		operation = '\0';
	}
	};
};