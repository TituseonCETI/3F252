#include <iostream>
#include <string>
#include<list>
using namespace std;

class Humano{
    private:
        string nombre;
        int edad;
    public: 
    string LeerNobre();
    int LeerEdad();

};

class Alumno : public Humano{
    private:
        int registro;
    public:
    int LeerRegistro();
};

class Empleado : public Humano{
    private:
        long noEmpleado;
    public:
        long LeerNumeroEmpleado();

};
int main(int argc, char const *argv[])
{

    Humano* humano = NULL;
    Alumno* alumno = new Alumno();
    Empleado* empleado = new Empleado();
    
    humano = alumno;
    humano->LeerEdad();

    humano = empleado;
    humano->LeerEdad();

list<Humano*> Listahumanos;
Listahumanos.emplace_back(new Alumno());
Listahumanos.emplace_back(new Alumno());
Listahumanos.emplace_back(new Alumno());
Listahumanos.emplace_back(new Alumno());
Listahumanos.emplace_back(new Alumno());
Listahumanos.emplace_back(new Alumno());
Listahumanos.emplace_back(new Empleado());
Listahumanos.emplace_back(new Empleado());
Listahumanos.emplace_back(new Empleado());
Listahumanos.emplace_back(new Empleado());


for (auto &&humano : Listahumanos)
{
  cout << humano->LeerNobre() << endl;   
}

    return 0;
};