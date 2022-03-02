#include "TXLib.h"

int main()
{
    txCreateWindow (1500, 800);

    txSetColor (TX_WHITE,3);
    txSetFillColor (TX_BLACK);

    int xSnake=300;
    int ySnake=300;
    int xSnake1=xSnake+30;
    int ySnake1=ySnake+30;
    int xSnake2=xSnake+60;
    int ySnake2=xSnake+60;

    HDC back = txLoadImage("Pictures/background.bmp");


    while(!GetAsyncKeyState (VK_ESCAPE))
    {
    txBegin();
    txClear();

    txBitBlt(txDC(), 0, 0, 1500, 800, back);


    txCircle(xSnake,ySnake,15);
    txCircle(xSnake+30,ySnake,15);
    txCircle(xSnake+60,ySnake,15);




    if(GetAsyncKeyState (VK_RIGHT))
    {
     xSnake=xSnake+10;
    }
    if(GetAsyncKeyState (VK_LEFT))
    {
    xSnake=xSnake-10;
    }
    if(GetAsyncKeyState (VK_UP))
    {
    ySnake=ySnake-10;
    }
    if(GetAsyncKeyState (VK_DOWN))
    {
    ySnake=ySnake+10;
    }


    txEnd();


    txSleep(50);
    }

    txDeleteDC(back);



    return 0;
}

