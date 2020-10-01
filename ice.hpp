#include <string>
namespace ice{
  std::string reverse(std::string s){
    string t = s;
    int l=s.size(),cnt=0;
    for(int i=n-1;i>=0;--i){
      t[cnt++] = s[i];
    }
    return t;
  }
}
