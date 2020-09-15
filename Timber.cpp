#include "SFML/Graphics.hpp"
using namespace sf;


int main(){
    VideoMode vm(1920,1080);

    RenderWindow window(vm,"Timber!!!",Style::Default);

    Texture bgTexture;
    bgTexture.loadFromFile("graphics/background.png");

    Texture beeTex;
    beeTex.loadFromFile("graphics/bee.png");

    Texture treeTex;
    treeTex.loadFromFile("graphics/tree.png");

    Sprite bgSprite;
    bgSprite.setTexture(bgTexture);
    bgSprite.setPosition(0,0);

    Sprite beeSprite;
    beeSprite.setTexture(beeTex);
    beeSprite.setPosition(200,200);

    Sprite treeSprite;
    treeSprite.setTexture(treeTex);
    treeSprite.setPosition(300,0);

    int x = 0;

    while (window.isOpen()){

        if(Keyboard::isKeyPressed(Keyboard::Escape)){
            window.close();
        }


        window.clear();

        window.draw(bgSprite);
        window.draw(treeSprite);
        
        beeSprite.setPosition(x,200);
        window.draw(beeSprite);
        

        window.display();
        x++;

    }

    return 0;
}