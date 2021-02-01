#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include <time.h>

#include "Ad.h"
#include "AdTypeEnum.h"

void Ad::CreateAd(string name, string adText, int adType)
{
	this->name = name;
	this->idIndex++;
	this->id = this->idIndex;
	int setText = adType;
	this->adText = adText;
	switch (setText)
	{
	case 1:
		this->adType = AdType::scroll;

	case 2:
		this->adType = AdType::blink;

	case 3:
		this->adType = AdType::plainText;
	}
}



