#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

struct personas{
    int id_del_registro, cedula, edad;
    string nombre;
    float peso, altura;
    char genero[1];

}p;

int main(){
    fstream filebi("./archivo.bin", ios::in | ios::binary);

    filebi.seekg( sizeof(personas) * 1, ios::beg);

    cout<<filebi.tellg()<<endl;

    filebi.read(reinterpret_cast<char *>(&p), sizeof(personas));

    cout<<p.id_del_registro<<" "<<p.nombre<< " "<< p.cedula << " "<< p.edad << " " << p.peso << " " << p.altura << " " << p.genero << endl;

    filebi.close();
    return 0;
}