#pragma once
#include "Edificio.h"
#include "Recursos.h"


class Fabrica : public Edificio
{
protected:
	Type tipo;
	Recursos produccion;
	unsigned int p_subirNivel; 
	//Precio de oro que cuesta subir de nivel;

public:
	Fabrica(Type _tipo, unsigned int nivel);
	/*	Seg�n quieres:
			tipo==oro -> Fabrica de oro
			tipo==comida -> Fabrica de comida
			tipo==Hierro -> Fabrica de hierro
			*/
	virtual ~Fabrica(void);
	//void subirNivel(int tipo=0); Creo que la has puesto duplicada
	//falta implementar el rollo de cobrar el subir de nivel
	void Dibuja(Color equipo=0);
	void Timer (float t);
	void subirNivel();

	friend class Interaccion;
};

