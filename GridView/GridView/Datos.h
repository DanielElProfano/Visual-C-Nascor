#pragma once
using namespace System;

ref class Datos
{
public: 
	int id;
	String^ titulo;
	String^ contenido;
	String^ categoria;
	DateTime^ fecha;

	Datos(int fid, String^ ftitulo, String^ fcontenido, String^ fcategoria, DateTime^ ffecha)
	{
		id = fid;
		titulo = ftitulo;
		contenido = fcontenido;
		categoria = fcategoria;
		fecha = ffecha;
	}
};



