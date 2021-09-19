#include <cstdio>
#include <windows.h>

#define qC 262//q 前缀为低音，1 后缀为高音，s前缀为半音阶
#define qD 294
#define qE 330
#define qF 349
#define qG 392
#define qA 440
#define qB 494
#define C 523
#define D 578
#define E 659
#define F 698
#define G 784
#define A 880
#define B 988
#define C1 1046
#define D1 1175
#define E1 1318
#define F1 1480
#define G1 1568
#define A1 1760
#define B1 1976
#define sqC 277
#define sqD 311
#define sqF 370
#define sqG 415
#define sqA 466
#define sC 554
#define sD 622
#define sF 740
#define sG 831
#define sA 932
#define sC1 1046
#define sD1 1245
#define sF1 1480
#define sG1 1661
#define sA1 1865
/*
天空之城 4/4 Beat Tempo:96 行板（Andante）（76-108 bpm）
半拍 0，3125 八分音符    ♪
一拍 0.625秒 （四分音符）♩=♪♪
两拍 1，25秒 （半分音符） =♩♩
一小节 2，5秒 （全音符） =♩♩♩♩
Beep（A，B）// A音调 B时长（ms）
#define voll 1600*1.25 //四拍
#define B 800*1.25  //两拍
#define C 400*1.25  //一拍
#define D 200*1.25  //半拍
#define E 100*1.25  //1/4拍
#define F 50*1.25   //1/8拍

*/
int main(){
    //**全音符*/
    int voll = 625,
    //**半分音符*/
    halb = 312,
    //**pause*//
    pause = 128;

    Beep(A,halb);Beep(B,halb);Sleep(pause);
    Beep(C1,voll+halb);Beep(B,halb);Sleep(pause);Beep(C1,voll);Sleep(pause);Beep(E1,voll);Sleep(pause);
    Beep(B,3*voll);Sleep(pause);Beep(E,halb);Beep(E,halb);
    Beep(A,halb+voll);Beep(G,halb);Sleep(pause);Beep(A,voll);Sleep(pause);Beep(C1,voll);Sleep(pause);
    Beep(G,2*voll);Sleep(pause);Sleep(voll);Beep(E,halb);Sleep(pause/2);Beep(E,halb);Sleep(pause/2);
    Beep(F,voll+halb);Beep(E,halb);Sleep(pause);Beep(F,halb);Beep(C1,halb+voll);Sleep(pause);
    Beep(E,2*voll);Sleep(pause);Sleep(halb);Beep(C1,halb);Sleep(pause/2);Beep(C1,halb);Sleep(pause/2);Beep(C1,halb);Sleep(pause/2);
    Beep(B,halb+voll);Beep(sF,halb);Sleep(pause);Beep(sF,voll);Beep(B,voll);Sleep(pause);
    Beep(B,2*voll);Sleep(pause);Sleep(voll);Beep(A,halb);Beep(B,halb);Sleep(pause);
    Beep(C1,voll+halb);Beep(B,halb);Sleep(pause);Beep(C1,voll);Sleep(pause);Beep(E1,voll);Sleep(pause);
    Beep(B,2*voll);Sleep(pause);Sleep(voll);Beep(E,halb);Sleep(20);Beep(E,halb);Sleep(pause);
    Beep(A,voll+halb);Beep(G,halb);Sleep(pause);Beep(A,voll);Sleep(pause);Beep(C1,voll);Sleep(pause);
    Beep(G,3*voll);Sleep(pause+halb);Beep(E,halb);Sleep(pause/2);
    Beep(F,voll);Sleep(pause);Beep(C1,halb);Beep(B,halb);Sleep(20);Beep(B,voll);Sleep(pause);Beep(C1,voll);Sleep(pause);
    Beep(D1,halb);Sleep(20);Beep(D1,halb);Sleep(20);Beep(E1,halb);Sleep(pause/2);Beep(C1,voll);Sleep(pause+voll);
    Beep(C1,voll);Beep(B,halb);Sleep(pause);Beep(A,halb);Sleep(20);Beep(A,halb);Sleep(pause);Beep(B,voll);Sleep(pause);Beep(sG,voll);Sleep(pause);
    Beep(sG,2*voll);Sleep(pause+voll);Beep(C1,halb);Beep(D1,halb);Sleep(pause);
    Beep(E1,voll+halb);Beep(D1,halb);Sleep(pause);Beep(E1,voll);Sleep(pause);Beep(F1,voll);Sleep(pause);
    Beep(D1,2*voll);Sleep(voll+pause);Beep(G,halb);Sleep(20);Beep(G,halb);Sleep(pause);
    Beep(C1,halb);Beep(B,halb);Sleep(pause);Beep(C1,voll);Sleep(pause);Beep(E1,voll);Sleep(pause);
    Beep(E1,2*voll);Sleep(pause+2*voll);
    Beep(A,halb);Beep(B,halb);Sleep(pause);Beep(C1,voll);Sleep(pause);Beep(B,voll);Sleep(pause);Beep(D1,halb);Sleep(20);Beep(D1,halb);Sleep(pause);
    Beep(C1,voll+halb);Beep(G,halb);Sleep(20);Beep(G,voll);Sleep(voll+pause);
    Beep(F1,voll);Sleep(pause);Beep(E1,voll);Sleep(pause);Beep(D1,voll);Sleep(pause);Beep(C1,voll);Sleep(pause);
    Beep(E1,4*voll);
    Beep(E1,voll*2);Sleep(voll+pause);Beep(E1,voll);Sleep(pause);
    Beep(A1,2*voll);Sleep(pause);Beep(G1,voll);Sleep(pause);Beep(G1,voll);Sleep(pause);
    Beep(E1,halb);Sleep(pause/2);Beep(D1,halb);Sleep(pause);Beep(C1,voll);Sleep(pause+halb);Beep(C1,halb);Sleep(pause);
    Beep(D1,voll);Sleep(pause);Beep(C1,halb);Beep(D1,halb);Sleep(20);Beep(D1,halb);Sleep(pause);Beep(G1,voll);Sleep(pause);
    Beep(E1,2*voll);Sleep(pause+voll);Beep(E,voll);Sleep(pause);
    Beep(A1,2*voll);Sleep(pause);Beep(G1,2*voll);Sleep(pause);
    Beep(E1,halb);Beep(D1,halb);Sleep(pause);Beep(C1,2*voll);Sleep(pause+halb);Beep(C1,halb);Sleep(pause);
    Beep(D1,voll);Sleep(pause);Beep(C1,halb);Beep(D1,halb);Sleep(20);Beep(D1,halb);Sleep(pause);Beep(B,voll);Sleep(pause);
    Beep(A,2*voll);Sleep(pause);Beep(A,halb);Beep(B,halb);
    Beep(C1,voll+halb);Beep(B,halb);Sleep(pause);Beep(C1,voll);Sleep(pause);Beep(E1,voll);Sleep(pause);
    Beep(B,3*voll);Sleep(pause);Beep(E,halb);Beep(E,halb);
    Beep(A,halb+voll);Beep(G,halb);Sleep(pause);Beep(A,voll);Sleep(pause);Beep(C1,voll);Sleep(pause);
    Beep(G,2*voll);Sleep(pause);Sleep(voll);Beep(E,halb);Sleep(pause/2);Beep(E,halb);Sleep(pause/2);
    Beep(F,voll+halb);Beep(E,halb);Sleep(pause);Beep(F,halb);Beep(C1,halb+voll);Sleep(pause);
    Beep(E,2*voll);Sleep(pause);Sleep(halb);Beep(C1,halb);Sleep(pause/2);Beep(C1,halb);Sleep(pause/2);Beep(C1,halb);Sleep(pause/2);
    Beep(B,halb+voll);Beep(sF,halb);Sleep(pause);Beep(sF,voll);Beep(B,voll);Sleep(pause);
    Beep(B,2*voll);Sleep(pause);Sleep(voll);Beep(A,halb);Beep(B,halb);Sleep(pause);
    Beep(C1,voll+halb);Beep(B,halb);Sleep(pause);Beep(C1,voll);Sleep(pause);Beep(E1,voll);Sleep(pause);
    Beep(B,2*voll);Sleep(pause);Sleep(voll);Beep(E,halb);Sleep(20);Beep(E,halb);Sleep(pause);
    Beep(A,voll+halb);Beep(G,halb);Sleep(pause);Beep(A,voll);Sleep(pause);Beep(C1,voll);Sleep(pause);
    Beep(G,3*voll);Sleep(pause+halb);Beep(E,halb);Sleep(pause/2);
    Beep(F,voll);Sleep(pause);Beep(C1,halb);Beep(B,halb);Sleep(20);Beep(B,voll);Sleep(pause);Beep(C1,voll);Sleep(pause);
    Beep(D1,halb);Sleep(20);Beep(D1,halb);Sleep(20);Beep(E1,halb);Sleep(pause/2);Beep(C1,voll);Sleep(pause+voll);
    Beep(A,4*voll);
    Sleep(1000);
    return 0;
}
