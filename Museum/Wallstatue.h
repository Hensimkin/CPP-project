#pragma once
#include"Creation.h"
#include"Statue.h"
#include"Picture.h"
class Wallstatue :public Statue, public Picture
{
private:
	int numofbolts;
public:
	Wallstatue();
	Wallstatue(char* name, int year, char* movment, float height, Artist* artist, float weight, float area, float width, int numofbolts);
	Wallstatue(const Wallstatue& other);
	virtual ~Wallstatue();
	void print()const;
	virtual const char* gettype()const;
};