#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

//min element
template <class T> T mnelement(vector<T> v);
template <class T> T mnelement(vector<T> v)
{
	sort(v.begin(),v.end());
	return v[0];
}

//max element
template <class T> T mxelement(vector<T> v);
template <class T> T mxelement(vector<T> v)
{
	sort(v.begin(),v.end(),greater<T>());	
	return v[0];
}
