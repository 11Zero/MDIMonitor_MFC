#include "StdAfx.h"
#include "Node.h"
Node::Node(){
	//初始化你要用的对象
	x=0.0;
	y=0.0;
	z=0.0;
	//float YuanXin_X=0.0;
	//float YuanXin_Y=0.0;
	Num=0;
}
void Node::operator=(Node &n)
{
	Num=n.Num;
	x=n.x;
	y=n.y;
	z=n.z;
}
