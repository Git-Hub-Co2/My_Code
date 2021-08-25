#include <cstdio>
#include <windows.h>

#define qdo 262//q 前缀为低音，1 后缀为高音，s前缀为半音阶
#define qre 294
#define qmi 330
#define qfa 349
#define qso 392
#define qla 440
#define qsi 494
#define do 523
#define re 578
#define mi 659
#define fa 698
#define so 784
#define la 880
#define si 988
#define do1 1046
#define re1 1175
#define mi1 1318
#define fa1 1480
#define so1 1568
#define la1 1760
#define si1 1976
#define sqdo 277
#define sqre 311
#define sqfa 370
#define sqso 415
#define sqla 466
#define sdo 554
#define sre 622
#define sfa 740
#define sso 831
#define sla 932
#define sdo1 1046
#define sre1 1245
#define sfa1 1480
#define sso1 1661
#define sla1 1865

int main(){
    //**全拍*/
    int voll = 400,
    //**半拍*/
    halb = 200,
    //**pause*//
    pause = 128;

    Beep(la,halb);Beep(si,halb);Sleep(pause);
    Beep(do1,voll+halb);Beep(si,halb);Sleep(pause);Beep(do1,voll);Sleep(pause);Beep(mi1,voll);Sleep(pause);
    Beep(si,3*voll);Sleep(pause);Beep(mi,halb);Beep(mi,halb);
    Beep(la,halb+voll);Beep(so,halb);Sleep(pause);Beep(la,voll);Sleep(pause);Beep(do1,voll);Sleep(pause);
    Beep(so,2*voll);Sleep(pause);Sleep(voll);Beep(mi,halb);Sleep(pause/2);Beep(mi,halb);Sleep(pause/2);
    Beep(fa,voll+halb);Beep(mi,halb);Sleep(pause);Beep(fa,halb);Beep(do1,halb+voll);Sleep(pause);
    Beep(mi,2*voll);Sleep(pause);Sleep(halb);Beep(do1,halb);Sleep(pause/2);Beep(do1,halb);Sleep(pause/2);Beep(do1,halb);Sleep(pause/2);
    Beep(si,halb+voll);Beep(sfa,halb);Sleep(pause);Beep(sfa,voll);Beep(si,voll);Sleep(pause);
    Beep(si,2*voll);Sleep(pause);Sleep(voll);Beep(la,halb);Beep(si,halb);Sleep(pause);
    Beep(do1,voll+halb);Beep(si,halb);Sleep(pause);Beep(do1,voll);Sleep(pause);Beep(mi1,voll);Sleep(pause);
    Beep(si,2*voll);Sleep(pause);Sleep(voll);Beep(mi,halb);Sleep(20);Beep(mi,halb);Sleep(pause);
    Beep(la,voll+halb);Beep(so,halb);Sleep(pause);Beep(la,voll);Sleep(pause);Beep(do1,voll);Sleep(pause);
    Beep(so,3*voll);Sleep(pause+halb);Beep(mi,halb);Sleep(pause/2);
    Beep(fa,voll);Sleep(pause);Beep(do1,halb);Beep(si,halb);Sleep(20);Beep(si,voll);Sleep(pause);Beep(do1,voll);Sleep(pause);
    Beep(re1,halb);Sleep(20);Beep(re1,halb);Sleep(20);Beep(mi1,halb);Sleep(pause/2);Beep(do1,voll);Sleep(pause+voll);
    Beep(do1,voll);Beep(si,halb);Sleep(pause);Beep(la,halb);Sleep(20);Beep(la,halb);Sleep(pause);Beep(si,voll);Sleep(pause);Beep(sso,voll);Sleep(pause);
    Beep(sso,2*voll);Sleep(pause+voll);Beep(do1,halb);Beep(re1,halb);Sleep(pause);
    Beep(mi1,voll+halb);Beep(re1,halb);Sleep(pause);Beep(mi1,voll);Sleep(pause);Beep(fa1,voll);Sleep(pause);
    Beep(re1,2*voll);Sleep(voll+pause);Beep(so,halb);Sleep(20);Beep(so,halb);Sleep(pause);
    Beep(do1,halb);Beep(si,halb);Sleep(pause);Beep(do1,voll);Sleep(pause);Beep(mi1,voll);Sleep(pause);
    Beep(mi1,2*voll);Sleep(pause+2*voll);
    Beep(la,halb);Beep(si,halb);Sleep(pause);Beep(do1,voll);Sleep(pause);Beep(si,voll);Sleep(pause);Beep(re1,halb);Sleep(20);Beep(re1,halb);Sleep(pause);
    Beep(do1,voll+halb);Beep(so,halb);Sleep(20);Beep(so,voll);Sleep(voll+pause);
    Beep(fa1,voll);Sleep(pause);Beep(mi1,voll);Sleep(pause);Beep(re1,voll);Sleep(pause);Beep(do1,voll);Sleep(pause);
    Beep(mi1,4*voll);
    Beep(mi1,voll*2);Sleep(voll+pause);Beep(mi1,voll);Sleep(pause);
    Beep(la1,2*voll);Sleep(pause);Beep(so1,voll);Sleep(pause);Beep(so1,voll);Sleep(pause);
    Beep(mi1,halb);Sleep(pause/2);Beep(re1,halb);Sleep(pause);Beep(do1,voll);Sleep(pause+halb);Beep(do1,halb);Sleep(pause);
    Beep(re1,voll);Sleep(pause);Beep(do1,halb);Beep(re1,halb);Sleep(20);Beep(re1,halb);Sleep(pause);Beep(so1,voll);Sleep(pause);
    Beep(mi1,2*voll);Sleep(pause+voll);Beep(mi,voll);Sleep(pause);
    Beep(la1,2*voll);Sleep(pause);Beep(so1,2*voll);Sleep(pause);
    Beep(mi1,halb);Beep(re1,halb);Sleep(pause);Beep(do1,2*voll);Sleep(pause+halb);Beep(do1,halb);Sleep(pause);
    Beep(re1,voll);Sleep(pause);Beep(do1,halb);Beep(re1,halb);Sleep(20);Beep(re1,halb);Sleep(pause);Beep(si,voll);Sleep(pause);
    Beep(la,2*voll);Sleep(pause);Beep(la,halb);Beep(si,halb);
    Beep(do1,voll+halb);Beep(si,halb);Sleep(pause);Beep(do1,voll);Sleep(pause);Beep(mi1,voll);Sleep(pause);
    Beep(si,3*voll);Sleep(pause);Beep(mi,halb);Beep(mi,halb);
    Beep(la,halb+voll);Beep(so,halb);Sleep(pause);Beep(la,voll);Sleep(pause);Beep(do1,voll);Sleep(pause);
    Beep(so,2*voll);Sleep(pause);Sleep(voll);Beep(mi,halb);Sleep(pause/2);Beep(mi,halb);Sleep(pause/2);
    Beep(fa,voll+halb);Beep(mi,halb);Sleep(pause);Beep(fa,halb);Beep(do1,halb+voll);Sleep(pause);
    Beep(mi,2*voll);Sleep(pause);Sleep(halb);Beep(do1,halb);Sleep(pause/2);Beep(do1,halb);Sleep(pause/2);Beep(do1,halb);Sleep(pause/2);
    Beep(si,halb+voll);Beep(sfa,halb);Sleep(pause);Beep(sfa,voll);Beep(si,voll);Sleep(pause);
    Beep(si,2*voll);Sleep(pause);Sleep(voll);Beep(la,halb);Beep(si,halb);Sleep(pause);
    Beep(do1,voll+halb);Beep(si,halb);Sleep(pause);Beep(do1,voll);Sleep(pause);Beep(mi1,voll);Sleep(pause);
    Beep(si,2*voll);Sleep(pause);Sleep(voll);Beep(mi,halb);Sleep(20);Beep(mi,halb);Sleep(pause);
    Beep(la,voll+halb);Beep(so,halb);Sleep(pause);Beep(la,voll);Sleep(pause);Beep(do1,voll);Sleep(pause);
    Beep(so,3*voll);Sleep(pause+halb);Beep(mi,halb);Sleep(pause/2);
    Beep(fa,voll);Sleep(pause);Beep(do1,halb);Beep(si,halb);Sleep(20);Beep(si,voll);Sleep(pause);Beep(do1,voll);Sleep(pause);
    Beep(re1,halb);Sleep(20);Beep(re1,halb);Sleep(20);Beep(mi1,halb);Sleep(pause/2);Beep(do1,voll);Sleep(pause+voll);
    Beep(la,4*voll);
    Sleep(1000);
    return 0;
}
