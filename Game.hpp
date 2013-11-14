#ifndef __GAME_HPP__
#define __GAME_HPP__

class Game {
public:
    Game(void);
    virtual ~Game(void);
    
protected:

private:
    Game(const Game& other);
    Game& operator=(const Game& other);
};

#endif
