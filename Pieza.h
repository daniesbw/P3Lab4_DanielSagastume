#ifndef PIEZA_H
#define PIEZA_H
#include <string>
using std::string;
class Pieza
{
	private:
		bool pieza;
		bool reina;
	
	public:
		Pieza();
		Pieza(bool, bool);
		void setReina(bool);
		void setPieza(bool);
		bool getPieza();
		bool getReina();
		string toStringp();
		string toStringr();
		~Pieza();
	protected:
};

#endif