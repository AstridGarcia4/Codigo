#include <iostream>
using namespace std;

class Deporte {
public:
    string nombre, tipo_balon;
    Deporte(string n, string b) : nombre(n), tipo_balon(b) {}
    void descripcion() {
        cout << "Deporte: " << nombre << "\nBalon: " << tipo_balon << endl;
    }
};

class DeportePies : public Deporte {
public:
    string calzado;
    DeportePies(string n, string b, string c) : Deporte(n, b), calzado(c) {}
    void golpear() {
        cout << "Con pies | Calzado: " << calzado << "\n\n";
    }
};

class DeporteManos : public Deporte {
    string proteccion;
public:
    DeporteManos(string n, string b, string p) : Deporte(n, b), proteccion(p) {}
    void golpear() {
        cout << "Con manos | Proteccion: " << proteccion << "\n\n";
    }
};

int main() {
    DeportePies futbol("Futbol", "Balon de cuero", "Tacos");
    DeporteManos voleibol("Voleibol", "Balon liviano", "Rodilleras");

    cout << "DEPORTES CON BALON \n\n";
    futbol.descripcion();    futbol.golpear();
    voleibol.descripcion();  voleibol.golpear();

    return 0;
}

