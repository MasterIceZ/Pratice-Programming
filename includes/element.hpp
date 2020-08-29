/*
_IceBorworntat926
*/

namespace ice
{
    //min element
    template <class T>
    T mnelement(std::vector<T> v);
    template <class T>
    T mnelement(std::vector<T> v)
    {
        for(int i=1;i<v.size();++i)
        {
            if(v[i]>v[i-1])
            {
                v[i] = v[i-1];
            }
        }
        return v[v.size()-1];
    }

    //max element
    template <class T>
    T mxelement(std::vector<T> v);
    template <class T>
    T mxelement(std::vector<T> v)
    {
        for(int i=1;i<v.size();++i)
        {
            if(v[i]<v[i-1])
            {
                v[i] = v[i-1];
            }
        }
        return v[v.size()-1];
    }

    //find element
    template <class T>
    int findelement(std::vector<T> v, T want);
    template <class T>
    int findelement(std::vector<T> v, T want)
    {
        bool found = false;
        int idx;
        for (int i = 0; i < v.size(); ++i)
        {
            if (want == v[i])
            {
                found = true;
                idx = i;
                break;
            }
        }
        return found ? idx : -1;
    }

} // namespace ice
