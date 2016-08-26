#include <glog/logging.h>
#include <iostream>
#include "neural/neural.h"

using namespace std;

int main(int argc, char* argv[]){
  cout << "first main function of simple_start" << endl<< endl;
  cout << "Rock said: What are you doing?" << endl<<endl;
  cout << "Papa is writing some testing code." << endl<<endl;
  cout << "Trying to write some code with objects" << endl << endl;

  LOG(INFO) << "Information logging with LOG fuction from glog/logging.h";

  Neural testingNeural = Neural();
  string theNameWeGot = testingNeural.getName();

  cout << "The name we got is: " << theNameWeGot << endl;

  return (0);
}
