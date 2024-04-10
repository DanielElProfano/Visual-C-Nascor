#pragma once

using namespace System;
using namespace System::Windows::Forms;

using namespace MySql::Data::MySqlClient;

MySqlConnection^ crearConexion()
{
	return gcnew MySqlConnection("Server=localhost;Port=3306;Database=nascor;Uid=root;Pwd=password;");
}

MySqlDataReader^ seleccionarDatos()
{
	MySqlConnection^ conection = crearConexion();
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
	MySqlConnection^ conection = crearConexion();
	MySqlCommand^ comando = gcnew MySqlCommand(query, conection);
	try {
		conection->Open();
		switch (accion) {
		case 0: //delete
			dataReturn = comando->ExecuteNonQuery();
			return dataReturn;
			break;
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
