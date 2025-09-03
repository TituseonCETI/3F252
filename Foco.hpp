typedef bool EstadoFoco;
class Foco
{
private:
   EstadoFoco estado;
public:
    Foco() {}
    Foco() {}
    void Encender(){estado=true;}
    void Apagar(){estado=false;}
    EstadoFisico LeerEstado(){return estado;}
};
