//
// Created by hgarn on 7/6/2024.
//

#ifndef CMAKESFMLPROJECT_TILE_H
#define CMAKESFMLPROJECT_TILE_H

#include "SFML/Graphics.hpp"

class tile : public sf::Drawable{
private:
    float positionX = sf::Mouse::getPosition().x;
    float poistionY = sf::Mouse::getPosition().y;
    sf::RectangleShape tileObject;
    enum TILE_TYPE{
        GRASS,
        WATER,
        LAVA,
        GROUND
    };
    int currentTile;

public:
    void setTile(sf::RectangleShape _tileObject);
    sf::RectangleShape& getTileObject();
    void eraseTileObject();
    void paintTileObject();


    tile();
    ~tile();

protected:
//    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const override {
//        target.draw(tile, states);
//    }

};


#endif //CMAKESFMLPROJECT_TILE_H
