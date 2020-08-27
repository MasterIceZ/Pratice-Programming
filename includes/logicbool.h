/*
 * Logic Operations
 * IceBorworntat
 * */
#include <cstdio>

bool andl (bool a,bool b)
{
	if(a==true && b==true)
		return true;
	return false;
}

bool orl (bool a,bool b)
{
	if(a==false && b==false)
		return false;
	return true;
}

bool ifthenl (bool a,bool b)
{
	if(a==true && b==false)
		return false;
	return true;
}

bool whenl (bool a,bool b)
{
	if(a==b)
		return true;
	return false;
}
