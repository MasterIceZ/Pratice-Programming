#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


namespace ice
{
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

	//find element
	template <class T> int findelement(vector<T> v,T want);
	template <class T> int findelement(vector<T> v,T want)
	{
    		bool found=false;
   		int idx;
    		for(int i=0;i<v.size();++i)
    		{
        		if(want==v[i])
        		{
            			found = true;
            			idx = i;
            			break;
        		}
    		}
    		return found?idx:-1;
	}

}
