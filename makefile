all : code.cpp
  g++ -o code code.cpp
  ./code
clean :
  rm code
  clear
run :
  ./code
