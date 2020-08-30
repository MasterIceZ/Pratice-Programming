namespace ice
{
    /*
     * Reference : nattee115 (CU)
     */
    template <class T> void getdigit(int x,int y);
    template <class T> void getdigit(int x,int y)
    {
        for(int i=0;i<k;++i)
        {
            x /= 10;
        }
        return x%10;
    }

    template <class T> void radixsort(std::vector<T>&data,int n);
    template <class T> void radixsort(std::vector<T>&data,int n)
    {
        queue<T>q[10];
        for(int k=0;k<d;++k)
        {
            for(auto &x : data)
            {
                q[getdigit(x,k)].push(x);
            }
            for(int i=0,j=0;i<10;++i)
            {
                while(!q[i].empty())
                {
                    data[j++] = q[i].front();
                    q[i].pop();
                }
            }
        }
    }
}
