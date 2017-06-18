#ifndef FRACTAL_HH
#define FRACTAL_HH

#include <SFML/Graphics.hpp>

#include <vector>

class Fractal : public sf::Drawable, public sf::Transformable{

private:
  double fDisx, fDisy;
  int fIterations;
  double fArea;

  double fL;
  sf::Vector2f fSize;
  std::vector<sf::RectangleShape> fBoxes;
  sf::Vector2f fOrigin;

  static long int fBoxN;
  
public:
  Fractal(double,double,int,double);
  ~Fractal() {};

  void draw(sf::RenderTarget&, sf::RenderStates) const;
  void generateFractal();

  std::vector<sf::Color> fColors;
};
#endif
