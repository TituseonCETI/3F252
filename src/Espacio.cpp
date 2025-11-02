#include <ftxui/screen/screen.hpp>
#include <thread>
#include <chrono>
#include <iostream>
#include <Dibujo.hpp>
#include <GestorDibujos.hpp>
#include <Universo.hpp>
using namespace ftxui;

int main() {
    auto screen = Screen::Create(Dimension::Fixed(130), Dimension::Fixed(100));

    const std::vector<std::u32string> navealienigena= {
    U"            ___       ",
    U"        ___/ o \\___   ",
    U"       /...'---'...\\  ", 
    U"      / 0 0 0 0 0 0 \\ ",
    U"       '--_______--'  "
                
    };

    const std::vector<std::u32string> alien = {
        U" (o_o) Wuaaaaaa ",
        U"/|_|\\ ",
        U" / \\  "
    };

    const std::vector<std::u32string> astronauta = {


U"          ___   Haaaaaa",       
U"         (o_o)   ",
U"         |-o-|   ",
U"         |_|_|  ",
U"         /   \\   "                             
                
};

const std::vector<std::u32string> astronautaBrazos = {

 U"      \\     / "
};

const std::vector<std::u32string> Frasesol = {

   U"   ___   __  ___  ___     _______  ___    |   ___ ",
   U"  |___  |__   |  |   ||   |  |  | |   ||  |  |   ||",
   U"  |___   __|  |  |___||   |  |  | |___||  |  |___||  "
};


const std::vector<std::u32string> carro = {
  
U"     Nuuuummm          ",
U"              _______    ",
U"          __.//_||_| \\  ",
U"         /_ _ _ _   __)  ",
U"        '-(_)----(_)-´============  "

};

const std::vector<std::u32string> helicoptero = {


U" Chucuchucuchucu   *>=====[_]L)   ",
U"                          -'-`-    "

};

const std::vector<std::u32string> helices = {

     U"       -----|----- "

};

const std::vector<std::u32string> estrella = {

        
    U"             *x* ",
    U"             * * "
    };


const std::vector<std::u32string> sol = {
                                                                              
                                                                                        
U"                               .        ..          .                       ",            
U"                                :        .                                  ",           
U"                                ..       .. .           .                   ",            
U"                                .:.  .   ...:     .   .:..;                 ",            
U"                          .      .;....   ;.;.   .. .;....                  ",            
U"                            .     +;+:;: .x;+:  ;:..::;..                   ",            
U"                ..         . ::.  ::;::;++;;;x:x+::;;+.;    ..              ",            
U"                   ..        ..;+x;:..:::++xx+:X;:;;;;:X  .:.           .   ",            
U"                     ...;.+:;+..:;+:;+XXX+;:;;:X+X+;;.:;;x+          .x     ",            
U"                       .:...:;:::::;x;.   ........:;:;::;+x    :x+;xx       ",            
U"                         ::.:;+++++;:.........:::....++++..::......         ",            
U"                     ..   ;:;:;++x. ..:;+ ..:;;::::.:.;::+:...;++           ",            
U"                       .;;;::::;+:;x+;.............:::::;;;;+;;;:.          ",            
U"                    .::..:::;;x+..::................:::.;;++;:              ",            
U"                        :;;;:;:++.:...::...........::....:+.:;;;;;...       ",             
U"                          .:.;;:.::;................:::;+X;;+:.             ",            
U"                        ;x;:.;;;.::;:::.............:::.;+++::;;;....       ",            
U"                      :..::;;+;;:.:... ..........::::..:;:....;             ",            
U"                    ..:Xxxx++;++x+....;.........::::::;;++++x++xx+.         ",            
U"                 .+..+.      .:.......:.;;;;;;;;::::::+;;+++XXXxXXXXX.      ",            
U"                 ..       .xX+;;;++x++::...:::.....;+;:;++;:         .x;    ",            
U"                          X.::+x.:;+++xXXX.;..+x+++++;;;;..:::              ",            
U"                        .:.    ::x+;+:..;++xx+x+;;;..;;++;:+::...           ",           
U"                       ..      ;;.;+x..;+;XXXxXx;;:::;;x .                  ",          
U"                     ..       .+..   :;+;  :+  X;;;+;;  .. .                ",            
U"                    .         ..     ;+.   .+   +. .;X+  ..                 ",            
U"                             ..      ;.     :    ;  ..x+                    ",            
U"                                    ..      .         . +                   ",            
U"                                    .       .          ; .                  ",            
U"                                   .                                        "
};

    GestorDibujos gestor;
    gestor.Agregar(Dibujo(0, 5, navealienigena, ftxui::Color::Yellow));
    gestor.Agregar(Dibujo(0, 10, alien, ftxui::Color::Green)); 
    gestor.Agregar(Dibujo(0, 15, astronauta, ftxui::Color::White));
    gestor.Agregar(Dibujo(0, 15, astronautaBrazos, ftxui::Color::White));
    gestor.Agregar(Dibujo(40, 0, Frasesol, ftxui::Color::Red));
    gestor.Agregar(Dibujo(60, 0, carro, ftxui::Color::Orange1));
    gestor.Agregar(Dibujo(2, 12, helicoptero, ftxui::Color::Plum1));
    gestor.Agregar(Dibujo(17, 11, helices, ftxui::Color::Plum1));
    gestor.Agregar(Dibujo(21, 5, estrella, ftxui::Color::Plum1));
    gestor.Agregar(Dibujo(19, 6, estrella, ftxui::Color::Plum1));
    gestor.Agregar(Dibujo(34, 8, estrella, ftxui::Color::Plum1));
    gestor.Agregar(Dibujo(36, 20, estrella, ftxui::Color::Plum1));
    gestor.Agregar(Dibujo(40, 30, estrella, ftxui::Color::Plum1));
    gestor.Agregar(Dibujo(28, 14, estrella, ftxui::Color::Plum1));
    gestor.Agregar(Dibujo(14, 0, estrella, ftxui::Color::Plum1));
    gestor.Agregar(Dibujo(0,30 , estrella, ftxui::Color::Plum1));
    gestor.Agregar(Dibujo(0,50 , estrella, ftxui::Color::Plum1));
    gestor.Agregar(Dibujo(25, 0, estrella, ftxui::Color::Plum1));
    gestor.Agregar(Dibujo(31, 27, estrella, ftxui::Color::Plum1));
    gestor.Agregar(Dibujo(45, 20, estrella, ftxui::Color::Plum1));
    gestor.Agregar(Dibujo(34, 40, estrella, ftxui::Color::Plum1));
    gestor.Agregar(Dibujo(16,4 , estrella, ftxui::Color::Plum1));
    gestor.Agregar(Dibujo(12, 14, estrella, ftxui::Color::Plum1));
    
    Universo universo(0, 0, 120, 100, ftxui::Color::Blue);
    gestor.Agregar(Dibujo(50,0, sol, ftxui::Color::Red));
     

    for (int frame = 0; frame < 300; ++frame) {
    
  screen.Clear();

    universo.Dibujar(screen);        
    gestor.DibujarTodos(screen);     

         gestor.dibujos[0].x = 0 + (frame % 70); 
        gestor.dibujos[1].y = 0 + (frame % 5);  
        gestor.dibujos[1].x = 0 + (frame % 20);
        gestor.dibujos[2].x = 0 + (frame % 70);
        gestor.dibujos[3].x = 3 + (frame % 70);
        gestor.dibujos[3].y = 15 + (frame % 2);
        gestor.dibujos[4].x = 160 - (frame % 100);
        gestor.dibujos[5].x = 50 - (frame % 40);
        gestor.dibujos[6].x = 2 + (frame % 65); 
        gestor.dibujos[7].x = 17 + (frame % 65);
        gestor.dibujos[7].y = 10 + (frame % 2);

   

    std::cout << screen.ToString();
    std::cout << screen.ResetPosition();
    std::cout << std::flush;

    std::this_thread::sleep_for(std::chrono::milliseconds(120));
    }

    return 0;
}