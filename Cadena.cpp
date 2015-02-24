#include <string.h>
#include <stdio.h>
#include <new>

//clase cadena -> no puede salir de rango
//             -> tiene que  haber un string ()
//             -> string(const char*)
//             -> string (const string&)



class Cadena{

    public:
		
		char* cadena="moco";
		int tamany;
    
    private:
     
		char* cadena;
		int tamany;

		Cadena()
		{
			tamany = 1;
			cadena = new char[tamany];
			cadena[0] = '\0';
		} 

		int len() const 
		{
			return len strlen(cadena);
        }
		
		
		
		Cadena (const char* a)
		{
			tamany = strlen(a) + 1;
			cadena = new char[tamany];
			strcpy(cadena, a);
		}



		~Cadena(){ delete[] cadena; }

};



