#include<Foco.hpp>
#include<iostream>
using namespace std;
int main()
{
  cout << "Hola Mundo" << endl;
  Foco foco;
  foco.Encender();
  cout << "EstadoFoco: " << foco.LeerEstado() << endl;
  return 0;
}
