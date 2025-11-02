#pragma once
#include <vector>
#include "Dibujo.hpp"

class Universo {
public:
    int x, y, ancho, alto;
    Dibujo fondo;
    std::vector<Dibujo> objetos;

    Universo(int x, int y, int ancho, int alto, ftxui::Color color = ftxui::Color::Blue)
        : x(x), y(y), ancho(ancho), alto(alto),
          fondo(x, y, GenerarFondoEstelar(ancho, alto), color) {}

    static std::vector<std::u32string> GenerarFondoEstelar(int ancho, int alto) {
        std::vector<std::u32string> fondo;
        for (int i = 0; i < alto; ++i) {
            std::u32string fila;
            for (int j = 0; j < ancho; ++j) {
                fila += (rand() % 50 == 0) ? U'*' : U' ';
            }
            fondo.push_back(fila);
        }
        return fondo;
    }

    void AgregarObjeto(const Dibujo& obj) {
        objetos.push_back(obj);
    }

    void Dibujar(ftxui::Screen& screen) const {
        fondo.Dibujar(screen);
        for (const auto& obj : objetos) {
            obj.Dibujar(screen);
        }
    }
};