#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <GL/gl.h>
#define ROUND(x) ((int)(x+0.5))

// Tinggi Kaki Kiri
int xenol,xsatu,yeenol,yesatu;

// Kaki Belakang Atas
int xenol_atap,xsatu_atap,yeenol_atap,yesatu_atap;

// Tinggi Kaki Kanan
int xenol_kanan,xsatu_kanan,yeenol_kanan,yesatu_kanan;

// Panjang Sepatu Atas
int xenol_alas,xsatu_alas,yeenol_alas,yesatu_alas;

// Kaki Belakang Kiri
int xbkenol, ybkenol, xbksatu, ybksatu;

// Alas Sepatu
int asxenol, asyenol, asxsatu, asysatu;

// Depan Sepatu
int dsxenol, dsyenol, dsxsatu, dsysatu;

/* KAUS KAKI */
// Kaus Kaki Garis 1
// Kaus Kaki Garis 2
// Kaus Kaki Garis 3
// Kaus Kaki Garis 4
// Kaus Kaki Garis 5
// Kaus Kaki Garis 6
// Kaus Kaki Garis 7
// Kaus Kaki Garis 8
// Kaus Kaki Garis 9
// Kaus Kaki Garis 10
int kauskaki_x[100];
int kauskaki_y[100];
/* KAUS KAKI */


/* KOTAK DALEM */
// Kotak Dalem Bawah
// Kotak Dalem Kiri
// Kotak Dalem Kanan
int kotakdalem_x[100];
int kotakdalem_y[100];
/* KOTAK DALEM */

/* TALI SEPATU */
int talisepatu_x[100];
int talisepatu_y[100];
/* TALI SEPATU */

