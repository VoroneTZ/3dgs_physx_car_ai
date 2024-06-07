#include <mtlFX.c>

var cuberesolution=256; // set up the resolution of the cube here
//var cubeposition[3]=0,0,200; // set up the position of the cube here (you could also set cubeposition to the camera position)
VECTOR* cubeposition; // set up the position of the cube here (you could also set cubeposition to the camera position)
var west[3]={180,0,0};
var north[3]={90,0,0};
var east[3]={0,0,0};
var south[3]={-90,0,0};
var down[3]={90,-90,0};
var up[3]={90,90,0};

BMAP* lbm;
  
VIEW* cv_w=
{
layer = 2;
pos_y = 0;
size_x = 256;
size_y = 256;
arc = 90;
aspect = 1;
flags = SHOW|CUBE;
//flags =  CUBE ;
}



function CubeInit() 
{

cv_w.genius =my;

vec_set(cv_w.pan,west);



lbm = bmap_createblack(1536,256,24);
bmap_to_cubemap(lbm);
cv_w.bmap = lbm;

VECTOR* ppos;
ppos = vector (player.x,player.y,player.z+10);
vec_set(cv_w.x,ppos);




}



