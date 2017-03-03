#include "StdAfx.h"
#include "element.h"
element::element()
{
	qd=0;
	zd=0;
	//int unit;//1,2,3,4,5,6分别代表x向y向z向杆件及xy面xz面yz面剪刀撑
	xs=0.0;
	ys=0.0;
	zs=0.0;
	xe=0.0;
	ye=0.0;
	ze=0.0;
}
void element::operator=(element &n)
{
	qd=n.qd;
	zd=n.zd;
	xs=n.xs;
	ys=n.ys;
	zs=n.zs;
	xe=n.xe;
	ye=n.ye;
	ze=n.ze;
}
