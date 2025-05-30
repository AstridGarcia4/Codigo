#include <iostream>
#include <string>
using namespace std;

class Animales {
public:
    string color, especie;
    string patas, colas;

    void mostrar() const {
        cout << "\nEspecie: " << especie
             << "\nColor: " << color
             << "\nPatas: " << patas
             << "\nColas: " << colas << endl;
    }
};

class Vertebrado : public Animales {
public:
    Vertebrado() { patas = "2"; colas = "1"; }
};

class Invertebrado : public Animales {
public:
    Invertebrado() { patas = "5"; colas = "0"; }
};

int main() {
    Vertebrado aguila;
    aguila.color = "Cafe con blanco";
    aguila.especie = "Aguila calva";

    Invertebrado estrella;
    estrella.color = "Roja";
    estrella.especie = "Estrella de mar";

    cout << "\nVERTEBRADO";  aguila.mostrar();
    cout << "\nINVERTEBRADO"; estrella.mostrar();

    return 0;
}

