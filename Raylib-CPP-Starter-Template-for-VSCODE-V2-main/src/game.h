#pragma once
#include "grid.h"
#include "blocks.cpp"
class Game{
public:
    Game();
    ~Game();
    void Draw();
    void HandleInput();
    void MoveBlockDown();
    bool gameOver;
    int score;
    Music music;

private:
    Grid grid;
    void MoveBlockLeft();
    void MoveBlockRight();
    Block GetRandomBlock();
    std::vector<Block> GetAllBlocks();
    bool IsBlockOutside();
    void RotateBlock();
    void LockBlock();
    bool BlockFits();
    void Reset();
    std::vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;
    void UpdateScore(int linesCleared,int moveDownPoints);
    Sound rotateSound;
    Sound clearSound;
};