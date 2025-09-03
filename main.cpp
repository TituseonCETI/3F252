#include<Foco.hpp>
#include<iostream>
using namespace std;
int main(int argc, char const *arg[])
{
  cout << "Hola Mundo" << endl;
  Foco foco;
  foco.Encender();
  cout << "EstadoFisico: " << foco.LeerEstado() << endl;
  return 0;
}
