
#include "Datos.h"
#include <iostream>

#pragma once


namespace GridView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Collections::Generic; //For Generic List
	using namespace std;


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
		List<Datos^>^ datosList = gcnew List<Datos^>();

	public:
	private:
		MySqlConnection^ conection;

		MySqlConnection^ crearConexion()
		{
			return gcnew MySqlConnection("Server=localhost;Port=3306;Database=nascor;Uid=root;Pwd=password;");
		}

		MySqlDataReader^ seleccionarDatos()
		{

			conection = crearConexion();
			MySqlCommand^ comando = gcnew MySqlCommand("SELECT * FROM noticias", conection);
			MySqlDataReader^ reader = nullptr;

			try {
				conection->Open();
				//MessageBox::Show("Todo bien" );
				reader = comando->ExecuteReader();
				return reader;
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error al conectar a la base de datos: " + ex->Message);
			}
		}
		int querySQL(String^ query, int accion) {
			int dataReturn;
			conection = crearConexion();
			MySqlCommand^ comando = gcnew MySqlCommand(query, conection);
			try {
				conection->Open();
				switch (accion) {
				case 0: //delete
					dataReturn = comando->ExecuteNonQuery();
					return dataReturn;
					break;
				case 1: //insert
					dataReturn = comando->ExecuteNonQuery();
					MySqlDataReader^ data = seleccionarDatos();
					datosList->Clear();
					showGrid(data);
					data->Close();
				}
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error al conectar a la base de datos: " + ex->Message);
			}
			finally
			{
				conection->Close();
			}
		}

		void showGrid(MySqlDataReader^ data) {
			
			if (data != nullptr) {
				while (data->Read()) {
					datosList->Add(gcnew Datos(data->GetInt32(0), data->GetString(1), data->GetString(2), data->GetString(3), data->GetDateTime(4)));
					if (data == nullptr) {
						break;
					}
				}
			}
			int i = 0;
			dataGridView1->Rows->Clear();
			for each (Datos ^ dato in datosList) {
				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = dato->id;
				dataGridView1->Rows[i]->Cells[1]->Value = dato->titulo;
				dataGridView1->Rows[i]->Cells[2]->Value = dato->contenido;
				dataGridView1->Rows[i]->Cells[3]->Value = dato->categoria;
				dataGridView1->Rows[i]->Cells[4]->Value = dato->fecha;
				if (dato == nullptr) {
					break;
				}
				i++;
			}
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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ email;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ age;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ course;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fecha;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ Eliminar;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->age = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->course = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Eliminar = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->name, this->email,
					this->age, this->course, this->Fecha, this->Eliminar
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1018, 180);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			this->dataGridView1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellEndEdit);
			// 
			// name
			// 
			this->name->FillWeight = 50;
			this->name->HeaderText = L"id";
			this->name->Name = L"name";
			this->name->Width = 50;
			// 
			// email
			// 
			this->email->FillWeight = 200;
			this->email->HeaderText = L"Titulo";
			this->email->Name = L"email";
			this->email->Width = 200;
			// 
			// age
			// 
			this->age->FillWeight = 200;
			this->age->HeaderText = L"Noticia";
			this->age->Name = L"age";
			this->age->Width = 200;
			// 
			// course
			// 
			this->course->FillWeight = 200;
			this->course->HeaderText = L"Categoría";
			this->course->Name = L"course";
			this->course->Width = 200;
			// 
			// Fecha
			// 
			this->Fecha->HeaderText = L"Fecha";
			this->Fecha->Name = L"Fecha";
			// 
			// Eliminar
			// 
			this->Eliminar->HeaderText = L"Eliminar";
			this->Eliminar->Name = L"Eliminar";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1051, 261);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		MySqlConnection^ conexion = gcnew MySqlConnection("Server=localhost;Port=3306;Database=nascor;Uid=root;Pwd=password;");
		MySqlDataReader^ data = seleccionarDatos();
		showGrid(data);
		data->Close();
		conexion->Close();
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0 && e->ColumnIndex == 5) {
			int fila = e->RowIndex;
			int data = 0;
			int idOfColumn = Convert::ToInt32(dataGridView1->Rows[fila]->Cells[0]->Value);
			String^ id = dataGridView1->Rows[fila]->Cells[0]->Value->ToString();
			String^ query = "DELETE FROM noticias WHERE id=" + id;
			data = querySQL(query, 0); // delete
			if (data > 0) {
				for each (Datos^ dato in datosList) {
					if (dato->id == idOfColumn) {
						datosList->Remove(dato);
						break;
					}
				}
			}
			showGrid(nullptr);
		}
	}
private: System::Void dataGridView1_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
	int fila = e->RowIndex;
	int data = 0;
	int idOfColumn = Convert::ToInt32(dataGridView1->Rows[fila]->Cells[0]->Value);
	Object^ id = dataGridView1->Rows[fila]->Cells[0]->Value;
	Object^ titulo = dataGridView1->Rows[fila]->Cells[1]->Value;
	Object^ contenido = dataGridView1->Rows[fila]->Cells[2]->Value;
	Object^ categoria = dataGridView1->Rows[fila]->Cells[3]->Value;

	if (id == nullptr){
		String^ query = "INSERT INTO noticias (titulo, contenido, categoria) VALUES ('" +
			titulo + "','" +
			contenido + "','" +
			categoria + "')";
		if (titulo+"" != "" && contenido+"" != "" && categoria+"" != "") {
			data = querySQL(query, 1); // 1: insert
		}
	}
	else if (id != nullptr && titulo+"" == "" && contenido+"" == "" && categoria+"" == "") {
		String^ query = "DELETE FROM noticias WHERE id = " + id;
		data = querySQL(query, 0); // 0 = delete or update
		if (data > 0) {
			for each (Datos ^ dato in datosList) {
				if (dato->id == idOfColumn) {
					datosList->Remove(dato);
					break;
				}
			}
		}
		showGrid(nullptr);
	}
	else{
		String^ query = "UPDATE noticias SET titulo = '" + dataGridView1->Rows[fila]->Cells[1]->Value + "'"
			", contenido = '" + dataGridView1->Rows[fila]->Cells[2]->Value + "'"
			", categoria = '" + dataGridView1->Rows[fila]->Cells[3]->Value + "'"
			" WHERE id = " + dataGridView1->Rows[fila]->Cells[0]->Value;
		data = querySQL(query, 0); // 0 = delete or update
	}
}
};
}

