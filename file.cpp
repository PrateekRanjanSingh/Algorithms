#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main () {
  string line;
  string filename;
  cin >> filename;
  map <string,int> chem;
  map <string,int> bio;
  bio["plants"] = 3;
  bio["tissue"] = 4;
  bio["macronutrients"] = 5;
  bio["micronutrients"] = 6;
  bio["living"] = 7;
  bio["organism"] = 8;
  bio["animals"] = 9;
  bio["taxon"] = 10;
  chem["element"] =  2;
  chem["carbon"] = 3;
  chem["hydrogen"] = 4;
  chem["magnesium"] = 5;
  chem ["iron"] = 7;
  chem["manganese"] = 8;
  chem["copper"] = 9;
  chem["nickel"] = 10;
  chem["sodium"] = 11;
  ifstream myfile (filename);
  int bcount = 0,ccount = 0;
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      string s = "";
      for(auto i:line)
      {
          if(i==' '){
              if(chem[s]) ccount+=chem[s];
              else if(bio[s]) bcount+=bio[s];
              s = "";
              continue;
          }
          else{
              s+=i;
          }
      }
      cout << bcount << endl;
      cout << ccount << endl;
      string str="";
      if(bcount > ccount)
      {
          for(auto i : line)
          {
              if(i==' '){
                  if(bio[str])
                  {
                      transform(str.begin(),str.end(),str.begin(),::toupper);
                      cout << str << " ";
                  }
                  else
                  cout << str<< " ";
                  str="";
                  continue;
              }
              else 
              {
                  str+=i;
              }
          }
          cout << str;
      }
      else if(ccount > bcount)
      {
          for(auto i : line)
          {
              if(i==' '){
                  if(chem[str])
                  {
                      transform(str.begin(),str.end(),str.begin(),::toupper);
                      cout << str<< " ";
                  }
                  else
                  cout << str << " ";
                  str="";
                  continue;
              }
              else 
              {
                  str+=i;
              }
          }
          cout << str;
      }
    }
    myfile.close();
  }

  else cout << "Unable to open file"; 

  return 0;
}