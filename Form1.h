#pragma once
#include <conio.h>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


namespace CppCLRWinformsProjekt {



	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Security::Cryptography;

	int lenght = 0;
	int* num = 0;

	//NIST constants
	static const double	rel_error = 1E-12;

	double MACHEP = 1.11022302462515654042E-16;		// 2**-53
	double MAXLOG = 7.09782712893383996732224E2;	// log(MAXNUM)
	double MAXNUM = 1.7976931348623158E308;			// 2**1024*(1-MACHEP)
	double PI = 3.14159265358979323846;			// pi, duh!

	static double big = 4.503599627370496e15;
	static double biginv = 2.22044604925031308085e-16;

	int sgngam = 0;
	//NIST constants

	/// <summary>
	/// Zusammenfassung f�r Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzuf�gen.
			//
		}
		
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::ProgressBar^ progressBar1;








	public:
		int sn = 0;

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::Button^ button2;
	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode f�r die Designerunterst�tzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge�ndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(26, 42);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(152, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"0";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(225, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(47, 47);
			this->button1->TabIndex = 1;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(27, 118);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Wygenerowany ci�g bitowy:";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(26, 154);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(731, 22);
			this->textBox2->TabIndex = 3;
			this->textBox2->WordWrap = false;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Podaj liczb� bit�w:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 230);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(149, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Test cz�stotliwo�ciowy";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(165, 226);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(80, 21);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"aktywny";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 287);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Test monobitowy";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(165, 284);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(80, 21);
			this->checkBox2->TabIndex = 8;
			this->checkBox2->Text = L"aktywny";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(344, 226);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(277, 22);
			this->textBox3->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 340);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Test pokerowy";
			this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(165, 342);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(80, 21);
			this->checkBox3->TabIndex = 11;
			this->checkBox3->Text = L"aktywny";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(45, 461);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(155, 45);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Start";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// checkBox4
			// 
			this->checkBox4->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->checkBox4->AutoSize = true;
			this->checkBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->checkBox4->Enabled = false;
			this->checkBox4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->checkBox4->Location = System::Drawing::Point(652, 226);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(49, 21);
			this->checkBox4->TabIndex = 13;
			this->checkBox4->Text = L"OK!";
			this->checkBox4->UseVisualStyleBackColor = false;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(344, 284);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(277, 22);
			this->textBox4->TabIndex = 14;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(344, 342);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(277, 22);
			this->textBox5->TabIndex = 15;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->checkBox5->Enabled = false;
			this->checkBox5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->checkBox5->Location = System::Drawing::Point(652, 282);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(49, 21);
			this->checkBox5->TabIndex = 16;
			this->checkBox5->Text = L"OK!";
			this->checkBox5->UseVisualStyleBackColor = false;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->checkBox6->Enabled = false;
			this->checkBox6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->checkBox6->Location = System::Drawing::Point(652, 340);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(49, 21);
			this->checkBox6->TabIndex = 17;
			this->checkBox6->Text = L"OK!";
			this->checkBox6->UseVisualStyleBackColor = false;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(340, 30);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(417, 47);
			this->progressBar1->Step = 1;
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 18;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CadetBlue;
			this->ClientSize = System::Drawing::Size(786, 544);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form1";
			this->Text = L"RandomNumberTest";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox2->Text = "";
		progressBar1->Value = 0;
		lenght = Convert::ToInt32(textBox1->Text);
		num = new int[lenght];
		srand(time(0));
		for (int i = 0; i < lenght; ++i) {
			num[i] = rand() % 2;
			textBox2->Text += Convert::ToString(num[i]);
			textBox2->Text += " ";
			if (lenght < 100)
				progressBar1->Value = 100;
			else {
				int con = i % (lenght / 100);
				if (con == 0)
					progressBar1->PerformStep();
			}
		}

	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	protected: System::Double erfc(System::Double z) {
		double val = 0;
		for (double i = 0; i < 1000000; i += 0.1) {
			val += 2 / sqrt(acos(0.0)) * exp(-pow(z + i, 2.0)) * 0.1;
		}
		return val;
	}
protected: System::Void esn() {
		for (int i = 0; i < lenght; ++i) {
			if (num[i] == 0)
				sn = sn - 1;
			else
				sn = sn + 1;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox3->Text = " ";
		textBox4->Text = " ";
		textBox5->Text = " ";
		checkBox4->Checked = false;
		checkBox5->Checked = false;
		checkBox6->Checked = false;

		if (checkBox1->Checked) {
			esn();
			double Pvalue = erfc(abs(sn) / sqrt(lenght));
			textBox3->Text += "Pvalue: ";
			textBox3->Text += Convert::ToString(Pvalue);
			if (Pvalue > 0.01)
				checkBox4->Checked = true;
		}
		if (checkBox2->Checked) {
			int jedynka = 0;
			for (int i = 0; i < lenght; ++i) {
				if (num[i] == 1)
					jedynka += 1;
			}
			double min = 9725.0 / 20000.0 * lenght;
			double max = 10275.0 / 20000.0 * lenght;
			textBox4->Text += "Liczba wystapie� jedynek: ";
			textBox4->Text += Convert::ToString(jedynka);
			if (jedynka > min && jedynka < max) {
				checkBox5->Checked = true;
			}

		}
		if (checkBox3->Checked) {
			int func[16] = { 0 };
			int liczba = 0;
			for (int i = 0; i <= lenght - 3 - lenght % 4; i += 4) {
				liczba = num[i] * 1 + num[i + 1] * 2 + num[i + 2] * 4 + num[i + 3] * 8;
				//textBox5->Text += Convert::ToString(liczba); textBox5->Text += ";";
				func[liczba] = func[liczba] + 1;
			}
			double chi = 0;
			for (int j = 0; j < 16; ++j) {
				chi = chi + 16.0 / lenght * 4.0 * pow(func[j], 2);
			}
			chi = chi - lenght / 4.0;
			textBox5->Text += "Chi: ";
			textBox5->Text += Convert::ToString(chi);
			if (chi > 2.16 && chi < 46.17)
				checkBox6->Checked = true;

		}
	}

private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void hScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
