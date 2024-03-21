#pragma once

namespace UserForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ InputUserName;
	private: System::Windows::Forms::TextBox^ InputUserEmail;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ Email;

	private: System::Windows::Forms::Button^ BtnRnviar;
	private: System::Windows::Forms::Label^ LabelShowName;
	private: System::Windows::Forms::Label^ LabelShowEmail;
	private: System::Windows::Forms::RadioButton^ radioButtonShowEmail;
	private: System::Windows::Forms::RadioButton^ radioButtonShowName;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->InputUserName = (gcnew System::Windows::Forms::TextBox());
			this->InputUserEmail = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Email = (gcnew System::Windows::Forms::Label());
			this->BtnRnviar = (gcnew System::Windows::Forms::Button());
			this->LabelShowName = (gcnew System::Windows::Forms::Label());
			this->LabelShowEmail = (gcnew System::Windows::Forms::Label());
			this->radioButtonShowEmail = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonShowName = (gcnew System::Windows::Forms::RadioButton());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"INTRODUZCA SUS DATOS";
			// 
			// InputUserName
			// 
			this->InputUserName->Location = System::Drawing::Point(121, 58);
			this->InputUserName->Name = L"InputUserName";
			this->InputUserName->Size = System::Drawing::Size(168, 20);
			this->InputUserName->TabIndex = 2;
			// 
			// InputUserEmail
			// 
			this->InputUserEmail->Location = System::Drawing::Point(121, 95);
			this->InputUserEmail->Name = L"InputUserEmail";
			this->InputUserEmail->Size = System::Drawing::Size(168, 20);
			this->InputUserEmail->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Name";
			// 
			// Email
			// 
			this->Email->AutoSize = true;
			this->Email->Location = System::Drawing::Point(29, 102);
			this->Email->Name = L"Email";
			this->Email->Size = System::Drawing::Size(32, 13);
			this->Email->TabIndex = 5;
			this->Email->Text = L"Email";
			// 
			// BtnRnviar
			// 
			this->BtnRnviar->Location = System::Drawing::Point(95, 258);
			this->BtnRnviar->Name = L"BtnRnviar";
			this->BtnRnviar->Size = System::Drawing::Size(130, 40);
			this->BtnRnviar->TabIndex = 7;
			this->BtnRnviar->Text = L"Enviar";
			this->BtnRnviar->UseVisualStyleBackColor = true;
			this->BtnRnviar->Click += gcnew System::EventHandler(this, &MyForm::BtnEnviar_Click);
			// 
			// LabelShowName
			// 
			this->LabelShowName->AutoSize = true;
			this->LabelShowName->Location = System::Drawing::Point(92, 200);
			this->LabelShowName->Name = L"LabelShowName";
			this->LabelShowName->Size = System::Drawing::Size(0, 13);
			this->LabelShowName->TabIndex = 8;
			// 
			// LabelShowEmail
			// 
			this->LabelShowEmail->AutoSize = true;
			this->LabelShowEmail->Location = System::Drawing::Point(205, 200);
			this->LabelShowEmail->Name = L"LabelShowEmail";
			this->LabelShowEmail->Size = System::Drawing::Size(0, 13);
			this->LabelShowEmail->TabIndex = 9;
			// 
			// radioButtonShowEmail
			// 
			this->radioButtonShowEmail->AutoSize = true;
			this->radioButtonShowEmail->Location = System::Drawing::Point(34, 139);
			this->radioButtonShowEmail->Name = L"radioButtonShowEmail";
			this->radioButtonShowEmail->Size = System::Drawing::Size(80, 17);
			this->radioButtonShowEmail->TabIndex = 10;
			this->radioButtonShowEmail->TabStop = true;
			this->radioButtonShowEmail->Text = L"Show Email";
			this->radioButtonShowEmail->UseVisualStyleBackColor = true;
			// 
			// radioButtonShowName
			// 
			this->radioButtonShowName->AutoSize = true;
			this->radioButtonShowName->Location = System::Drawing::Point(34, 164);
			this->radioButtonShowName->Name = L"radioButtonShowName";
			this->radioButtonShowName->Size = System::Drawing::Size(83, 17);
			this->radioButtonShowName->TabIndex = 11;
			this->radioButtonShowName->TabStop = true;
			this->radioButtonShowName->Text = L"Show Name";
			this->radioButtonShowName->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(125, 139);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(45, 17);
			this->checkBox1->TabIndex = 12;
			this->checkBox1->Text = L"C++";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(125, 163);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(38, 17);
			this->checkBox2->TabIndex = 13;
			this->checkBox2->Text = L"JS";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(354, 326);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->radioButtonShowName);
			this->Controls->Add(this->radioButtonShowEmail);
			this->Controls->Add(this->LabelShowEmail);
			this->Controls->Add(this->LabelShowName);
			this->Controls->Add(this->BtnRnviar);
			this->Controls->Add(this->Email);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->InputUserEmail);
			this->Controls->Add(this->InputUserName);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void BtnEnviar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = "INTRODUZCA SUS DATOS ";
		this->radioButtonShowEmail->Checked = false;
		this->radioButtonShowName->Checked = false;

		String^ cursos; // Definimos una variable string;

		if (this->InputUserEmail->Text == "" || this->InputUserName->Text == "") {
			MessageBox::Show("Introduzca todos los datos");
		}
		else {
			if (radioButtonShowName->Checked) {
				this->LabelShowName->Text = this->InputUserName->Text;
			}
			if (radioButtonShowEmail->Checked) {
				this->LabelShowEmail->Text = this->InputUserEmail->Text;
			}
		}
		if (checkBox1->Checked) {
			this->label1->Text += this->checkBox1->Text;
		}
		if (checkBox2->Checked) {
			this->label1->Text += this->checkBox2->Text;
		}
	};
	};
};