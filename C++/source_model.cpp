/* Instrucciones
    1.- Remplazar name.h por nombreclase.h
    2.- Remplazar Name por NombreClase
    3.- Remplazar attribute por atributo_principal
    4.- Remplazar Attribute por AtributoPrincipal
    5.- Si es necesario remplazar el tipo de dato  string del atributo principal (1 por 1)
    6.- Reemplazar dd/mm/yyyy por fecha actual
	7.- Completar la documentación general
    8.- Eliminar estás instrucciones
*/

/* ______________________Documentación general del archivo_____________________

Date: 			dd/mm/yyyy
Developer:		Oscar Martinez
Descripción:	Implementación de los métodos de la clase Name

____________________________________________________________________________ */

#include "name.h"

using namespace std;

// ___________________Implementación de los métodos privados___________________

// ____________________________________________________________________________


// ___________________Implementación de los métodos públicos___________________
// _________________________Constructores y destructor_________________________

Name::Name():attribute(""){}

Name::Name(const string& attribute){
	setAttribute(attribute);
}

Name::~Name(){ }

// ____________________________________________________________________________


// ________________________Métodos de interfaz Getters_________________________

string Name::getAttribute() const{
	return attribute;
}

// ____________________________________________________________________________


// ________________________Métodos de interfaz Setters_________________________

void Name::setAttribute(const string& attribute){
	this->attribute = attribute;
}

// ____________________________________________________________________________


// ____________________________Métodos comparables_____________________________

/*Name& Name::operator = (const Name& c){
	attribute = c.attribute;

	return *this;
}


bool Name::operator == (const Name& c) const{
	return attribute == c.attribute;
}

bool Name::operator != (const Name& c) const{
	return attribute != c.attribute;
}

bool Name::operator < (const Name& c) const{
	return attribute < c.attribute;
}

bool Name::operator <= (const Name& c) const{
	return attribute <= c.attribute;
}

bool Name::operator > (const Name& c) const{
	return attribute > c.attribute;
}

bool Name::operator >= (const Name& c) const{
	return attribute >= c.attribute;
}*/

// ____________________________________________________________________________


// __________________________Métodos control de flujo__________________________

/*ostream& Name::operator << (ostream& o, Name& c){
	o << c.attribute;

	return o;
}

istream& Name::operator >> (istream& i, Name& c){
	string str;

	getline(i, str);
	c.attribute = str.c_str();
	//cin.ignore();
	//getline(i, n.attribute2);

	return i;
}*/

// ____________________________________________________________________________


// _____________________________Métodos generales______________________________

string Name::str() const{
    /* Descripción: */
	return "Attribute: " + attribute;
}

// ____________________________________________________________________________

// ____________________________________________________________________________
