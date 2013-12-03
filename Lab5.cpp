#include <iostream>
#include <map>
#include <cstdlib>
#include <string>
#include <tr1/memory>

using namespace std;

class Slovo{
  string slovo;
  public:
    Slovo(string word){slovo = word;}
    Slovo():slovo("temp"){}
    string getSlovo(){return slovo;}


};


class noRespect:public exception{};
class nonValidWord:public exception{};
class tooManyWords:public exception{};


int main(){
  string temp;
  temp="detalniy";
  std::tr1::shared_ptr<Slovo> ob1(new Slovo(temp));
  temp="tochniy";
  std::tr1::shared_ptr<Slovo> ob11(new Slovo(temp));
  temp="pogoda";
  std::tr1::shared_ptr<Slovo> ob2(new Slovo(temp));
  temp="obstanovka";
  std::tr1::shared_ptr<Slovo> ob22(new Slovo(temp));
  temp="prognoz";
  std::tr1::shared_ptr<Slovo> ob3(new Slovo(temp));
  temp="predskazanie";
  std::tr1::shared_ptr<Slovo> ob33(new Slovo(temp));
  temp="dlya";
  std::tr1::shared_ptr<Slovo> ob4(new Slovo(temp));
  temp="v";
  std::tr1::shared_ptr<Slovo> ob44(new Slovo(temp));
  temp="Belarus";
  std::tr1::shared_ptr<Slovo> ob5(new Slovo(temp));
  temp="Republic of Belarus";
  std::tr1::shared_ptr<Slovo> ob55(new Slovo(temp));
  temp="segodnya";
  std::tr1::shared_ptr<Slovo> ob6(new Slovo(temp));
  temp="seichas";
  std::tr1::shared_ptr<Slovo> ob66(new Slovo(temp));
  temp="sonnechniy";
  std::tr1::shared_ptr<Slovo> ob7(new Slovo(temp));
  temp="dozdliviy";
  std::tr1::shared_ptr<Slovo> ob8(new Slovo(temp));
  temp="den' so snegom";
  std::tr1::shared_ptr<Slovo> ob9(new Slovo(temp));
  temp="zarkiy";
  std::tr1::shared_ptr<Slovo> ob100(new Slovo(temp));
  temp="ledenyaschiy";
  std::tr1::shared_ptr<Slovo> ob110(new Slovo(temp));
  temp="morozniy";
  std::tr1::shared_ptr<Slovo> ob111(new Slovo(temp));
  temp="myagkiy";
  std::tr1::shared_ptr<Slovo> ob120(new Slovo(temp));
  temp="tihiy";
  std::tr1::shared_ptr<Slovo> ob121(new Slovo(temp));
  temp="palyaschiy";
  std::tr1::shared_ptr<Slovo> ob130(new Slovo(temp));
  temp="znoyniy";
  std::tr1::shared_ptr<Slovo> ob131(new Slovo(temp));
  temp="tepliy";
  std::tr1::shared_ptr<Slovo> ob140(new Slovo(temp));
  temp="holodniy";
  std::tr1::shared_ptr<Slovo> ob150(new Slovo(temp));
  temp="holodniy";
  std::tr1::shared_ptr<Slovo> ob160(new Slovo(temp));
  temp="prohladniy";
  std::tr1::shared_ptr<Slovo> ob161(new Slovo(temp));
  temp="vetrenno";
  std::tr1::shared_ptr<Slovo> ob170(new Slovo(temp));
  temp="veter";
  std::tr1::shared_ptr<Slovo> ob180(new Slovo(temp));
  temp="duet";
  std::tr1::shared_ptr<Slovo> ob190(new Slovo(temp));
  temp="-";
  std::tr1::shared_ptr<Slovo> ob200(new Slovo(temp));
  temp="-";
  std::tr1::shared_ptr<Slovo> ob210(new Slovo(temp));
  temp="dozd'";
  std::tr1::shared_ptr<Slovo> ob220(new Slovo(temp));
  temp="solnce";
  std::tr1::shared_ptr<Slovo> ob230(new Slovo(temp));
  temp="svetit";
  std::tr1::shared_ptr<Slovo> ob240(new Slovo(temp));
  temp="sneg";
  std::tr1::shared_ptr<Slovo> ob250(new Slovo(temp));
  temp="sverkaet";
  std::tr1::shared_ptr<Slovo> ob260(new Slovo(temp));
  temp="svetitsya";
  std::tr1::shared_ptr<Slovo> ob261(new Slovo(temp));
  temp="burya";
  std::tr1::shared_ptr<Slovo> ob270(new Slovo(temp));
  temp="groza";
  std::tr1::shared_ptr<Slovo> ob271(new Slovo(temp));
  temp="vlazniy";
  std::tr1::shared_ptr<Slovo> ob280(new Slovo(temp));
  temp="grad";
  std::tr1::shared_ptr<Slovo> ob290(new Slovo(temp));
  temp="groza";
  std::tr1::shared_ptr<Slovo> ob300(new Slovo(temp));
  temp="mir";
  std::tr1::shared_ptr<Slovo> ob310(new Slovo(temp));
  temp="v";
  std::tr1::shared_ptr<Slovo> ob320(new Slovo(temp));
  temp="grom";
  std::tr1::shared_ptr<Slovo> ob330(new Slovo(temp));
  temp="prolivnoy";
  std::tr1::shared_ptr<Slovo> ob340(new Slovo(temp));
  temp="eto";
  std::tr1::shared_ptr<Slovo> ob350(new Slovo(temp));
  temp="";
  std::tr1::shared_ptr<Slovo> ob370(new Slovo(temp));
  temp="";
  std::tr1::shared_ptr<Slovo> ob360(new Slovo(temp));
  temp="";
  std::tr1::shared_ptr<Slovo> ob380(new Slovo(temp));
  temp="bil";
  std::tr1::shared_ptr<Slovo> ob390(new Slovo(temp));
  temp="bili";
  std::tr1::shared_ptr<Slovo> ob400(new Slovo(temp));
  temp="liven'";
  std::tr1::shared_ptr<Slovo> ob410(new Slovo(temp));
  temp="metel'";
  std::tr1::shared_ptr<Slovo> ob420(new Slovo(temp));
  temp="tucha";
  std::tr1::shared_ptr<Slovo> ob430(new Slovo(temp));
  temp="oblachno";
  std::tr1::shared_ptr<Slovo> ob440(new Slovo(temp));
  temp="molniya";
  std::tr1::shared_ptr<Slovo> ob450(new Slovo(temp));
  temp="chistoe";
  std::tr1::shared_ptr<Slovo> ob460(new Slovo(temp));
  multimap <string,Slovo> words;
  temp="nebo";
  std::tr1::shared_ptr<Slovo> ob470(new Slovo(temp));
  temp="tuman";
  std::tr1::shared_ptr<Slovo> ob480(new Slovo(temp));
  temp="tumanno";
  std::tr1::shared_ptr<Slovo> ob490(new Slovo(temp));

  words.insert(pair<string,Slovo>("detailed",(*ob1)));
  words.insert(pair<string,Slovo>("detailed",(*ob11)));
  words.insert(pair<string,Slovo>("weather",(*ob2)));
  words.insert(pair<string,Slovo>("weather",(*ob22)));
  words.insert(pair<string,Slovo>("forecast",(*ob3)));
  words.insert(pair<string,Slovo>("forecast",(*ob33)));
  words.insert(pair<string,Slovo>("for",(*ob4)));
  words.insert(pair<string,Slovo>("for",(*ob44)));
  words.insert(pair<string,Slovo>("Belarus",(*ob5)));
  words.insert(pair<string,Slovo>("Belarus",(*ob55)));
  words.insert(pair<string,Slovo>("today",(*ob6)));
  words.insert(pair<string,Slovo>("today",(*ob66)));
  words.insert(pair<string,Slovo>("sunny",(*ob7)));
  words.insert(pair<string,Slovo>("rainy",(*ob8)));
  words.insert(pair<string,Slovo>("snowy",(*ob9)));
  words.insert(pair<string,Slovo>("hot",(*ob100)));
  words.insert(pair<string,Slovo>("freezing",(*ob110)));
  words.insert(pair<string,Slovo>("freezing",(*ob111)));
  words.insert(pair<string,Slovo>("mild",(*ob120)));
  words.insert(pair<string,Slovo>("mild",(*ob121)));
  words.insert(pair<string,Slovo>("scorching",(*ob130)));
  words.insert(pair<string,Slovo>("scorching",(*ob131)));
  words.insert(pair<string,Slovo>("warm",(*ob140)));
  words.insert(pair<string,Slovo>("cold",(*ob150)));
  words.insert(pair<string,Slovo>("chilly",(*ob160)));
  words.insert(pair<string,Slovo>("chilly",(*ob161)));
  words.insert(pair<string,Slovo>("windy",(*ob170)));
  words.insert(pair<string,Slovo>("wind",(*ob180)));
  words.insert(pair<string,Slovo>("blows",(*ob190)));
  words.insert(pair<string,Slovo>("is",(*ob200)));
  words.insert(pair<string,Slovo>("are",(*ob210)));
  words.insert(pair<string,Slovo>("rain",(*ob220)));
  words.insert(pair<string,Slovo>("sun",(*ob230)));
  words.insert(pair<string,Slovo>("shines",(*ob240)));
  words.insert(pair<string,Slovo>("snow",(*ob250)));
  words.insert(pair<string,Slovo>("glows",(*ob260)));
  words.insert(pair<string,Slovo>("glows",(*ob261)));
  words.insert(pair<string,Slovo>("storm",(*ob270)));
  words.insert(pair<string,Slovo>("storm",(*ob271)));
  words.insert(pair<string,Slovo>("damp",(*ob280)));
  words.insert(pair<string,Slovo>("hail",(*ob290)));
  words.insert(pair<string,Slovo>("thunderstorm",(*ob300)));
  words.insert(pair<string,Slovo>("world",(*ob310)));
  words.insert(pair<string,Slovo>("in",(*ob320)));
  words.insert(pair<string,Slovo>("thunder",(*ob330)));
  words.insert(pair<string,Slovo>("showery",(*ob340)));
  words.insert(pair<string,Slovo>("it",(*ob350)));
  words.insert(pair<string,Slovo>("a",(*ob360)));
  words.insert(pair<string,Slovo>("an",(*ob370)));
  words.insert(pair<string,Slovo>("the",(*ob380)));
  words.insert(pair<string,Slovo>("was",(*ob390)));
  words.insert(pair<string,Slovo>("were",(*ob400)));
  words.insert(pair<string,Slovo>("shower",(*ob410)));
  words.insert(pair<string,Slovo>("snow-storm",(*ob420)));
  words.insert(pair<string,Slovo>("cloud",(*ob430)));
  words.insert(pair<string,Slovo>("cloud",(*ob440)));
  words.insert(pair<string,Slovo>("lightning",(*ob450)));
  words.insert(pair<string,Slovo>("clear",(*ob460)));
  words.insert(pair<string,Slovo>("sky",(*ob470)));
  words.insert(pair<string,Slovo>("fog",(*ob480)));
  words.insert(pair<string,Slovo>("foggy",(*ob490)));
  cout<<"Container:"<<endl;
  multimap <string,Slovo>::iterator i;
  for (i=words.begin();i!=words.end();i++)
    cout<<i->first<<":"<<i->second.getSlovo()<<endl;
  cout<<endl;
  string str,tempStr[8];
  int n=0;
  cout<<"please enter frase to translate."<<endl<<"To exit enter 'exit'"<<endl;/*'detailed weather forecast for Belarus today'*/
  while(str!="exit"){
    cin>>str;
    if(str=="belarus")
      throw noRespect();
    if(n>8)
      throw tooManyWords();
    if(str!="exit")
      if(words.count(str)==0)
        throw nonValidWord();
    tempStr[n]=words.find(str)->second.getSlovo();
    n++;
  }
  for(int i=0;i<n;i++)
    cout<<tempStr[i]<<" ";
  system("pause");
  return 0;
}
