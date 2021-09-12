
#include<Graphics.h>
void main()
{
int gd=DETECT,gm,errorcode;
initgraph(&gd,&gm,"C:\\TC\\BGI");
errorcode=graphresult();
if(errorcode!=grok)
{printf("\n graphics initilazation failed!!");
exit();
}
setcolor(green)
circle(100,120,200);
getch();
closegraph();
}
