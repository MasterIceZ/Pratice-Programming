/*
 * Logic Operations
 * IceBorworntat
 * */

namespace ice
{
	template <class A ,class B> bool and(A a,B b);
	template <class A ,class B> bool and(A a,B b)
	{
		if(a&&b)
		{	
			return true;
		}
		return false;
	}
	template <class A ,class B>bool or(A a,B b);
	template <class A ,class B>bool or(A a,B b)
	{
		if(a||b)
		{
			return true;	
		}
		return false;
	}
	template <class A ,class B>bool ift(A a,B b);
	tempalte <class A ,class B>bool ift(A a,B b)
	{
		if(a==true and b==false)
		{
			return false;	
		}
		return true;
	}
	template <class A,class B>bool when(A a,B b);
	template <class A,class B>bool when(A a,B b)
	{
		if(a==b)
		{
			return true;	
		}
		return false;
	}
	template <class A>bool not(A a);
	template <class A>bool not(A a)
	{
		return !a;	
	}
	
}
