class element
{
public:
	element();
	int qd;
	int zd;
	//int unit;//1,2,3,4,5,6分别代表x向y向z向杆件及xy面xz面yz面剪刀撑
	float xs;
	float ys;
	float zs;
	float xe;
	float ye;
	float ze;
	void operator=(element &n);
};
