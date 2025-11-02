#include <iostream>
#include <string>
#include <list>
using namespace std;

// Clase base
class Humano {
private:
    string nombre;
    int edad;
public:
    // Constructor
    Humano(string _nombre = "SinNombre", int _edad = 0)
        : nombre(_nombre), edad(_edad) {}

    // Funciones miembro
    string LeerNombre();
    int LeerEdad();
};

// Clase derivada Alumno
class Alumno : public Humano {
private:
    int registro;
public:
    // Constructor
    Alumno(string _nombre = "Alumno", int _edad = 0, int _registro = 0)
        : Humano(_nombre, _edad), registro(_registro) {}

    int LeerRegistro();
};

// Clase derivada Empleado
class Empleado : public Humano {
private:
    long noEmpleado;
public:
    // Constructor
    Empleado(string _nombre = "Empleado", int _edad = 0, long _noEmpleado = 0)
        : Humano(_nombre, _edad), noEmpleado(_noEmpleado) {}

    long LeerNumeroEmpleado();
};

// Definiciones de funciones
string Humano::LeerNombre() {
    return nombre;
}

int Humano::LeerEdad() {
    return edad;
}

int Alumno::LeerRegistro() {
    return registro;
}

long Empleado::LeerNumeroEmpleado() {
    return noEmpleado;
}

// Función principal
int main() {
    Humano* humano = nullptr;
    Alumno* alumno = new Alumno("Carlos", 23, 123);
    Empleado* empleado = new Empleado("Ana", 35, 4567);

    humano = alumno;
    cout << "Edad del alumno: " << humano->LeerEdad() << endl;

    humano = empleado;
    cout << "Edad del empleado: " << humano->LeerEdad() << endl;

    list<Humano*> ListaHumanos;
    ListaHumanos.emplace_back(new Alumno("Juan", 12, 111));
    ListaHumanos.emplace_back(new Alumno("Pedro", 13, 112));
    ListaHumanos.emplace_back(new Alumno("Luis", 14, 113));
    ListaHumanos.emplace_back(new Alumno("Ana", 15, 114));
    ListaHumanos.emplace_back(new Alumno("Maria", 16, 115));
    ListaHumanos.emplace_back(new Empleado("Jose", 22, 211));
    ListaHumanos.emplace_back(new Empleado("Pablo", 23, 212));
    ListaHumanos.emplace_back(new Empleado("Mario", 24, 213));
    ListaHumanos.emplace_back(new Empleado("Lucia", 25, 214));
    ListaHumanos.emplace_back(new Empleado("Laura", 26, 215));

    for (auto& humano : ListaHumanos) {
        cout << "Nombre: " << humano->LeerNombre() << endl;
    }

    // Liberar memoria
    for (auto& humano : ListaHumanos) {
        delete humano;
    }

    delete alumno;
    delete empleado;

    return 0;
}
