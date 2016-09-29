#include "neural.h"

using namespace std;

namespace dneural{

  Neural::Neural(){
    name="Default_Name"; 

  } 

  string Neural::getName(){
//    string nameToReturn = "testing name";
    return name;
  }

  void Neural::setName(string inputName){
    name=inputName;

  }

}

