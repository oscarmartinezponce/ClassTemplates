/* Instrucciones
    1.- Remplazar NAME por NOMBRECLASE
    2.- Remplazar Name por NombreClase
    3.- Remplazar attribute por atributo_principal
    4.- Remplazar Attribute por AtributoPrincipal
    5.- Si es necesario remplazar el tipo de dato  std::string del atributo principal (1 por 1)
    6.- Reemplazar dd/mm/yyyy por fecha actual
    7.- Completar la documentación general
    8.- Eliminar estás instrucciones
*/

#ifndef NAME_H
#define NAME_H

/* ______________________Documentación general del archivo_____________________

Date: 			dd/mm/yyyy
Developer:		Oscar Martinez
Descripción:	Definición de los métodos y atributos de la clase Name

____________________________________________________________________________ */

#include <iostream>

class Name{
	// _____________Definición de los métodos y atributos privados_____________

    private:
		std::string attribute;

    // ________________________________________________________________________


    // _____________Definición de los métodos y atributos públicos_____________

    public:
        //static const int CONTS = 0;

        // _____________________Constructores y destructor_____________________

        Name();
        explicit Name(const std::string&);
		~Name();

        // ____________________________________________________________________


        // ____________________Métodos de interfaz Getters_____________________

		std::string getAttribute() const;

        // ____________________________________________________________________


        // ____________________Métodos de interfaz Setters_____________________

        void setAttribute(const std::string& attribute);

        // ____________________________________________________________________


        // ________________________Métodos comparables_________________________

        /*Name& operator = (const Name&);

		bool operator == (const Name&) const;
		bool operator != (const Name&) const;
		bool operator < (const Name&) const;
		bool operator <= (const Name&) const;
		bool operator > (const Name&) const;
		bool operator >= (const Name&) const;*/

        // ____________________________________________________________________


        // ______________________Métodos control de flujo______________________

        /*friend std::ostream& operator << (std::ostream&, Name&);
		friend std::istream& operator >> (std::istream&, Name&);*/

		// ____________________________________________________________________


		// _________________________Métodos generales__________________________

		std::string str() const;  // T(n) = 4

		// ____________________________________________________________________

    // ________________________________________________________________________

};

#endif // NAME_H
