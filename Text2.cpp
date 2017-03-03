float tempBu=0.0;
float tempZhu=0.0;
float tempPai=0.0;
float CurZVal = 0.0;
for(BB=0;BB<Count_Z;BB++)
{
	for(BB1=0;BB1<BuJuCountSave[BB];BB1++)
	{
		CurZVal=CurZVal+BuJuDataSave[BB];
		float CurXVal = 0.0;
		for(ZZ=0;ZZ<Count_X;ZZ++)
		{
			for(ZZ1=0;ZZ1<ZhuJuCountSave[ZZ];ZZ1++)
			{
				CurXVal=CurXVal+ZhuJuDataSave[ZZ];
				float CurYVal=0.0;
				for(PP=0;PP<Count_Y;PP++)
				{
					for(PP1=0;PP1<Count_Y;PP1++)
					{
						CurYVal=CurYVal+PaiJuDataSave[PP];
					}
				}
			}
		}
	}
}