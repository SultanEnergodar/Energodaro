#include "TXLib.h"
#include <stdlib.h>

void carright(int x, int y)
{
    txSetColour(TX_BLACK);
    txSetFillColour(RGB(247, 15, 15));
    POINT ostov[7] = {{x, y}, {x+20, y-12}, {x+55, y-12}, {x+75, y}, {x+95, y}, {x+95, y+17}, {x, y+17}};
    txPolygon (ostov, 7);
    POINT dver[5] = {{x+68, y}, {x+52, y-10}, {x+40, y-10}, {x+40, y+15}, {x+68, y+15}};
    txPolygon (dver, 5);
    txSetColour(RGB(16, 176, 235), 1);
    txSetFillColour (RGB(16, 176, 235));
    POINT stecl[4] = {{x+64, y}, {x+49, y-8}, {x+43, y-8}, {x+43, y}};
    txPolygon (stecl, 4);
    POINT stecl2[4] = {{x+37, y-8}, {x+20, y-8}, {x+5, y}, {x+37, y}};
    txPolygon (stecl2, 4);
    txSetColour(TX_BLACK);
    txSetFillColour(TX_BLACK);
    txCircle(x+20, y+17, 10);
    txCircle(x+75, y+17, 10);
    txSetFillColour(TX_WHITE);
    txCircle (x+20, y+17, 7);
    txCircle (x+75, y+17, 7);
    txSetFillColour(RGB(234, 255, 0));
    txRectangle(x+95, y+4, x+90, y+10);
}
void carleft(int x, int y)
{
    txSetColour(TX_BLACK);
    txSetFillColour(RGB(247, 15, 15));
    POINT ostov[7] = {{x, y}, {x-20, y-12}, {x-55, y-12}, {x-75, y}, {x-95, y}, {x-95, y+17}, {x, y+17}};
    txPolygon (ostov, 7);
    POINT dver[5] = {{x-68, y}, {x-52, y-10}, {x-40, y-10}, {x-40, y+15}, {x-68, y+15}};
    txPolygon (dver, 5);
    txSetColour(RGB(16, 176, 235), 1);
    txSetFillColour (RGB(16, 176, 235));
    POINT stecl[4] = {{x-64, y}, {x-49, y-8}, {x-43, y-8}, {x-43, y}};
    txPolygon (stecl, 4);
    POINT stecl2[4] = {{x-37, y-8}, {x-20, y-8}, {x-5, y}, {x-37, y}};
    txPolygon (stecl2, 4);
    txSetColour(TX_BLACK);
    txSetFillColour(TX_BLACK);
    txCircle(x-20, y+17, 10);
    txCircle(x-75, y+17, 10);
    txSetFillColour(TX_WHITE);
    txCircle (x-20, y+17, 7);
    txCircle (x-75, y+17, 7);
    txSetFillColour(RGB(234, 255, 0));
    txRectangle(x-95, y+4, x-90, y+10);
}
void paintBlock(int x, int y, int z, int nhouse, int khouse)
{
    for (int i=1; i<=nhouse; i++)
    {
        for (z=1; z<=khouse; z++)
        {
            txSetFillColor (TX_ORANGE);
            txSetColor (TX_BLACK);
            txRectangle(x, y, x+60, y+70);
            txSetFillColor (TX_LIGHTBLUE);
            txRectangle(x+20, y+15, x+40, y+45);
            txLine(x+30, y+15, x+30, y+45);
            txLine(x+20, y+30, x+30, y+30);
            x+=60;
        }
        x=30;
        y+=70;
    }
}
void paintBus(int x, int y)
{
    txSetColour (TX_BLACK);
    txSetFillColour (TX_ORANGE);
    txRectangle (x,y,x+120,y+50);
    txSetFillColour(RGB(235, 111, 16));
    txRectangle (x+73,y+15,x+89,y+50);
    txSetFillColour (RGB(16, 176, 235));
    txRectangle (x+75,y+17,x+87,y+31);
    txSetFillColour(TX_BLACK);
    txCircle (x+20, y+50, 13);
    txCircle (x+100, y+50, 13);
    txSetFillColour(TX_WHITE);
    txCircle (x+20, y+50, 7);
    txCircle (x+100, y+50, 7);
    txSetFillColour (RGB(16, 176, 235));
    txRectangle (x+5,y+10,x+35,y+33);
    txRectangle (x+40,y+10,x+70,y+33);
    txRectangle (x+110,y+10,x+120,y+33);
    txSetFillColour(RGB(234, 255, 0));
    txRectangle (x+115,y+40,x+120,y+45);
    txSetColour(TX_BLACK);
}
void Tree (int x,int y)
{
    txSetFillColor (TX_LIGHTGREEN);
    txSetColor (RGB (0, 0, 0), 5);
    txLine (x,y,x,y+80);
    txSetColor (RGB ( 0, 255, 128), 5);
    txCircle (x,y-10,25);
    txCircle (x-25,y,25);
    txCircle (x+20,y-10,25);
    txSetColor (RGB (0, 0, 0), 5);
    txLine (x,y+60,x+20,y+40);
}
void paintTrees(int x, int y, int siz)
{
    int randomc;
    randomc = rand() % 3;
    switch(randomc)
    {
    case 0:
        txSetColor (TX_LIGHTGREEN);
        txSetFillColor (TX_LIGHTGREEN);
        break;
    case 1:
        txSetColor (TX_RED);
        txSetFillColor (TX_RED);
        break;
    case 2:
        txSetColor (TX_YELLOW);
        txSetFillColor (TX_YELLOW);
        break;

    }
    txCircle (x, y, 15*siz);
    randomc = rand() % 3;
    switch(randomc)
    {
    case 0:
        txSetColor (TX_LIGHTGREEN);
        txSetFillColor (TX_LIGHTGREEN);
        break;
    case 1:
        txSetColor (TX_RED);
        txSetFillColor (TX_RED);
        break;
    case 2:
        txSetColor (TX_YELLOW);
        txSetFillColor (TX_YELLOW);
        break;

    }
    txCircle (x+7, y+5, 15*siz);
    randomc = rand() % 3;
    switch(randomc)
    {
    case 0:
        txSetColor (TX_LIGHTGREEN);
        txSetFillColor (TX_LIGHTGREEN);
        break;
    case 1:
        txSetColor (TX_RED);
        txSetFillColor (TX_RED);
        break;
    case 2:
        txSetColor (TX_YELLOW);
        txSetFillColor (TX_YELLOW);
        break;

    }
    txCircle (x-7, y+10, 15*siz);
    txSetColor (TX_BROWN, 5);
    txLine(x, y, x, y+50);
    txLine(x, y+20, x+10, y+5);
    txLine(x, y+30, x-10, y+10);
}
void paintRoad (int a, int b)
{
    txSetFillColour(RGB(99, 90, 90));
    txSetColour(RGB(99, 90, 90));
    txRectangle(0, 608, 1024, 768);
    txSetFillColour(TX_WHITE);
    for (int i=1; i<=7; i++)
    {
        txRectangle (a, b, a+120, b+10);
        a+=145;
    }
}
void paintOblake(int x, int y)
{
    txSetFillColour(TX_WHITE);
    txSetColor(TX_WHITE);
    txCircle (x+35, y+15, 22);
    txCircle (x-5, y+12.5, 17);
    txCircle (x-40, y+13.5, 15);
    txCircle (x+15, y, 30);
}
int main()
{
    int a, b, d, i, khouse,  nhouse, kTrees, nTrees, u, x, y, z, siz, random, rale, start;
    cout << "¬ведите количество этажей (не больше 6): ";
    cin >> nhouse;
    cout << "¬ведите количество подъездов (не больше 7): ";
    cin >> khouse;
    cout << "¬ведите количество р€дов деревьев (не больше 6): ";
    cin >> nTrees;
    cout << "¬ведите количество деревьев в р€ду (не больше 8): ";
    cin >> kTrees;
    if (nhouse > 6)
        nhouse = 6;
    if (khouse > 7)
        khouse = 7;
    if (nTrees > 6)
        nTrees = 6;
    if (kTrees > 8)
        kTrees = 8;
    txCreateWindow (1280,768);
    txSetFillColor (TX_LIGHTBLUE);
    txSetColor (TX_LIGHTBLUE);
    txRectangle(0, 0, 1024, 200);
    txSetFillColor (TX_GREEN);
    txSetColor (TX_GREEN);
    RECT areaStop = { 1044, 20,1260,100};
    RECT areaRight = { 1044, 120,1260,200};
    RECT areaLeft = { 1044, 220,1260,300};
    RECT areaUp = { 1044, 320,1260,400};
    RECT areaDown = { 1044, 420,1260,500};
    RECT areaStart = { 1044, 620,1260,700};
    txRectangle(0, 200, 1024, 768);
    txSetFillColor (TX_YELLOW);
    txCircle(905, 100, 70);
    y=200;
    x=525;
    for (a=1; a<=nTrees; a++)
    {
        for (i=1; i<=kTrees; i++)
        {
            random = rand() % 2 +1;
            siz = random;
            paintTrees(x,y,siz);
            x=x+65;
        }
        y+=60;
        x=525;
    }
    x=20;
    y=40;
    for (i=1; i<=7; i++)
    {
        paintOblake(x,y);
        x=x+160;
        y+=10;
    }
    a=0;
    b=688;
    paintRoad(a, b);
    x=30;
    y=120;
    paintBlock(x, y, z, nhouse, khouse);
    txSetFillColour (TX_GREEN);
    txSetColour (TX_BLACK);
    txRectangle(1044, 620,1260,700);
    txTextOut (1045, 650, "Start");
    for (a=1; 1==1; a+=0)
    {
        if(txMouseButtons() & 1)
        {
            if (In (txMousePos(), areaStart))
            {
                start=1;
            }
        }
        if (start==1)
        {
            x=0;
            y=620;
            carright(x,y);
            u = 0;
            rale = 1;
            for (i=1; 1==1; x +=u)
            {
                txBegin();
                txSetFillColor (TX_GREEN);
                txSetColor (TX_GREEN);
                txRectangle(0, 580, 1024, 608);
                txSetFillColour(RGB(99, 90, 90));
                paintRoad(a, b);
                if (rale==1)
                    carright(x, y);
                else
                    carleft(x, y);
                txSetFillColor (TX_BLACK);
                txRectangle(1024, 0,1280,768);
                txSetFillColor (TX_GRAY);
                txRectangle(1044, 20,1260,100);
                txRectangle(1044, 420,1260,500);
                txRectangle(1044, 320,1260,400);
                txSelectFont ("Comic Sans MS", 29);
                txTextOut (1045, 50, "Stop");
                txRectangle(1044, 120,1260,200);
                txTextOut (1045, 150, "Ride right");
                txRectangle(1044, 220,1260,300);
                txTextOut (1045, 250, "Ride left");
                txTextOut (1045, 350, "Ride up");
                txTextOut (1045, 450, "Ride down");
                if (x>=1280)
                {
                    x=-95;
                    rale=1;
                }
                if (x<-95)
                {
                    x=1280;
                    rale=0;
                }
                txSleep(0);
                if (u >=5)
                {
                    if (rale == 0)
                        u=3;
                    else
                        u=5;
                }
                if (u <=-3)
                {
                    if (rale == 0)
                    {
                        if (u<=-5)
                            u=-5;
                    }
                    else
                        u=-3;
                }
                if(GetAsyncKeyState('1'))
                {
                    u=0;
                }
                if(GetAsyncKeyState(VK_ESCAPE))
                {
                    break;
                    return 0;
                }
                if(GetAsyncKeyState('3'))
                {
                    y+=1;
                }
                if(GetAsyncKeyState('4'))
                {
                    y=y-1;
                }

                if(y==600)
                {
                    y=y+1;
                }
                if(y==705)
                {
                    y=y-1;
                }

                if(txMouseButtons() & 1)
                {
                    if (In (txMousePos(), areaStop))
                    {
                        u=0;
                    }
                }

                txRectangle(1044, 120,1260,200);

                if(txMouseButtons() & 1)
                {
                    if (In (txMousePos(), areaRight))
                    {
                        u+=1;
                    }
                }

                if(txMouseButtons() & 1)
                {
                    if (In (txMousePos(), areaLeft))
                    {
                        u-=1;
                    }
                }

                if(txMouseButtons() & 1)
                {
                    if (u!=0)
                    {
                        if (In (txMousePos(), areaUp))
                        {
                            y-=1;
                        }
                    }
                }

                if(txMouseButtons() & 1)
                {
                    if (u!=0)
                    {
                        if (In (txMousePos(), areaDown))
                        {
                            y+=1;
                        }
                    }
                }

            }
        }
    }
}