void display (void){
 int i, j, l;
 int steps, k, p, c;

 // ============== Tinggi Kaki Kiri ==============
 int dx_kiri=xsatu-xenol,
     dy_kiri=yesatu-yeenol;
 
 float xIncrement,
 	   yIncrement,
	   x=xenol,
	   y=yeenol;
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (0.0, 0.5, 1.0); //blue 
 
 if(abs(dx_kiri)>abs(dy_kiri))
 	steps=abs(dx_kiri);
 else 
 	steps=abs(dy_kiri);
 
 xIncrement=dx_kiri/(float)steps;
 yIncrement=dy_kiri/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x),ROUND(y));
 
 for(k=0;k<steps;k++){
 	x+=xIncrement;
 	y+=yIncrement;
 	glVertex2s(ROUND(x),ROUND(y));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ============== Tinggi Kaki Kiri ==============
 
  
 // ============== Tinggi Kaki Kanan ==============
 int dx_atap=xsatu_atap-xenol_atap,
     dy_atap=yesatu_atap-yeenol_atap;
 
 float xIncrement_atap,
 	   yIncrement_atap,
	   x_atap=xenol_atap,
	   y_atap=yeenol_atap;
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (0.0, 0.5, 1.0); //blue
 
 if(abs(dx_atap)>abs(dy_atap))
 	steps=abs(dx_atap);
 else 
 	steps=abs(dy_atap);
 
 xIncrement_atap=dx_atap/(float)steps;
 yIncrement_atap=dy_atap/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_atap),ROUND(y_atap));
 
 for(p=0;p<steps;p++){
 	x_atap+=xIncrement_atap;
 	y_atap+=yIncrement_atap;
 	glVertex2s(ROUND(x_atap),ROUND(y_atap));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ============== Tinggi Kaki Kanan ==============
 
 
 // ============== Kaki Belakang Atas ==============
 int dx_kanan=xsatu_kanan-xenol_kanan,
     dy_kanan=yesatu_kanan-yeenol_kanan;
 
 float xIncrement_kanan,
 	   yIncrement_kanan,
	   x_kanan=xenol_kanan,
	   y_kanan=yeenol_kanan;
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (0.0, 0.5, 1.0); //blue
 
 if(abs(dx_kanan)>abs(dy_kanan))
 	steps=abs(dx_kanan);
 else 
 	steps=abs(dy_kanan);
 
 xIncrement_kanan=dx_kanan/(float)steps;
 yIncrement_kanan=dy_kanan/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_kanan),ROUND(y_kanan));
 
 for(c=0;c<steps;c++){
 	x_kanan+=xIncrement_kanan;
 	y_kanan+=yIncrement_kanan;
 	glVertex2s(ROUND(x_kanan),ROUND(y_kanan));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ============== Kaki Belakang Atas ==============
 
 
 // ============== Panjang Sepatu Atas ==============
 int dx_alas=xsatu_alas-xenol_alas,
     dy_alas=yesatu_alas-yeenol_alas;
 
 float xIncrement_alas,
 	   yIncrement_alas,
	   x_alas=xenol_alas,
	   y_alas=yeenol_alas;
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (0.0, 0.5, 1.0); //blue
 
 if(abs(dx_alas)>abs(dy_alas))
 	steps=abs(dx_alas);
 else 
 	steps=abs(dy_alas);
 
 xIncrement_alas=dx_alas/(float)steps;
 yIncrement_alas=dy_alas/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_alas),ROUND(y_alas));
 
 for(c=0;c<steps;c++){
 	x_alas+=xIncrement_alas;
 	y_alas+=yIncrement_alas;
 	glVertex2s(ROUND(x_alas),ROUND(y_alas));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ============== Panjang Sepatu Atas ==============
 
  // ============== Kaki Belakang Kiri ==============
 int dx_bk=xbksatu-xbkenol,
     dy_bk=ybksatu-ybkenol;
 
 float xIncrement_bk,
 	   yIncrement_bk,
	   x_bk=xbkenol,
	   y_bk=ybkenol;
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (0.0, 0.5, 1.0); //blue
 
 if(abs(dx_bk)>abs(dy_bk))
 	steps=abs(dx_bk);
 else 
 	steps=abs(dy_bk);
 
 xIncrement_bk=dx_bk/(float)steps;
 yIncrement_bk=dy_bk/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_bk),ROUND(y_bk));
 
 for(c=0;c<steps;c++){
 	x_bk+=xIncrement_bk;
 	y_bk+=yIncrement_bk;
 	glVertex2s(ROUND(x_bk),ROUND(y_bk));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ============== Kaki Belakang Kiri ==============
 
 // ============== Alas Sepatu ==============
 int dx_as=asxsatu-asxenol,
     dy_as=asysatu-asyenol;
 
 float xIncrement_as,
 	   yIncrement_as,
	   x_as=asxenol,
	   y_as=asyenol;
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (0.0, 0.5, 1.0); //blue
 
 if(abs(dx_as)>abs(dy_as))
 	steps=abs(dx_as);
 else 
 	steps=abs(dy_as);
 
 xIncrement_as=dx_as/(float)steps;
 yIncrement_as=dy_as/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_as),ROUND(y_as));
 
 for(c=0;c<steps;c++){
 	x_as+=xIncrement_as;
 	y_as+=yIncrement_as;
 	glVertex2s(ROUND(x_as),ROUND(y_as));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ============== Alas Sepatu ==============
 
 // ============== Depan Sepatu ==============
 int dx_ds=dsxsatu-dsxenol,
     dy_ds=dsysatu-dsyenol;
 
 float xIncrement_ds,
 	   yIncrement_ds,
	   x_ds=dsxenol,
	   y_ds=dsyenol;
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (0.0, 0.5, 1.0); //blue
 
 if(abs(dx_ds)>abs(dy_ds))
 	steps=abs(dx_ds);
 else 
 	steps=abs(dy_ds);
 
 xIncrement_ds=dx_ds/(float)steps;
 yIncrement_ds=dy_ds/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_ds),ROUND(y_ds));
 
 for(c=0;c<steps;c++){
 	x_ds+=xIncrement_ds;
 	y_ds+=yIncrement_ds;
 	glVertex2s(ROUND(x_ds),ROUND(y_ds));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ============== Depan Sepatu ==============
 
 // ============== Kaus Kaki Garis 1 ==============
 int dx_dg=kauskaki_x[1]-kauskaki_x[0],
     dy_dg=kauskaki_y[1]-kauskaki_y[0];
 
 float xIncrement_dg,
 	   yIncrement_dg,
	   x_dg=kauskaki_x[0],
	   y_dg=kauskaki_y[0];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (0.0, 0.5, 1.0); //blue
 
 if(abs(dx_dg)>abs(dy_dg))
 	steps=abs(dx_dg);
 else 
 	steps=abs(dy_dg);
 
 xIncrement_dg=dx_dg/(float)steps;
 yIncrement_dg=dy_dg/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_dg),ROUND(y_dg));
 
 for(c=0;c<steps;c++){
 	x_dg+=xIncrement_dg;
 	y_dg+=yIncrement_dg;
 	glVertex2s(ROUND(x_dg),ROUND(y_dg));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ============== Kaus Kaki Garis 1 ==============
 
 // ============== Kaus Kaki Garis 2 ==============
 int dx_dgsatu=kauskaki_x[3]-kauskaki_x[2],
     dy_dgsatu=kauskaki_y[3]-kauskaki_y[2];
 
 float xIncrement_dgsatu,
 	   yIncrement_dgsatu,
	   x_dgsatu=kauskaki_x[2],
	   y_dgsatu=kauskaki_y[2];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_dgsatu)>abs(dy_dgsatu))
 	steps=abs(dx_dgsatu);
 else 
 	steps=abs(dy_dgsatu);
 
 xIncrement_dgsatu=dx_dgsatu/(float)steps;
 yIncrement_dgsatu=dy_dgsatu/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_dgsatu),ROUND(y_dgsatu));
 
 for(c=0;c<steps;c++){
 	x_dgsatu+=xIncrement_dgsatu;
 	y_dgsatu+=yIncrement_dgsatu;
 	glVertex2s(ROUND(x_dgsatu),ROUND(y_dgsatu));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ============== Kaus Kaki Garis 2 ==============
 
 // ============== Kaus Kaki Garis 3 ==============
 int dx_dgdua=kauskaki_x[5]-kauskaki_x[4],
     dy_dgdua=kauskaki_y[5]-kauskaki_y[4];
 
 float xIncrement_dgdua,
 	   yIncrement_dgdua,
	   x_dgdua=kauskaki_x[4],
	   y_dgdua=kauskaki_y[4];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_dgdua)>abs(dy_dgdua))
 	steps=abs(dx_dgdua);
 else 
 	steps=abs(dy_dgdua);
 
 xIncrement_dgdua=dx_dgdua/(float)steps;
 yIncrement_dgdua=dy_dgdua/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_dgdua),ROUND(y_dgdua));
 
 for(c=0;c<steps;c++){
 	x_dgdua+=xIncrement_dgdua;
 	y_dgdua+=yIncrement_dgdua;
 	glVertex2s(ROUND(x_dgdua),ROUND(y_dgdua));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ============== Kaus Kaki Garis 3 ==============
 
 // ============== Kaus Kaki Garis 4 ==============
 int dx_dgtiga=kauskaki_x[7]-kauskaki_x[6],
     dy_dgtiga=kauskaki_y[7]-kauskaki_y[6];
 
 float xIncrement_dgtiga,
 	   yIncrement_dgtiga,
	   x_dgtiga=kauskaki_x[6],
	   y_dgtiga=kauskaki_y[6];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_dgtiga)>abs(dy_dgtiga))
 	steps=abs(dx_dgtiga);
 else 
 	steps=abs(dy_dgtiga);
 
 xIncrement_dgtiga=dx_dgtiga/(float)steps;
 yIncrement_dgtiga=dy_dgtiga/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_dgtiga),ROUND(y_dgtiga));
 
 for(c=0;c<steps;c++){
 	x_dgtiga+=xIncrement_dgtiga;
 	y_dgtiga+=yIncrement_dgtiga;
 	glVertex2s(ROUND(x_dgtiga),ROUND(y_dgtiga));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ============== Kaus Kaki Garis 4 ==============
 
 // ============== Kaus Kaki Garis 5 ==============
 int dx_dgempat=kauskaki_x[9]-kauskaki_x[8],
     dy_dgempat=kauskaki_y[9]-kauskaki_y[8];
 
 float xIncrement_dgempat,
 	   yIncrement_dgempat,
	   x_dgempat=kauskaki_x[8],
	   y_dgempat=kauskaki_y[8];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_dgempat)>abs(dy_dgempat))
 	steps=abs(dx_dgempat);
 else 
 	steps=abs(dy_dgempat);
 
 xIncrement_dgempat=dx_dgempat/(float)steps;
 yIncrement_dgempat=dy_dgempat/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_dgempat),ROUND(y_dgempat));
 
 for(c=0;c<steps;c++){
 	x_dgempat+=xIncrement_dgempat;
 	y_dgempat+=yIncrement_dgempat;
 	glVertex2s(ROUND(x_dgempat),ROUND(y_dgempat));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ============== Kaus Kaki Garis 5 ==============
 
 // ============== Kaus Kaki Garis 6 ==============
 int dx_dglima=kauskaki_x[11]-kauskaki_x[10],
     dy_dglima=kauskaki_y[11]-kauskaki_y[10];
 
 float xIncrement_dglima,
 	   yIncrement_dglima,
	   x_dglima=kauskaki_x[10],
	   y_dglima=kauskaki_y[10];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_dglima)>abs(dy_dglima))
 	steps=abs(dx_dglima);
 else 
 	steps=abs(dy_dglima);
 
 xIncrement_dglima=dx_dglima/(float)steps;
 yIncrement_dglima=dy_dglima/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_dglima),ROUND(y_dglima));
 
 for(c=0;c<steps;c++){
 	x_dglima+=xIncrement_dglima;
 	y_dglima+=yIncrement_dglima;
 	glVertex2s(ROUND(x_dglima),ROUND(y_dglima));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ============== Kaus Kaki Garis 6 ==============
 
 // ============== Kaus Kaki Garis 7 ==============
 int dx_dgenam=kauskaki_x[13]-kauskaki_x[12],
     dy_dgenam=kauskaki_y[13]-kauskaki_y[12];
 
 float xIncrement_dgenam,
 	   yIncrement_dgenam,
	   x_dgenam=kauskaki_x[12],
	   y_dgenam=kauskaki_y[12];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_dgenam)>abs(dy_dgenam))
 	steps=abs(dx_dgenam);
 else 
 	steps=abs(dy_dgenam);
 
 xIncrement_dgenam=dx_dgenam/(float)steps;
 yIncrement_dgenam=dy_dgenam/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_dgenam),ROUND(y_dgenam));
 
 for(c=0;c<steps;c++){
 	x_dgenam+=xIncrement_dgenam;
 	y_dgenam+=yIncrement_dgenam;
 	glVertex2s(ROUND(x_dgenam),ROUND(y_dgenam));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ============== Kaus Kaki Garis 7 ==============
 
 // ============== Kaus Kaki Garis 8 ==============
 int dx_dgtujuh=kauskaki_x[15]-kauskaki_x[14],
     dy_dgtujuh=kauskaki_y[15]-kauskaki_y[14];
 
 float xIncrement_dgtujuh,
 	   yIncrement_dgtujuh,
	   x_dgtujuh=kauskaki_x[14],
	   y_dgtujuh=kauskaki_y[14];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_dgtujuh)>abs(dy_dgtujuh))
 	steps=abs(dx_dgtujuh);
 else 
 	steps=abs(dy_dgtujuh);
 
 xIncrement_dgtujuh=dx_dgtujuh/(float)steps;
 yIncrement_dgtujuh=dy_dgtujuh/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_dgtujuh),ROUND(y_dgtujuh));
 
 for(c=0;c<steps;c++){
 	x_dgtujuh+=xIncrement_dgtujuh;
 	y_dgtujuh+=yIncrement_dgtujuh;
 	glVertex2s(ROUND(x_dgtujuh),ROUND(y_dgtujuh));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ============== Kaus Kaki Garis 8 ==============
 
 
 // ============== Kaus Kaki Garis 9 ==============
 int dx_dgdelapan=kauskaki_x[17]-kauskaki_x[16],
     dy_dgdelapan=kauskaki_y[17]-kauskaki_y[16];
 
 float xIncrement_dgdelapan,
 	   yIncrement_dgdelapan,
	   x_dgdelapan=kauskaki_x[16],
	   y_dgdelapan=kauskaki_y[16];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_dgdelapan)>abs(dy_dgdelapan))
 	steps=abs(dx_dgdelapan);
 else 
 	steps=abs(dy_dgdelapan);
 
 xIncrement_dgdelapan=dx_dgdelapan/(float)steps;
 yIncrement_dgdelapan=dy_dgdelapan/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_dgdelapan),ROUND(y_dgdelapan));
 
 for(c=0;c<steps;c++){
 	x_dgdelapan+=xIncrement_dgdelapan;
 	y_dgdelapan+=yIncrement_dgdelapan;
 	glVertex2s(ROUND(x_dgdelapan),ROUND(y_dgdelapan));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ============== Kaus Kaki Garis 9 ==============
 
 
 // ============== Kaus Kaki Garis 10 ==============
 int dx_dgsembilan=kauskaki_x[19]-kauskaki_x[18],
     dy_dgsembilan=kauskaki_y[19]-kauskaki_y[18];
 
 float xIncrement_dgsembilan,
 	   yIncrement_dgsembilan,
	   x_dgsembilan=kauskaki_x[18],
	   y_dgsembilan=kauskaki_y[18];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_dgsembilan)>abs(dy_dgsembilan))
 	steps=abs(dx_dgsembilan);
 else 
 	steps=abs(dy_dgsembilan);
 
 xIncrement_dgsembilan=dx_dgsembilan/(float)steps;
 yIncrement_dgsembilan=dy_dgsembilan/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_dgsembilan),ROUND(y_dgsembilan));
 
 for(c=0;c<steps;c++){
 	x_dgsembilan+=xIncrement_dgsembilan;
 	y_dgsembilan+=yIncrement_dgsembilan;
 	glVertex2s(ROUND(x_dgsembilan),ROUND(y_dgsembilan));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ============== Kaus Kaki Garis 10 ==============
 
 
 // ============== Kotak Dalem Bawah ==============
 int dx_kdsatu=kotakdalem_x[2]-kotakdalem_x[1],
     dy_kdsatu=kotakdalem_y[2]-kotakdalem_y[1];
 
 float xIncrement_kdsatu,
 	   yIncrement_kdsatu,
	   x_kdsatu=kotakdalem_x[1],
	   y_kdsatu=kotakdalem_y[1];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (0.5, 1.5, 0.5); //light green
 
 if(abs(dx_kdsatu)>abs(dy_kdsatu))
 	steps=abs(dx_kdsatu);
 else 
 	steps=abs(dy_kdsatu);
 
 xIncrement_kdsatu=dx_kdsatu/(float)steps;
 yIncrement_kdsatu=dy_kdsatu/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_kdsatu),ROUND(y_kdsatu));
 
 for(c=0;c<steps;c++){
 	x_kdsatu+=xIncrement_kdsatu;
 	y_kdsatu+=yIncrement_kdsatu;
 	glVertex2s(ROUND(x_kdsatu),ROUND(y_kdsatu));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ============== Kotak Dalem Bawah ==============
 
 
 // ============== Kotak Dalem Kiri ==============
 int dx_kddua=kotakdalem_x[4]-kotakdalem_x[3],
     dy_kddua=kotakdalem_y[4]-kotakdalem_y[3];
 
 float xIncrement_kddua,
 	   yIncrement_kddua,
	   x_kddua=kotakdalem_x[3],
	   y_kddua=kotakdalem_y[3];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 0.0); //yellow
 
 if(abs(dx_kddua)>abs(dy_kddua))
 	steps=abs(dx_kddua);
 else 
 	steps=abs(dy_kddua);
 
 xIncrement_kddua=dx_kddua/(float)steps;
 yIncrement_kddua=dy_kddua/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_kddua),ROUND(y_kddua));
 
 for(c=0;c<steps;c++){
 	x_kddua+=xIncrement_kddua;
 	y_kddua+=yIncrement_kddua;
 	glVertex2s(ROUND(x_kddua),ROUND(y_kddua));
 }
 
 glColor3f (0.0, 1.0, 0.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ============== Kotak Dalem Kiri ==============
 
 
 // ============== Kotak Dalem Kanan ==============
 int dx_kdtiga=kotakdalem_x[6]-kotakdalem_x[5],
     dy_kdtiga=kotakdalem_y[6]-kotakdalem_y[5];
 
 float xIncrement_kdtiga,
 	   yIncrement_kdtiga,
	   x_kdtiga=kotakdalem_x[5],
	   y_kdtiga=kotakdalem_y[5];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 0.0, 1.0); //purple
 
 if(abs(dx_kdtiga)>abs(dy_kdtiga))
 	steps=abs(dx_kdtiga);
 else 
 	steps=abs(dy_kdtiga);
 
 xIncrement_kdtiga=dx_kdtiga/(float)steps;
 yIncrement_kdtiga=dy_kdtiga/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_kdtiga),ROUND(y_kdtiga));
 
 for(c=0;c<steps;c++){
 	x_kdtiga+=xIncrement_kdtiga;
 	y_kdtiga+=yIncrement_kdtiga;
 	glVertex2s(ROUND(x_kdtiga),ROUND(y_kdtiga));
 }
 
 glColor3f (0.0, 1.0, 0.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ============== Kotak Dalem Kanan ==============
 
 
 // ============== Kotak Dalem Atas ==============
  int dx_kdempat=kotakdalem_x[8]-kotakdalem_x[7],
     dy_kdempat=kotakdalem_y[8]-kotakdalem_y[7];
 
 float xIncrement_kdempat,
 	   yIncrement_kdempat,
	   x_kdempat=kotakdalem_x[7],
	   y_kdempat=kotakdalem_y[7];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (0.0, 1.0, 1.0); //red
 
 if(abs(dx_kdempat)>abs(dy_kdempat))
 	steps=abs(dx_kdempat);
 else 
 	steps=abs(dy_kdempat);
 
 xIncrement_kdempat=dx_kdempat/(float)steps;
 yIncrement_kdempat=dy_kdempat/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_kdempat),ROUND(y_kdempat));
 
 for(c=0;c<steps;c++){
 	x_kdempat+=xIncrement_kdempat;
 	y_kdempat+=yIncrement_kdempat;
 	glVertex2s(ROUND(x_kdempat),ROUND(y_kdempat));
 }
 
 glColor3f (0.0, 1.0, 0.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }	
 // ============== Kotak Dalem Atas ==============
 
 
 // ============== Tali Sepatu ==============
 int dx_tssatu=talisepatu_x[2]-talisepatu_x[1],
     dy_tssatu=talisepatu_y[2]-talisepatu_y[1];
 
 float xIncrement_tssatu,
 	   yIncrement_tssatu,
	   x_tssatu=talisepatu_x[1],
	   y_tssatu=talisepatu_y[1];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tssatu)>abs(dy_tssatu))
 	steps=abs(dx_tssatu);
 else 
 	steps=abs(dy_tssatu);
 
 xIncrement_tssatu=dx_tssatu/(float)steps;
 yIncrement_tssatu=dy_tssatu/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tssatu),ROUND(y_tssatu));
 
 for(c=0;c<steps;c++){
 	x_tssatu+=xIncrement_tssatu;
 	y_tssatu+=yIncrement_tssatu;
 	glVertex2s(ROUND(x_tssatu),ROUND(y_tssatu));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ============== Tali Sepatu ==============
 
 
 // ============== Tali Sepatu Kanan ==============
 int dx_tsdua=talisepatu_x[4]-talisepatu_x[3],
     dy_tsdua=talisepatu_y[4]-talisepatu_y[3];
 
 float xIncrement_tsdua,
 	   yIncrement_tsdua,
	   x_tsdua=talisepatu_x[3],
	   y_tsdua=talisepatu_y[3];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tsdua)>abs(dy_tsdua))
 	steps=abs(dx_tsdua);
 else 
 	steps=abs(dy_tsdua);
 
 xIncrement_tsdua=dx_tsdua/(float)steps;
 yIncrement_tsdua=dy_tsdua/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tsdua),ROUND(y_tsdua));
 
 for(c=0;c<steps;c++){
 	x_tsdua+=xIncrement_tsdua;
 	y_tsdua+=yIncrement_tsdua;
 	glVertex2s(ROUND(x_tsdua),ROUND(y_tsdua));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ============== Tali Sepatu Kanan ==============
 
 
 // ============== Tali Sepatu Kiri ==============
 int dx_tstiga=talisepatu_x[6]-talisepatu_x[5],
     dy_tstiga=talisepatu_y[6]-talisepatu_y[5];
 
 float xIncrement_tstiga,
 	   yIncrement_tstiga,
	   x_tstiga=talisepatu_x[5],
	   y_tstiga=talisepatu_y[5];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tstiga)>abs(dy_tstiga))
 	steps=abs(dx_tstiga);
 else 
 	steps=abs(dy_tstiga);
 
 xIncrement_tstiga=dx_tstiga/(float)steps;
 yIncrement_tstiga=dy_tstiga/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tstiga),ROUND(y_tstiga));
 
 for(c=0;c<steps;c++){
 	x_tstiga+=xIncrement_tstiga;
 	y_tstiga+=yIncrement_tstiga;
 	glVertex2s(ROUND(x_tstiga),ROUND(y_tstiga));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ============== Tali Sepatu Kiri ==============
 
 // ============== Tali Sepatu Dalam ==============
 int dx_tsempat=talisepatu_x[8]-talisepatu_x[7],
     dy_tsempat=talisepatu_y[8]-talisepatu_y[7];
 
 float xIncrement_tsempat,
 	   yIncrement_tsempat,
	   x_tsempat=talisepatu_x[7],
	   y_tsempat=talisepatu_y[7];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 0.0, 1.0); //purple
 
 if(abs(dx_tsempat)>abs(dy_tsempat))
 	steps=abs(dx_tsempat);
 else 
 	steps=abs(dy_tsempat);
 
 xIncrement_tsempat=dx_tsempat/(float)steps;
 yIncrement_tsempat=dy_tsempat/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tsempat),ROUND(y_tsempat));
 
 for(c=0;c<steps;c++){
 	x_tsempat+=xIncrement_tsempat;
 	y_tsempat+=yIncrement_tsempat;
 	glVertex2s(ROUND(x_tsempat),ROUND(y_tsempat));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 } 
 // ============== Tali Sepatu Dalam ==============
 
 // ============== Tali Sepatu Dalam 2 ==============
 int dx_tslima=talisepatu_x[10]-talisepatu_x[9],
     dy_tslima=talisepatu_y[10]-talisepatu_y[9];
 
 float xIncrement_tslima,
 	   yIncrement_tslima,
	   x_tslima=talisepatu_x[9],
	   y_tslima=talisepatu_y[9];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 0.0, 1.0); //purple
 
 if(abs(dx_tslima)>abs(dy_tslima))
 	steps=abs(dx_tslima);
 else 
 	steps=abs(dy_tslima);
 
 xIncrement_tslima=dx_tslima/(float)steps;
 yIncrement_tslima=dy_tslima/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tslima),ROUND(y_tslima));
 
 for(c=0;c<steps;c++){
 	x_tslima+=xIncrement_tslima;
 	y_tslima+=yIncrement_tslima;
 	glVertex2s(ROUND(x_tslima),ROUND(y_tslima));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 } 
 // ============== Tali Sepatu Dalam 2 ============== 
 
 // ============== Tali Sepatu Dalam 3 ==============
 int dx_tsenam=talisepatu_x[12]-talisepatu_x[11],
     dy_tsenam=talisepatu_y[12]-talisepatu_y[11];
 
 float xIncrement_tsenam,
 	   yIncrement_tsenam,
	   x_tsenam=talisepatu_x[11],
	   y_tsenam=talisepatu_y[11];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 0.0, 1.0); //light green
 
 if(abs(dx_tsenam)>abs(dy_tsenam))
 	steps=abs(dx_tsenam);
 else 
 	steps=abs(dy_tsenam);
 
 xIncrement_tsenam=dx_tsenam/(float)steps;
 yIncrement_tsenam=dy_tsenam/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tsenam),ROUND(y_tsenam));
 
 for(c=0;c<steps;c++){
 	x_tsenam+=xIncrement_tsenam;
 	y_tsenam+=yIncrement_tsenam;
 	glVertex2s(ROUND(x_tsenam),ROUND(y_tsenam));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 } 
 // ============== Tali Sepatu Dalam 3 ==============
 
 // ============== Tali Sepatu Dalam 4 ==============
 int dx_tstujuh=talisepatu_x[14]-talisepatu_x[13],
     dy_tstujuh=talisepatu_y[14]-talisepatu_y[13];
 
 float xIncrement_tstujuh,
 	   yIncrement_tstujuh,
	   x_tstujuh=talisepatu_x[13],
	   y_tstujuh=talisepatu_y[13];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (0.5, 1.0, 0.5); //green
 
 if(abs(dx_tstujuh)>abs(dy_tstujuh))
 	steps=abs(dx_tstujuh);
 else 
 	steps=abs(dy_tstujuh);
 
 xIncrement_tstujuh=dx_tstujuh/(float)steps;
 yIncrement_tstujuh=dy_tstujuh/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tstujuh),ROUND(y_tstujuh));
 
 for(c=0;c<steps;c++){
 	x_tstujuh+=xIncrement_tstujuh;
 	y_tstujuh+=yIncrement_tstujuh;
 	glVertex2s(ROUND(x_tstujuh),ROUND(y_tstujuh));
 }
 
 glColor3f (0.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 } 
 // ============== Tali Sepatu Dalam 4 ==============
 
 // ============== Tali Sepatu Dalam 5 ==============
 int dx_tsdelapan=talisepatu_x[17]-talisepatu_x[16],
     dy_tsdelapan=talisepatu_y[17]-talisepatu_y[16];
 
 float xIncrement_tsdelapan,
 	   yIncrement_tsdelapan,
	   x_tsdelapan=talisepatu_x[16],
	   y_tsdelapan=talisepatu_y[16];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (0.5, 1.0, 0.5); //green
 
 if(abs(dx_tsdelapan)>abs(dy_tsdelapan))
 	steps=abs(dx_tsdelapan);
 else 
 	steps=abs(dy_tsdelapan);
 
 xIncrement_tsdelapan=dx_tsdelapan/(float)steps;
 yIncrement_tsdelapan=dy_tsdelapan/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tsdelapan),ROUND(y_tsdelapan));
 
 for(c=0;c<steps;c++){
 	x_tsdelapan+=xIncrement_tsdelapan;
 	y_tsdelapan+=yIncrement_tsdelapan;
 	glVertex2s(ROUND(x_tsdelapan),ROUND(y_tsdelapan));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }  
 // ============== Tali Sepatu Dalam 5 ==============
 
 
 // ============== Tali Sepatu Dalam 6 ==============
 int dx_tssembilan=talisepatu_x[19]-talisepatu_x[18],
     dy_tssembilan=talisepatu_y[19]-talisepatu_y[18];
 
 float xIncrement_tssembilan,
 	   yIncrement_tssembilan,
	   x_tssembilan=talisepatu_x[18],
	   y_tssembilan=talisepatu_y[18];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (0.0, 1.0, 1.0); //cyan
 
 if(abs(dx_tssembilan)>abs(dy_tssembilan))
 	steps=abs(dx_tssembilan);
 else 
 	steps=abs(dy_tssembilan);
 
 xIncrement_tssembilan=dx_tssembilan/(float)steps;
 yIncrement_tssembilan=dy_tssembilan/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tssembilan),ROUND(y_tssembilan));
 
 for(c=0;c<steps;c++){
 	x_tssembilan+=xIncrement_tssembilan;
 	y_tssembilan+=yIncrement_tssembilan;
 	glVertex2s(ROUND(x_tssembilan),ROUND(y_tssembilan));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }  
 // ============== Tali Sepatu Dalam 6 ==============
 
 // ============== Huruf T ==============
 int dx_tssepuluh=talisepatu_x[21]-talisepatu_x[20],
     dy_tssepuluh=talisepatu_y[21]-talisepatu_y[20];
 
 float xIncrement_tssepuluh,
 	   yIncrement_tssepuluh,
	   x_tssepuluh=talisepatu_x[20],
	   y_tssepuluh=talisepatu_y[20];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tssepuluh)>abs(dy_tssepuluh))
 	steps=abs(dx_tssepuluh);
 else 
 	steps=abs(dy_tssepuluh);
 
 xIncrement_tssepuluh=dx_tssepuluh/(float)steps;
 yIncrement_tssepuluh=dy_tssepuluh/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tssepuluh),ROUND(y_tssepuluh));
 
 for(c=0;c<steps;c++){
 	x_tssepuluh+=xIncrement_tssepuluh;
 	y_tssepuluh+=yIncrement_tssepuluh;
 	glVertex2s(ROUND(x_tssepuluh),ROUND(y_tssepuluh));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 } 
 //---
 int dx_tssebelas=talisepatu_x[23]-talisepatu_x[22],
     dy_tssebelas=talisepatu_y[23]-talisepatu_y[22];
 
 float xIncrement_tssebelas,
 	   yIncrement_tssebelas,
	   x_tssebelas=talisepatu_x[22],
	   y_tssebelas=talisepatu_y[22];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tssebelas)>abs(dy_tssebelas))
 	steps=abs(dx_tssebelas);
 else 
 	steps=abs(dy_tssebelas);
 
 xIncrement_tssebelas=dx_tssebelas/(float)steps;
 yIncrement_tssebelas=dy_tssebelas/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tssebelas),ROUND(y_tssebelas));
 
 for(c=0;c<steps;c++){
 	x_tssebelas+=xIncrement_tssebelas;
 	y_tssebelas+=yIncrement_tssebelas;
 	glVertex2s(ROUND(x_tssebelas),ROUND(y_tssebelas));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 } 
 // ====
 
 // ==== Huruf R ====
 int dx_tsduabelas=talisepatu_x[25]-talisepatu_x[24],
     dy_tsduabelas=talisepatu_y[25]-talisepatu_y[24];
 
 float xIncrement_tsduabelas,
 	   yIncrement_tsduabelas,
	   x_tsduabelas=talisepatu_x[24],
	   y_tsduabelas=talisepatu_y[24];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tsduabelas)>abs(dy_tsduabelas))
 	steps=abs(dx_tsduabelas);
 else 
 	steps=abs(dy_tsduabelas);
 
 xIncrement_tsduabelas=dx_tsduabelas/(float)steps;
 yIncrement_tsduabelas=dy_tsduabelas/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tsduabelas),ROUND(y_tsduabelas));
 
 for(c=0;c<steps;c++){
 	x_tsduabelas+=xIncrement_tsduabelas;
 	y_tsduabelas+=yIncrement_tsduabelas;
 	glVertex2s(ROUND(x_tsduabelas),ROUND(y_tsduabelas));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 } 
 // ---
 int dx_tstigabelas=talisepatu_x[27]-talisepatu_x[26],
     dy_tstigabelas=talisepatu_y[27]-talisepatu_y[26];
 
 float xIncrement_tstigabelas,
 	   yIncrement_tstigabelas,
	   x_tstigabelas=talisepatu_x[26],
	   y_tstigabelas=talisepatu_y[26];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tstigabelas)>abs(dy_tstigabelas))
 	steps=abs(dx_tstigabelas);
 else 
 	steps=abs(dy_tstigabelas);
 
 xIncrement_tstigabelas=dx_tstigabelas/(float)steps;
 yIncrement_tstigabelas=dy_tstigabelas/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tstigabelas),ROUND(y_tstigabelas));
 
 for(c=0;c<steps;c++){
 	x_tstigabelas+=xIncrement_tstigabelas;
 	y_tstigabelas+=yIncrement_tstigabelas;
 	glVertex2s(ROUND(x_tstigabelas),ROUND(y_tstigabelas));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 } 
 // ----
 int dx_tsempatbelas=talisepatu_x[29]-talisepatu_x[28],
     dy_tsempatbelas=talisepatu_y[29]-talisepatu_y[28];
 
 float xIncrement_tsempatbelas,
 	   yIncrement_tsempatbelas,
	   x_tsempatbelas=talisepatu_x[28],
	   y_tsempatbelas=talisepatu_y[28];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tsempatbelas)>abs(dy_tsempatbelas))
 	steps=abs(dx_tsempatbelas);
 else 
 	steps=abs(dy_tsempatbelas);
 
 xIncrement_tsempatbelas=dx_tsempatbelas/(float)steps;
 yIncrement_tsempatbelas=dy_tsempatbelas/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tsempatbelas),ROUND(y_tsempatbelas));
 
 for(c=0;c<steps;c++){
 	x_tsempatbelas+=xIncrement_tsempatbelas;
 	y_tsempatbelas+=yIncrement_tsempatbelas;
 	glVertex2s(ROUND(x_tsempatbelas),ROUND(y_tsempatbelas));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 } 
 // ----
 int dx_tslimabelas=talisepatu_x[31]-talisepatu_x[30],
     dy_tslimabelas=talisepatu_y[31]-talisepatu_y[30];
 
 float xIncrement_tslimabelas,
 	   yIncrement_tslimabelas,
	   x_tslimabelas=talisepatu_x[30],
	   y_tslimabelas=talisepatu_y[30];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tslimabelas)>abs(dy_tslimabelas))
 	steps=abs(dx_tslimabelas);
 else 
 	steps=abs(dy_tslimabelas);
 
 xIncrement_tslimabelas=dx_tslimabelas/(float)steps;
 yIncrement_tslimabelas=dy_tslimabelas/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tslimabelas),ROUND(y_tslimabelas));
 
 for(c=0;c<steps;c++){
 	x_tslimabelas+=xIncrement_tslimabelas;
 	y_tslimabelas+=yIncrement_tslimabelas;
 	glVertex2s(ROUND(x_tslimabelas),ROUND(y_tslimabelas));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 } 
 // ----
 int dx_tsenambelas=talisepatu_x[33]-talisepatu_x[32],
     dy_tsenambelas=talisepatu_y[33]-talisepatu_y[32];
 
 float xIncrement_tsenambelas,
 	   yIncrement_tsenambelas,
	   x_tsenambelas=talisepatu_x[32],
	   y_tsenambelas=talisepatu_y[32];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tsenambelas)>abs(dy_tsenambelas))
 	steps=abs(dx_tsenambelas);
 else 
 	steps=abs(dy_tsenambelas);
 
 xIncrement_tsenambelas=dx_tsenambelas/(float)steps;
 yIncrement_tsenambelas=dy_tsenambelas/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tsenambelas),ROUND(y_tsenambelas));
 
 for(c=0;c<steps;c++){
 	x_tsenambelas+=xIncrement_tsenambelas;
 	y_tsenambelas+=yIncrement_tsenambelas;
 	glVertex2s(ROUND(x_tsenambelas),ROUND(y_tsenambelas));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 } 
 // ====
 
 // === Huruf U ===
 int dx_tstujuhbelas=talisepatu_x[35]-talisepatu_x[34],
     dy_tstujuhbelas=talisepatu_y[35]-talisepatu_y[34];
 
 float xIncrement_tstujuhbelas,
 	   yIncrement_tstujuhbelas,
	   x_tstujuhbelas=talisepatu_x[34],
	   y_tstujuhbelas=talisepatu_y[34];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tstujuhbelas)>abs(dy_tstujuhbelas))
 	steps=abs(dx_tstujuhbelas);
 else 
 	steps=abs(dy_tstujuhbelas);
 
 xIncrement_tstujuhbelas=dx_tstujuhbelas/(float)steps;
 yIncrement_tstujuhbelas=dy_tstujuhbelas/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tstujuhbelas),ROUND(y_tstujuhbelas));
 
 for(c=0;c<steps;c++){
 	x_tstujuhbelas+=xIncrement_tstujuhbelas;
 	y_tstujuhbelas+=yIncrement_tstujuhbelas;
 	glVertex2s(ROUND(x_tstujuhbelas),ROUND(y_tstujuhbelas));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 } 
 // ---
 int dx_tsdelapanbelas=talisepatu_x[37]-talisepatu_x[36],
     dy_tsdelapanbelas=talisepatu_y[37]-talisepatu_y[36];
 
 float xIncrement_tsdelapanbelas,
 	   yIncrement_tsdelapanbelas,
	   x_tsdelapanbelas=talisepatu_x[36],
	   y_tsdelapanbelas=talisepatu_y[36];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tsdelapanbelas)>abs(dy_tsdelapanbelas))
 	steps=abs(dx_tsdelapanbelas);
 else 
 	steps=abs(dy_tsdelapanbelas);
 
 xIncrement_tsdelapanbelas=dx_tsdelapanbelas/(float)steps;
 yIncrement_tsdelapanbelas=dy_tsdelapanbelas/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tsdelapanbelas),ROUND(y_tsdelapanbelas));
 
 for(c=0;c<steps;c++){
 	x_tsdelapanbelas+=xIncrement_tsdelapanbelas;
 	y_tsdelapanbelas+=yIncrement_tsdelapanbelas;
 	glVertex2s(ROUND(x_tsdelapanbelas),ROUND(y_tsdelapanbelas));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 } 
 // ---
 int dx_tssembilanbelas=talisepatu_x[37]-talisepatu_x[36],
     dy_tssembilanbelas=talisepatu_y[37]-talisepatu_y[36];
 
 float xIncrement_tssembilanbelas,
 	   yIncrement_tssembilanbelas,
	   x_tssembilanbelas=talisepatu_x[36],
	   y_tssembilanbelas=talisepatu_y[36];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tssembilanbelas)>abs(dy_tssembilanbelas))
 	steps=abs(dx_tssembilanbelas);
 else 
 	steps=abs(dy_tssembilanbelas);
 
 xIncrement_tssembilanbelas=dx_tssembilanbelas/(float)steps;
 yIncrement_tssembilanbelas=dy_tssembilanbelas/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tssembilanbelas),ROUND(y_tssembilanbelas));
 
 for(c=0;c<steps;c++){
 	x_tssembilanbelas+=xIncrement_tssembilanbelas;
 	y_tssembilanbelas+=yIncrement_tssembilanbelas;
 	glVertex2s(ROUND(x_tssembilanbelas),ROUND(y_tssembilanbelas));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 } 
 // ---
 int dx_tsduapuluh=talisepatu_x[39]-talisepatu_x[38],
     dy_tsduapuluh=talisepatu_y[39]-talisepatu_y[38];
 
 float xIncrement_tsduapuluh,
 	   yIncrement_tsduapuluh,
	   x_tsduapuluh=talisepatu_x[38],
	   y_tsduapuluh=talisepatu_y[38];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tsduapuluh)>abs(dy_tsduapuluh))
 	steps=abs(dx_tsduapuluh);
 else 
 	steps=abs(dy_tsduapuluh);
 
 xIncrement_tsduapuluh=dx_tsduapuluh/(float)steps;
 yIncrement_tsduapuluh=dy_tsduapuluh/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tsduapuluh),ROUND(y_tsduapuluh));
 
 for(c=0;c<steps;c++){
 	x_tsduapuluh+=xIncrement_tsduapuluh;
 	y_tsduapuluh+=yIncrement_tsduapuluh;
 	glVertex2s(ROUND(x_tsduapuluh),ROUND(y_tsduapuluh));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 } 
 // ---
 
 // ==== HURUF T ====
 int dx_tsduasatu=talisepatu_x[41]-talisepatu_x[40],
     dy_tsduasatu=talisepatu_y[41]-talisepatu_y[40];
 
 float xIncrement_tsduasatu,
 	   yIncrement_tsduasatu,
	   x_tsduasatu=talisepatu_x[40],
	   y_tsduasatu=talisepatu_y[40];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tsduasatu)>abs(dy_tsduasatu))
 	steps=abs(dx_tsduasatu);
 else 
 	steps=abs(dy_tsduasatu);
 
 xIncrement_tsduasatu=dx_tsduasatu/(float)steps;
 yIncrement_tsduasatu=dy_tsduasatu/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tsduasatu),ROUND(y_tsduasatu));
 
 for(c=0;c<steps;c++){
 	x_tsduasatu+=xIncrement_tsduasatu;
 	y_tsduasatu+=yIncrement_tsduasatu;
 	glVertex2s(ROUND(x_tsduasatu),ROUND(y_tsduasatu));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ---
 int dx_tsduadua=talisepatu_x[43]-talisepatu_x[42],
     dy_tsduadua=talisepatu_y[43]-talisepatu_y[42];
 
 float xIncrement_tsduadua,
 	   yIncrement_tsduadua,
	   x_tsduadua=talisepatu_x[42],
	   y_tsduadua=talisepatu_y[42];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tsduadua)>abs(dy_tsduadua))
 	steps=abs(dx_tsduadua);
 else 
 	steps=abs(dy_tsduadua);
 
 xIncrement_tsduadua=dx_tsduadua/(float)steps;
 yIncrement_tsduadua=dy_tsduadua/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tsduadua),ROUND(y_tsduadua));
 
 for(c=0;c<steps;c++){
 	x_tsduadua+=xIncrement_tsduadua;
 	y_tsduadua+=yIncrement_tsduadua;
 	glVertex2s(ROUND(x_tsduadua),ROUND(y_tsduadua));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }  
 // ---
 
 // ==== Huruf H ====
 int dx_tsduatiga=talisepatu_x[45]-talisepatu_x[44],
     dy_tsduatiga=talisepatu_y[45]-talisepatu_y[44];
 
 float xIncrement_tsduatiga,
 	   yIncrement_tsduatiga,
	   x_tsduatiga=talisepatu_x[44],
	   y_tsduatiga=talisepatu_y[44];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tsduatiga)>abs(dy_tsduatiga))
 	steps=abs(dx_tsduatiga);
 else 
 	steps=abs(dy_tsduatiga);
 
 xIncrement_tsduatiga=dx_tsduatiga/(float)steps;
 yIncrement_tsduatiga=dy_tsduatiga/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tsduatiga),ROUND(y_tsduatiga));
 
 for(c=0;c<steps;c++){
 	x_tsduatiga+=xIncrement_tsduatiga;
 	y_tsduatiga+=yIncrement_tsduatiga;
 	glVertex2s(ROUND(x_tsduatiga),ROUND(y_tsduatiga));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 } 
 // ---
 int dx_tsduaempat=talisepatu_x[47]-talisepatu_x[46],
     dy_tsduaempat=talisepatu_y[47]-talisepatu_y[46];
 
 float xIncrement_tsduaempat,
 	   yIncrement_tsduaempat,
	   x_tsduaempat=talisepatu_x[46],
	   y_tsduaempat=talisepatu_y[46];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tsduaempat)>abs(dy_tsduaempat))
 	steps=abs(dx_tsduaempat);
 else 
 	steps=abs(dy_tsduaempat);
 
 xIncrement_tsduaempat=dx_tsduaempat/(float)steps;
 yIncrement_tsduaempat=dy_tsduaempat/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tsduaempat),ROUND(y_tsduaempat));
 
 for(c=0;c<steps;c++){
 	x_tsduaempat+=xIncrement_tsduaempat;
 	y_tsduaempat+=yIncrement_tsduaempat;
 	glVertex2s(ROUND(x_tsduaempat),ROUND(y_tsduaempat));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 } 
 // ---
 int dx_tsdualima=talisepatu_x[49]-talisepatu_x[48],
     dy_tsdualima=talisepatu_y[49]-talisepatu_y[48];
 
 float xIncrement_tsdualima,
 	   yIncrement_tsdualima,
	   x_tsdualima=talisepatu_x[48],
	   y_tsdualima=talisepatu_y[48];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tsdualima)>abs(dy_tsdualima))
 	steps=abs(dx_tsdualima);
 else 
 	steps=abs(dy_tsdualima);
 
 xIncrement_tsdualima=dx_tsdualima/(float)steps;
 yIncrement_tsdualima=dy_tsdualima/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tsdualima),ROUND(y_tsdualima));
 
 for(c=0;c<steps;c++){
 	x_tsdualima+=xIncrement_tsdualima;
 	y_tsdualima+=yIncrement_tsdualima;
 	glVertex2s(ROUND(x_tsdualima),ROUND(y_tsdualima));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 } 
 // ---
 
 // ==== HURUF W ====
 int dx_tsduaenam=talisepatu_x[51]-talisepatu_x[50],
     dy_tsduaenam=talisepatu_y[51]-talisepatu_y[50];
 
 float xIncrement_tsduaenam,
 	   yIncrement_tsduaenam,
	   x_tsduaenam=talisepatu_x[50],
	   y_tsduaenam=talisepatu_y[50];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tsduaenam)>abs(dy_tsduaenam))
 	steps=abs(dx_tsduaenam);
 else 
 	steps=abs(dy_tsduaenam);
 
 xIncrement_tsduaenam=dx_tsduaenam/(float)steps;
 yIncrement_tsduaenam=dy_tsduaenam/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tsduaenam),ROUND(y_tsduaenam));
 
 for(c=0;c<steps;c++){
 	x_tsduaenam+=xIncrement_tsduaenam;
 	y_tsduaenam+=yIncrement_tsduaenam;
 	glVertex2s(ROUND(x_tsduaenam),ROUND(y_tsduaenam));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 } 
 // ---
 int dx_tsduatujuh=talisepatu_x[53]-talisepatu_x[52],
     dy_tsduatujuh=talisepatu_y[53]-talisepatu_y[52];
 
 float xIncrement_tsduatujuh,
 	   yIncrement_tsduatujuh,
	   x_tsduatujuh=talisepatu_x[52],
	   y_tsduatujuh=talisepatu_y[52];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tsduatujuh)>abs(dy_tsduatujuh))
 	steps=abs(dx_tsduatujuh);
 else 
 	steps=abs(dy_tsduatujuh);
 
 xIncrement_tsduatujuh=dx_tsduatujuh/(float)steps;
 yIncrement_tsduatujuh=dy_tsduatujuh/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tsduatujuh),ROUND(y_tsduatujuh));
 
 for(c=0;c<steps;c++){
 	x_tsduatujuh+=xIncrement_tsduatujuh;
 	y_tsduatujuh+=yIncrement_tsduatujuh;
 	glVertex2s(ROUND(x_tsduatujuh),ROUND(y_tsduatujuh));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 } 
 // ---
 int dx_tsduadelapan=talisepatu_x[55]-talisepatu_x[54],
     dy_tsduadelapan=talisepatu_y[55]-talisepatu_y[54];
 
 float xIncrement_tsduadelapan,
 	   yIncrement_tsduadelapan,
	   x_tsduadelapan=talisepatu_x[54],
	   y_tsduadelapan=talisepatu_y[54];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tsduadelapan)>abs(dy_tsduadelapan))
 	steps=abs(dx_tsduadelapan);
 else 
 	steps=abs(dy_tsduadelapan);
 
 xIncrement_tsduadelapan=dx_tsduadelapan/(float)steps;
 yIncrement_tsduadelapan=dy_tsduadelapan/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tsduadelapan),ROUND(y_tsduadelapan));
 
 for(c=0;c<steps;c++){
 	x_tsduadelapan+=xIncrement_tsduadelapan;
 	y_tsduadelapan+=yIncrement_tsduadelapan;
 	glVertex2s(ROUND(x_tsduadelapan),ROUND(y_tsduadelapan));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 } 
 // ---
 int dx_tsduasembilan=talisepatu_x[57]-talisepatu_x[56],
     dy_tsduasembilan=talisepatu_y[57]-talisepatu_y[56];
 
 float xIncrement_tsduasembilan,
 	   yIncrement_tsduasembilan,
	   x_tsduasembilan=talisepatu_x[56],
	   y_tsduasembilan=talisepatu_y[56];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tsduasembilan)>abs(dy_tsduasembilan))
 	steps=abs(dx_tsduasembilan);
 else 
 	steps=abs(dy_tsduasembilan);
 
 xIncrement_tsduasembilan=dx_tsduasembilan/(float)steps;
 yIncrement_tsduasembilan=dy_tsduasembilan/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tsduasembilan),ROUND(y_tsduasembilan));
 
 for(c=0;c<steps;c++){
 	x_tsduasembilan+=xIncrement_tsduasembilan;
 	y_tsduasembilan+=yIncrement_tsduasembilan;
 	glVertex2s(ROUND(x_tsduasembilan),ROUND(y_tsduasembilan));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 
 // ==== Huruf A ====
 int dx_tstigapuluh=talisepatu_x[59]-talisepatu_x[58],
     dy_tstigapuluh=talisepatu_y[59]-talisepatu_y[58];
 
 float xIncrement_tstigapuluh,
 	   yIncrement_tstigapuluh,
	   x_tstigapuluh=talisepatu_x[58],
	   y_tstigapuluh=talisepatu_y[58];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tstigapuluh)>abs(dy_tstigapuluh))
 	steps=abs(dx_tstigapuluh);
 else 
 	steps=abs(dy_tstigapuluh);
 
 xIncrement_tstigapuluh=dx_tstigapuluh/(float)steps;
 yIncrement_tstigapuluh=dy_tstigapuluh/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tstigapuluh),ROUND(y_tstigapuluh));
 
 for(c=0;c<steps;c++){
 	x_tstigapuluh+=xIncrement_tstigapuluh;
 	y_tstigapuluh+=yIncrement_tstigapuluh;
 	glVertex2s(ROUND(x_tstigapuluh),ROUND(y_tstigapuluh));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ---
 int dx_tstigasatu=talisepatu_x[61]-talisepatu_x[60],
     dy_tstigasatu=talisepatu_y[61]-talisepatu_y[60];
 
 float xIncrement_tstigasatu,
 	   yIncrement_tstigasatu,
	   x_tstigasatu=talisepatu_x[60],
	   y_tstigasatu=talisepatu_y[60];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tstigasatu)>abs(dy_tstigasatu))
 	steps=abs(dx_tstigasatu);
 else 
 	steps=abs(dy_tstigasatu);
 
 xIncrement_tstigasatu=dx_tstigasatu/(float)steps;
 yIncrement_tstigasatu=dy_tstigasatu/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tstigasatu),ROUND(y_tstigasatu));
 
 for(c=0;c<steps;c++){
 	x_tstigasatu+=xIncrement_tstigasatu;
 	y_tstigasatu+=yIncrement_tstigasatu;
 	glVertex2s(ROUND(x_tstigasatu),ROUND(y_tstigasatu));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ---
 int dx_tstigadua=talisepatu_x[63]-talisepatu_x[62],
     dy_tstigadua=talisepatu_y[63]-talisepatu_y[62];
 
 float xIncrement_tstigadua,
 	   yIncrement_tstigadua,
	   x_tstigadua=talisepatu_x[62],
	   y_tstigadua=talisepatu_y[62];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tstigadua)>abs(dy_tstigadua))
 	steps=abs(dx_tstigadua);
 else 
 	steps=abs(dy_tstigadua);
 
 xIncrement_tstigadua=dx_tstigadua/(float)steps;
 yIncrement_tstigadua=dy_tstigadua/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tstigadua),ROUND(y_tstigadua));
 
 for(c=0;c<steps;c++){
 	x_tstigadua+=xIncrement_tstigadua;
 	y_tstigadua+=yIncrement_tstigadua;
 	glVertex2s(ROUND(x_tstigadua),ROUND(y_tstigadua));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ---
 int dx_tstigatiga=talisepatu_x[65]-talisepatu_x[64],
     dy_tstigatiga=talisepatu_y[65]-talisepatu_y[64];
 
 float xIncrement_tstigatiga,
 	   yIncrement_tstigatiga,
	   x_tstigatiga=talisepatu_x[64],
	   y_tstigatiga=talisepatu_y[64];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tstigatiga)>abs(dy_tstigatiga))
 	steps=abs(dx_tstigatiga);
 else 
 	steps=abs(dy_tstigatiga);
 
 xIncrement_tstigatiga=dx_tstigatiga/(float)steps;
 yIncrement_tstigatiga=dy_tstigatiga/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tstigatiga),ROUND(y_tstigatiga));
 
 for(c=0;c<steps;c++){
 	x_tstigatiga+=xIncrement_tstigatiga;
 	y_tstigatiga+=yIncrement_tstigatiga;
 	glVertex2s(ROUND(x_tstigatiga),ROUND(y_tstigatiga));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ---
 int dx_tstigaempat=talisepatu_x[67]-talisepatu_x[66],
     dy_tstigaempat=talisepatu_y[67]-talisepatu_y[66];
 
 float xIncrement_tstigaempat,
 	   yIncrement_tstigaempat,
	   x_tstigaempat=talisepatu_x[66],
	   y_tstigaempat=talisepatu_y[66];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tstigaempat)>abs(dy_tstigaempat))
 	steps=abs(dx_tstigaempat);
 else 
 	steps=abs(dy_tstigaempat);
 
 xIncrement_tstigaempat=dx_tstigaempat/(float)steps;
 yIncrement_tstigaempat=dy_tstigaempat/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tstigaempat),ROUND(y_tstigaempat));
 
 for(c=0;c<steps;c++){
 	x_tstigaempat+=xIncrement_tstigaempat;
 	y_tstigaempat+=yIncrement_tstigaempat;
 	glVertex2s(ROUND(x_tstigaempat),ROUND(y_tstigaempat));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ---
 int dx_tstigalima=talisepatu_x[69]-talisepatu_x[68],
     dy_tstigalima=talisepatu_y[69]-talisepatu_y[68];
 
 float xIncrement_tstigalima,
 	   yIncrement_tstigalima,
	   x_tstigalima=talisepatu_x[68],
	   y_tstigalima=talisepatu_y[68];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tstigalima)>abs(dy_tstigalima))
 	steps=abs(dx_tstigalima);
 else 
 	steps=abs(dy_tstigalima);
 
 xIncrement_tstigalima=dx_tstigalima/(float)steps;
 yIncrement_tstigalima=dy_tstigalima/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tstigalima),ROUND(y_tstigalima));
 
 for(c=0;c<steps;c++){
 	x_tstigalima+=xIncrement_tstigalima;
 	y_tstigalima+=yIncrement_tstigalima;
 	glVertex2s(ROUND(x_tstigalima),ROUND(y_tstigalima));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ---
 int dx_tstigaenam=talisepatu_x[71]-talisepatu_x[70],
     dy_tstigaenam=talisepatu_y[71]-talisepatu_y[70];
 
 float xIncrement_tstigaenam,
 	   yIncrement_tstigaenam,
	   x_tstigaenam=talisepatu_x[70],
	   y_tstigaenam=talisepatu_y[70];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (1.0, 1.0, 1.0); //white
 
 if(abs(dx_tstigaenam)>abs(dy_tstigaenam))
 	steps=abs(dx_tstigaenam);
 else 
 	steps=abs(dy_tstigaenam);
 
 xIncrement_tstigaenam=dx_tstigaenam/(float)steps;
 yIncrement_tstigaenam=dy_tstigaenam/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tstigaenam),ROUND(y_tstigaenam));
 
 for(c=0;c<steps;c++){
 	x_tstigaenam+=xIncrement_tstigaenam;
 	y_tstigaenam+=yIncrement_tstigaenam;
 	glVertex2s(ROUND(x_tstigaenam),ROUND(y_tstigaenam));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // === TAMBAHAN LENGKUNGAN SEPATU DEPAN ===
 int dx_tstigatujuh=talisepatu_x[73]-talisepatu_x[72],
     dy_tstigatujuh=talisepatu_y[73]-talisepatu_y[72];
 
 float xIncrement_tstigatujuh,
 	   yIncrement_tstigatujuh,
	   x_tstigatujuh=talisepatu_x[72],
	   y_tstigatujuh=talisepatu_y[72];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (0.0, 0.5, 1.0); //blue
 
 if(abs(dx_tstigatujuh)>abs(dy_tstigatujuh))
 	steps=abs(dx_tstigatujuh);
 else 
 	steps=abs(dy_tstigatujuh);
 
 xIncrement_tstigatujuh=dx_tstigatujuh/(float)steps;
 yIncrement_tstigatujuh=dy_tstigatujuh/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tstigatujuh),ROUND(y_tstigatujuh));
 
 for(c=0;c<steps;c++){
 	x_tstigatujuh+=xIncrement_tstigatujuh;
 	y_tstigatujuh+=yIncrement_tstigatujuh;
 	glVertex2s(ROUND(x_tstigatujuh),ROUND(y_tstigatujuh));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ==== TAMBAHAN GARIS TANAH ===
 int dx_tstigadelapan=talisepatu_x[75]-talisepatu_x[74],
     dy_tstigadelapan=talisepatu_y[75]-talisepatu_y[74];
 
 float xIncrement_tstigadelapan,
 	   yIncrement_tstigadelapan,
	   x_tstigadelapan=talisepatu_x[74],
	   y_tstigadelapan=talisepatu_y[74];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (0.5, 0.35, 0.05); //brown
 
 if(abs(dx_tstigadelapan)>abs(dy_tstigadelapan))
 	steps=abs(dx_tstigadelapan);
 else 
 	steps=abs(dy_tstigadelapan);
 
 xIncrement_tstigadelapan=dx_tstigadelapan/(float)steps;
 yIncrement_tstigadelapan=dy_tstigadelapan/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tstigadelapan),ROUND(y_tstigadelapan));
 
 for(c=0;c<steps;c++){
 	x_tstigadelapan+=xIncrement_tstigadelapan;
 	y_tstigadelapan+=yIncrement_tstigadelapan;
 	glVertex2s(ROUND(x_tstigadelapan),ROUND(y_tstigadelapan));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ==== TAMBAHAN BODY BADAN SETENGAH ====
 int dx_tstigasembilan=talisepatu_x[77]-talisepatu_x[76],
     dy_tstigasembilan=talisepatu_y[77]-talisepatu_y[76];
 
 float xIncrement_tstigasembilan,
 	   yIncrement_tstigasembilan,
	   x_tstigasembilan=talisepatu_x[76],
	   y_tstigasembilan=talisepatu_y[76];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (0.0, 0.5, 1.0); //blue
 
 if(abs(dx_tstigasembilan)>abs(dy_tstigasembilan))
 	steps=abs(dx_tstigasembilan);
 else 
 	steps=abs(dy_tstigasembilan);
 
 xIncrement_tstigasembilan=dx_tstigasembilan/(float)steps;
 yIncrement_tstigasembilan=dy_tstigasembilan/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tstigasembilan),ROUND(y_tstigasembilan));
 
 for(c=0;c<steps;c++){
 	x_tstigasembilan+=xIncrement_tstigasembilan;
 	y_tstigasembilan+=yIncrement_tstigasembilan;
 	glVertex2s(ROUND(x_tstigasembilan),ROUND(y_tstigasembilan));
 }
 // ---
 int dx_tsempatpuluh=talisepatu_x[79]-talisepatu_x[78],
     dy_tsempatpuluh=talisepatu_y[79]-talisepatu_y[78];
 
 float xIncrement_tsempatpuluh,
 	   yIncrement_tsempatpuluh,
	   x_tsempatpuluh=talisepatu_x[78],
	   y_tsempatpuluh=talisepatu_y[78];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (0.0, 0.5, 1.0); //blue
 
 if(abs(dx_tsempatpuluh)>abs(dy_tsempatpuluh))
 	steps=abs(dx_tsempatpuluh);
 else 
 	steps=abs(dy_tsempatpuluh);
 
 xIncrement_tsempatpuluh=dx_tsempatpuluh/(float)steps;
 yIncrement_tsempatpuluh=dy_tsempatpuluh/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tsempatpuluh),ROUND(y_tsempatpuluh));
 
 for(c=0;c<steps;c++){
 	x_tsempatpuluh+=xIncrement_tsempatpuluh;
 	y_tsempatpuluh+=yIncrement_tsempatpuluh;
 	glVertex2s(ROUND(x_tsempatpuluh),ROUND(y_tsempatpuluh));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ---
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ---
 int dx_tsempatsatu=talisepatu_x[81]-talisepatu_x[80],
     dy_tsempatsatu=talisepatu_y[81]-talisepatu_y[80];
 
 float xIncrement_tsempatsatu,
 	   yIncrement_tsempatsatu,
	   x_tsempatsatu=talisepatu_x[80],
	   y_tsempatsatu=talisepatu_y[80];
	   
 glClear (GL_COLOR_BUFFER_BIT);
 glColor3f (0.0, 0.5, 1.0); //blue
 
 if(abs(dx_tsempatsatu)>abs(dy_tsempatsatu))
 	steps=abs(dx_tsempatsatu);
 else 
 	steps=abs(dy_tsempatsatu);
 
 xIncrement_tsempatsatu=dx_tsempatsatu/(float)steps;
 yIncrement_tsempatsatu=dy_tsempatsatu/(float)steps;
 
 glBegin(GL_POINTS);
 glVertex2s(ROUND(x_tsempatsatu),ROUND(y_tsempatsatu));
 
 for(c=0;c<steps;c++){
 	x_tsempatsatu+=xIncrement_tsempatsatu;
 	y_tsempatsatu+=yIncrement_tsempatsatu;
 	glVertex2s(ROUND(x_tsempatsatu),ROUND(y_tsempatsatu));
 }
 
 glColor3f (1.0, 1.0, 1.0);
 
 for(i=-100 ; i<=100 ; i++){
 	glVertex2s(i,0);
 	glVertex2s(0,i);
 }
 
 for(j=-2; j<=2 ; j++){
 	glVertex2s(95+j,4+j);
 	glVertex2s(95-j,4+j);
 }

 for(l=0; l<=2 ; l++){
 	glVertex2s(4+l,95+l);
 	glVertex2s(4-l,95+l);
 	glVertex2s(4,95-l);
 }
 // ---
 
 glEnd();
 glFlush();
}
 
