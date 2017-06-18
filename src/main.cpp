//    ************************************************************
//    *                      Box Fractal                         *
//    *                       Jan 2017                           *
//    ************************************************************
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

#include <iostream>
#include <sstream>
#include <fstream>

#include "../include/Fractal.hh"

const double gDisplayx = 1000;
const double gDisplayy = 1000;

int main() {

  sf::RenderWindow window(sf::VideoMode(gDisplayx,gDisplayy), "Fractal");
  window.setFramerateLimit(60);

  //////////////////////////////////////////////////////
  //                   Initialize                     //
  //////////////////////////////////////////////////////
  Fractal frac(gDisplayx, gDisplayy,8,250.0);

  while( window.isOpen() ) {

    sf::Event event;
    while( window.pollEvent(event) ) {
      if( event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape) ) {
	window.close();
      }
    }
    window.clear(sf::Color::Black);
    window.draw(frac);
    window.display();      
  }
  return 0;
}
