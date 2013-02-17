#include "SimpleIni.h"
#include <stdio.h>
int main(void)
{
	CSimpleIniA ini;
	const char* filename="test.ini";
	ini.SetUnicode();
	ini.LoadFile(filename);
	ini.SetValue("node1","foo","foonew");
	const char* inivalue=ini.GetValue("node1","foo",NULL);
	printf("%s\n",inivalue);
	printf("end!\n");
	bool b=false;
	ini.SaveFile(filename,b);
	ini.Reset();
	return 0;
}