void init(void){
 glClearColor (0.0, 0.0, 0.0, 0.0);
 glOrtho(-0, 100.0, -0, 100.0, -1.0, 1.0);
}

int main(int argc, char** argv){
 // Tinggi Kaki Kiri
 xenol = 40;
 yeenol = 87;
 xsatu = 40;
 yesatu = 40;
 
 // Tinggi Kaki Kanan
 xenol_atap = 52;
 yeenol_atap = 87;
 xsatu_atap = 52;
 yesatu_atap = 40;
 
 // Kaki Belakang Atas
 xenol_kanan = 40;
 yeenol_kanan = 40;
 xsatu_kanan = 33;
 yesatu_kanan = 40;
 
 // Panjang Sepatu Atas
 xenol_alas = 52;
 yeenol_alas = 40;
 xsatu_alas = 70;
 yesatu_alas = 40;
 
 // Kaki Belakang Kiri
 xbkenol = 33;
 ybkenol = 40;
 xbksatu = 33;
 ybksatu = 25;
 
 // Alas Sepatu
 asxenol = 33;
 asyenol = 25;
 asxsatu = 75;
 asysatu = 25;
 
 // Depan Sepatu
 dsxenol = 75;
 dsyenol = 35;
 dsxsatu = 75;
 dsysatu = 25;
 
 // Kaus Kaki Garis 1
 kauskaki_x[0] = 40;
 kauskaki_y[0] = 40;
 kauskaki_x[1] = 52;
 kauskaki_y[1] = 40;
 
 // Kaus Kaki Garis 2
 kauskaki_x[2] = 40;
 kauskaki_y[2] = 41;
 kauskaki_x[3] = 52;
 kauskaki_y[3] = 41;
 
 // Kaus Kaki Garis 3
 kauskaki_x[4] = 40;
 kauskaki_y[4] = 42;
 kauskaki_x[5] = 52;
 kauskaki_y[5] = 42;
 
 // Kaus Kaki Garis 4
 kauskaki_x[6] = 40;
 kauskaki_y[6] = 43;
 kauskaki_x[7] = 52;
 kauskaki_y[7] = 43;
 
 // Kaus Kaki Garis 5
 kauskaki_x[8] = 40;
 kauskaki_y[8] = 44;
 kauskaki_x[9] = 52;
 kauskaki_y[9] = 44;
 
 // Kaus Kaki Garis 6
 kauskaki_x[10] = 40;
 kauskaki_y[10] = 45;
 kauskaki_x[11] = 52;
 kauskaki_y[11] = 45;
 
 // Kaus Kaki Garis 7
 kauskaki_x[12] = 40;
 kauskaki_y[12] = 46;
 kauskaki_x[13] = 52;
 kauskaki_y[13] = 46;
 
 // Kaus Kaki Garis 8
 kauskaki_x[14] = 40;
 kauskaki_y[14] = 47;
 kauskaki_x[15] = 52;
 kauskaki_y[15] = 47;
 
 // Kaus Kaki Garis 9
 kauskaki_x[16] = 40;
 kauskaki_y[16] = 48;
 kauskaki_x[17] = 52;
 kauskaki_y[17] = 48;
 
 // Kaus Kaki Garis 10
 kauskaki_x[18] = 40;
 kauskaki_y[18] = 49;
 kauskaki_x[19] = 52;
 kauskaki_y[19] = 49;
 
 // Kotak Dalem Bawah
 kotakdalem_x[1] = 35;
 kotakdalem_y[1] = 27;
 kotakdalem_x[2] = 40;
 kotakdalem_y[2] = 27;
 
 // Kotak Dalem Kiri
 kotakdalem_x[3] = 35;
 kotakdalem_y[3] = 30;
 kotakdalem_x[4] = 35;
 kotakdalem_y[4] = 28;
 
 // Kotak Dalem Kanan
 kotakdalem_x[5] = 40;
 kotakdalem_y[5] = 30;
 kotakdalem_x[6] = 40;
 kotakdalem_y[6] = 28;
 
 // Kotak Dalem Atas
 kotakdalem_x[7] = 35;
 kotakdalem_y[7] = 31;
 kotakdalem_x[8] = 40;
 kotakdalem_y[8] = 31;
 
 // Tali Sepatu
 talisepatu_x[1] = 57;
 talisepatu_y[1] = 36;
 talisepatu_x[2] = 68;
 talisepatu_y[2] = 36;
 
 // Tali Sepatu Kanan
 talisepatu_x[3] = 68;
 talisepatu_y[3] = 40;
 talisepatu_x[4] = 68;
 talisepatu_y[4] = 36;
 
 // Tali Sepatu Kiri
 talisepatu_x[5] = 57;
 talisepatu_y[5] = 40;
 talisepatu_x[6] = 57;
 talisepatu_y[6] = 36;
 
 // Tali Sepatu Dalem
 talisepatu_x[7] = 66;
 talisepatu_y[7] = 40;
 talisepatu_x[8] = 66;
 talisepatu_y[8] = 38;
 
 // Tali Sepatu Dalem 2 Alas
 talisepatu_x[9] = 59;
 talisepatu_y[9] = 38;
 talisepatu_x[10] = 66;
 talisepatu_y[10] = 38;
 
 // Tali Sepatu Dalem 2 Kiri
 talisepatu_x[11] = 59;
 talisepatu_y[11] = 40;
 talisepatu_x[12] = 59;
 talisepatu_y[12] = 38;
 
 // Tali Sepatu Dalem 3 Tiang 1
 talisepatu_x[13] = 64;
 talisepatu_y[13] = 40;
 talisepatu_x[14] = 64;
 talisepatu_y[14] = 38;
 
 // Tali Sepatu Dalem 3 Tiang 2
 talisepatu_x[16] = 62;
 talisepatu_y[16] = 40;
 talisepatu_x[17] = 62;
 talisepatu_y[17] = 38;
 
 // Tali Sepatu Dalem 3 Bawah
 talisepatu_x[18] = 59;
 talisepatu_y[18] = 39;
 talisepatu_x[19] = 66;
 talisepatu_y[19] = 39;
 
 // Huruf T
 talisepatu_x[20] = 45;
 talisepatu_y[20] = 31;
 talisepatu_x[21] = 45;
 talisepatu_y[21] = 27;
 
 talisepatu_x[22] = 43;
 talisepatu_y[22] = 31;
 talisepatu_x[23] = 47;
 talisepatu_y[23] = 31;
 
 // Huruf R
 talisepatu_x[24] = 49;
 talisepatu_y[24] = 31;
 talisepatu_x[25] = 49;
 talisepatu_y[25] = 27;
 
 talisepatu_x[26] = 50;
 talisepatu_y[26] = 31;
 talisepatu_x[27] = 52;
 talisepatu_y[27] = 31;
 
 talisepatu_x[28] = 53;
 talisepatu_y[28] = 31;
 talisepatu_x[29] = 53;
 talisepatu_y[29] = 29;
 
 talisepatu_x[30] = 50;
 talisepatu_y[30] = 29;
 talisepatu_x[31] = 52;
 talisepatu_y[31] = 29;
 
 talisepatu_x[32] = 50;
 talisepatu_y[32] = 29;
 talisepatu_x[33] = 53;
 talisepatu_y[33] = 27;
 
 // Huruf U
 talisepatu_x[34] = 55;
 talisepatu_y[34] = 31;
 talisepatu_x[35] = 55;
 talisepatu_y[35] = 27;
 
 talisepatu_x[36] = 56;
 talisepatu_y[36] = 27;
 talisepatu_x[37] = 59;
 talisepatu_y[37] = 27;
 
 talisepatu_x[36] = 59;
 talisepatu_y[36] = 31;
 talisepatu_x[37] = 59;
 talisepatu_y[37] = 27;
 
 talisepatu_x[38] = 56;
 talisepatu_y[38] = 27;
 talisepatu_x[39] = 59;
 talisepatu_y[39] = 27;
 
 // Huruf T
 talisepatu_x[40] = 63;
 talisepatu_y[40] = 31;
 talisepatu_x[41] = 63;
 talisepatu_y[41] = 27;
 
 talisepatu_x[42] = 61;
 talisepatu_y[42] = 31;
 talisepatu_x[43] = 65;
 talisepatu_y[43] = 31;
 
 // Huruf H
 talisepatu_x[44] = 67;
 talisepatu_y[44] = 31;
 talisepatu_x[45] = 67;
 talisepatu_y[45] = 27;
 
 talisepatu_x[46] = 68;
 talisepatu_y[46] = 29;
 talisepatu_x[47] = 70;
 talisepatu_y[47] = 29;
 
 talisepatu_x[48] = 71;
 talisepatu_y[48] = 31;
 talisepatu_x[49] = 71;
 talisepatu_y[49] = 27;
 
 // Huruf W
 talisepatu_x[50] = 35;
 talisepatu_y[50] = 38;
 talisepatu_x[51] = 35;
 talisepatu_y[51] = 34;
 
 talisepatu_x[52] = 38;
 talisepatu_y[52] = 38;
 talisepatu_x[53] = 38;
 talisepatu_y[53] = 34;
 
 talisepatu_x[54] = 41;
 talisepatu_y[54] = 38;
 talisepatu_x[55] = 41;
 talisepatu_y[55] = 34;
 
 talisepatu_x[56] = 35;
 talisepatu_y[56] = 34;
 talisepatu_x[57] = 40;
 talisepatu_y[57] = 34;
 
 // Huruf A
 talisepatu_x[58] = 43;
 talisepatu_y[58] = 38;
 talisepatu_x[59] = 43;
 talisepatu_y[59] = 34;
 
 talisepatu_x[60] = 48;
 talisepatu_y[60] = 38;
 talisepatu_x[61] = 48;
 talisepatu_y[61] = 34;
 
 talisepatu_x[62] = 43;
 talisepatu_y[62] = 38;
 talisepatu_x[63] = 48;
 talisepatu_y[63] = 38;
 
 talisepatu_x[64] = 43;
 talisepatu_y[64] = 36;
 talisepatu_x[65] = 48;
 talisepatu_y[65] = 36;
 
 // Huruf Y
 talisepatu_x[66] = 50;
 talisepatu_y[66] = 38;
 talisepatu_x[67] = 52;
 talisepatu_y[67] = 36;
 
 talisepatu_x[68] = 54;
 talisepatu_y[68] = 38;
 talisepatu_x[69] = 52;
 talisepatu_y[69] = 36;
 
 talisepatu_x[70] = 52;
 talisepatu_y[70] = 36;
 talisepatu_x[71] = 52;
 talisepatu_y[71] = 34;
 
 // LENGKUNGAN DEPAN SEPATU
 talisepatu_x[72] = 70;
 talisepatu_y[72] = 40;
 talisepatu_x[73] = 75;
 talisepatu_y[73] = 35;
 
 // TANAH
 talisepatu_x[74] = 160;
 talisepatu_y[74] = 25;
 talisepatu_x[75] = 0;
 talisepatu_y[75] = 25;
 
 // BODY SETENGAH
 talisepatu_x[76] = 20;
 talisepatu_y[76] = 87;
 talisepatu_x[77] = 90;
 talisepatu_y[77] = 87;
 
 talisepatu_x[78] = 20;
 talisepatu_y[78] = 87;
 talisepatu_x[79] = 20;
 talisepatu_y[79] = 140;
 
 talisepatu_x[80] = 90;
 talisepatu_y[80] = 87;
 talisepatu_x[81] = 90;
 talisepatu_y[81] = 140;
 
 printf("Menggambar Kaki Kanan Robot \n");
 printf("----------------------\n");
 printf("\n");
 printf("List Kordinat : \n");
 printf("(");
 printf("%d",xenol);printf(",");printf("%d",yeenol);printf(",");printf("%d",xsatu);printf(",");printf("%d",yesatu);
 printf(")");
 printf("(");
 printf("%d",xenol_atap);printf(",");printf("%d",yeenol_atap);printf(",");printf("%d",xsatu_atap);printf(",");printf("%d",yesatu_atap);
 printf(")");
 printf("(");
 printf("%d",xenol_kanan);printf(",");printf("%d",yeenol_kanan);printf(",");printf("%d",xsatu_kanan);printf(",");printf("%d",yesatu_kanan);
 printf(")");
 printf("(");
 printf("%d",xenol_alas);printf(",");printf("%d",yeenol_alas);printf(",");printf("%d",xsatu_alas);printf(",");printf("%d",yesatu_alas);
 printf(")");
 printf("(");
 printf("%d",xbkenol);printf(",");printf("%d",ybkenol);printf(",");printf("%d",xbksatu);printf(",");printf("%d",ybksatu);
 printf(")");
 printf("(");
 printf("%d",asxenol);printf(",");printf("%d",asyenol);printf(",");printf("%d",asxsatu);printf(",");printf("%d",asysatu);
 printf(")");
 printf("(");
 printf("%d",dsxenol);printf(",");printf("%d",dsyenol);printf(",");printf("%d",dsxsatu);printf(",");printf("%d",dsysatu);
 printf(")");
 printf("(");
 printf("%d",kauskaki_x[0]);printf(",");printf("%d",kauskaki_y[0]);printf(",");printf("%d",kauskaki_x[1]);printf(",");printf("%d",kauskaki_y[1]);
 printf(")");
 printf("(");
 printf("%d",kauskaki_x[2]);printf(",");printf("%d",kauskaki_y[2]);printf(",");printf("%d",kauskaki_x[3]);printf(",");printf("%d",kauskaki_y[3]);
 printf(")");
 printf("(");
 printf("%d",kauskaki_x[4]);printf(",");printf("%d",kauskaki_y[4]);printf(",");printf("%d",kauskaki_x[5]);printf(",");printf("%d",kauskaki_y[5]);
 printf(")");
 printf("(");
 printf("%d",kauskaki_x[6]);printf(",");printf("%d",kauskaki_y[6]);printf(",");printf("%d",kauskaki_x[7]);printf(",");printf("%d",kauskaki_y[7]);
 printf(")");
 printf("(");
 printf("%d",kauskaki_x[8]);printf(",");printf("%d",kauskaki_y[8]);printf(",");printf("%d",kauskaki_x[9]);printf(",");printf("%d",kauskaki_y[9]);
 printf(")");
 printf("(");
 printf("%d",kauskaki_x[10]);printf(",");printf("%d",kauskaki_y[10]);printf(",");printf("%d",kauskaki_x[11]);printf(",");printf("%d",kauskaki_y[11]);
 printf(")");
 printf("(");
 printf("%d",kauskaki_x[12]);printf(",");printf("%d",kauskaki_y[12]);printf(",");printf("%d",kauskaki_x[13]);printf(",");printf("%d",kauskaki_y[13]);
 printf(")");
 printf("(");
 printf("%d",kauskaki_x[14]);printf(",");printf("%d",kauskaki_y[14]);printf(",");printf("%d",kauskaki_x[15]);printf(",");printf("%d",kauskaki_y[15]);
 printf(")");
 printf("(");
 printf("%d",kauskaki_x[16]);printf(",");printf("%d",kauskaki_y[16]);printf(",");printf("%d",kauskaki_x[17]);printf(",");printf("%d",kauskaki_y[17]);
 printf(")");
 printf("(");
 printf("%d",kauskaki_x[18]);printf(",");printf("%d",kauskaki_y[18]);printf(",");printf("%d",kauskaki_x[19]);printf(",");printf("%d",kauskaki_y[19]);
 printf(")");
 printf("(");
 printf("%d",kotakdalem_x[1]);printf(",");printf("%d",kotakdalem_y[1]);printf(",");printf("%d",kotakdalem_x[2]);printf(",");printf("%d",kauskaki_y[2]);
 printf(")");
 printf("(");
 printf("%d",kotakdalem_x[3]);printf(",");printf("%d",kotakdalem_y[3]);printf(",");printf("%d",kotakdalem_x[4]);printf(",");printf("%d",kauskaki_y[4]);
 printf(")");
 printf("(");
 printf("%d",kotakdalem_x[5]);printf(",");printf("%d",kotakdalem_y[5]);printf(",");printf("%d",kotakdalem_x[6]);printf(",");printf("%d",kauskaki_y[6]);
 printf(")");
 printf("(");
 printf("%d",kotakdalem_x[7]);printf(",");printf("%d",kotakdalem_y[7]);printf(",");printf("%d",kotakdalem_x[8]);printf(",");printf("%d",kauskaki_y[8]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[1]);printf(",");printf("%d",talisepatu_y[1]);printf(",");printf("%d",talisepatu_x[2]);printf(",");printf("%d",talisepatu_y[2]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[3]);printf(",");printf("%d",talisepatu_y[3]);printf(",");printf("%d",talisepatu_x[4]);printf(",");printf("%d",talisepatu_y[4]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[5]);printf(",");printf("%d",talisepatu_y[5]);printf(",");printf("%d",talisepatu_x[6]);printf(",");printf("%d",talisepatu_y[6]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[7]);printf(",");printf("%d",talisepatu_y[7]);printf(",");printf("%d",talisepatu_x[8]);printf(",");printf("%d",talisepatu_y[8]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[9]);printf(",");printf("%d",talisepatu_y[9]);printf(",");printf("%d",talisepatu_x[10]);printf(",");printf("%d",talisepatu_y[10]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[11]);printf(",");printf("%d",talisepatu_y[11]);printf(",");printf("%d",talisepatu_x[12]);printf(",");printf("%d",talisepatu_y[12]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[13]);printf(",");printf("%d",talisepatu_y[13]);printf(",");printf("%d",talisepatu_x[14]);printf(",");printf("%d",talisepatu_y[14]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[16]);printf(",");printf("%d",talisepatu_y[16]);printf(",");printf("%d",talisepatu_x[17]);printf(",");printf("%d",talisepatu_y[17]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[18]);printf(",");printf("%d",talisepatu_y[18]);printf(",");printf("%d",talisepatu_x[19]);printf(",");printf("%d",talisepatu_y[19]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[20]);printf(",");printf("%d",talisepatu_y[20]);printf(",");printf("%d",talisepatu_x[21]);printf(",");printf("%d",talisepatu_y[21]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[22]);printf(",");printf("%d",talisepatu_y[22]);printf(",");printf("%d",talisepatu_x[23]);printf(",");printf("%d",talisepatu_y[23]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[24]);printf(",");printf("%d",talisepatu_y[24]);printf(",");printf("%d",talisepatu_x[25]);printf(",");printf("%d",talisepatu_y[25]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[26]);printf(",");printf("%d",talisepatu_y[26]);printf(",");printf("%d",talisepatu_x[27]);printf(",");printf("%d",talisepatu_y[27]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[28]);printf(",");printf("%d",talisepatu_y[28]);printf(",");printf("%d",talisepatu_x[29]);printf(",");printf("%d",talisepatu_y[29]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[30]);printf(",");printf("%d",talisepatu_y[30]);printf(",");printf("%d",talisepatu_x[31]);printf(",");printf("%d",talisepatu_y[31]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[32]);printf(",");printf("%d",talisepatu_y[32]);printf(",");printf("%d",talisepatu_x[33]);printf(",");printf("%d",talisepatu_y[33]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[34]);printf(",");printf("%d",talisepatu_y[34]);printf(",");printf("%d",talisepatu_x[35]);printf(",");printf("%d",talisepatu_y[35]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[36]);printf(",");printf("%d",talisepatu_y[36]);printf(",");printf("%d",talisepatu_x[37]);printf(",");printf("%d",talisepatu_y[37]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[38]);printf(",");printf("%d",talisepatu_y[38]);printf(",");printf("%d",talisepatu_x[39]);printf(",");printf("%d",talisepatu_y[39]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[40]);printf(",");printf("%d",talisepatu_y[40]);printf(",");printf("%d",talisepatu_x[41]);printf(",");printf("%d",talisepatu_y[41]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[42]);printf(",");printf("%d",talisepatu_y[42]);printf(",");printf("%d",talisepatu_x[43]);printf(",");printf("%d",talisepatu_y[43]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[44]);printf(",");printf("%d",talisepatu_y[44]);printf(",");printf("%d",talisepatu_x[45]);printf(",");printf("%d",talisepatu_y[45]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[46]);printf(",");printf("%d",talisepatu_y[46]);printf(",");printf("%d",talisepatu_x[47]);printf(",");printf("%d",talisepatu_y[47]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[48]);printf(",");printf("%d",talisepatu_y[48]);printf(",");printf("%d",talisepatu_x[49]);printf(",");printf("%d",talisepatu_y[49]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[50]);printf(",");printf("%d",talisepatu_y[50]);printf(",");printf("%d",talisepatu_x[51]);printf(",");printf("%d",talisepatu_y[51]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[52]);printf(",");printf("%d",talisepatu_y[52]);printf(",");printf("%d",talisepatu_x[53]);printf(",");printf("%d",talisepatu_y[53]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[54]);printf(",");printf("%d",talisepatu_y[54]);printf(",");printf("%d",talisepatu_x[55]);printf(",");printf("%d",talisepatu_y[55]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[56]);printf(",");printf("%d",talisepatu_y[56]);printf(",");printf("%d",talisepatu_x[57]);printf(",");printf("%d",talisepatu_y[57]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[58]);printf(",");printf("%d",talisepatu_y[58]);printf(",");printf("%d",talisepatu_x[59]);printf(",");printf("%d",talisepatu_y[59]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[60]);printf(",");printf("%d",talisepatu_y[60]);printf(",");printf("%d",talisepatu_x[61]);printf(",");printf("%d",talisepatu_y[6610]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[62]);printf(",");printf("%d",talisepatu_y[62]);printf(",");printf("%d",talisepatu_x[63]);printf(",");printf("%d",talisepatu_y[63]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[64]);printf(",");printf("%d",talisepatu_y[64]);printf(",");printf("%d",talisepatu_x[65]);printf(",");printf("%d",talisepatu_y[65]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[66]);printf(",");printf("%d",talisepatu_y[66]);printf(",");printf("%d",talisepatu_x[67]);printf(",");printf("%d",talisepatu_y[67]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[68]);printf(",");printf("%d",talisepatu_y[68]);printf(",");printf("%d",talisepatu_x[69]);printf(",");printf("%d",talisepatu_y[69]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[70]);printf(",");printf("%d",talisepatu_y[70]);printf(",");printf("%d",talisepatu_x[71]);printf(",");printf("%d",talisepatu_y[71]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[72]);printf(",");printf("%d",talisepatu_y[72]);printf(",");printf("%d",talisepatu_x[73]);printf(",");printf("%d",talisepatu_y[73]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[74]);printf(",");printf("%d",talisepatu_y[74]);printf(",");printf("%d",talisepatu_x[75]);printf(",");printf("%d",talisepatu_y[75]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[76]);printf(",");printf("%d",talisepatu_y[76]);printf(",");printf("%d",talisepatu_x[77]);printf(",");printf("%d",talisepatu_y[77]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[78]);printf(",");printf("%d",talisepatu_y[78]);printf(",");printf("%d",talisepatu_x[79]);printf(",");printf("%d",talisepatu_y[79]);
 printf(")");
 printf("(");
 printf("%d",talisepatu_x[80]);printf(",");printf("%d",talisepatu_y[80]);printf(",");printf("%d",talisepatu_x[81]);printf(",");printf("%d",talisepatu_y[81]);
 printf(")");
 
 glutInit(&argc, argv);
 glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
 glutInitWindowSize (700, 700);
 glutInitWindowPosition (800, 90);
 glutCreateWindow ("Menggambar Kaki Kanan Robot Menggunakan Algoritma DDA ");
 
 init ();
 
 glutDisplayFunc(display);
 glutMainLoop();
 
 return 0;
}
