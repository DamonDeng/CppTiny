#include <glog/logging.h>
#include <iostream>
#include "neural/neural.h"

using namespace std;
using namespace dneural;

int main(int argc, char* argv[]){
  cout << "first main function of simple_start" << endl<< endl;
  cout << "Rock said: What are you doing?" << endl<<endl;
  cout << "Papa is writing some testing code." << endl<<endl;
  cout << "Trying to write some code with objects" << endl << endl;

  google::InitGoogleLogging(argv[0]);

  LOG(INFO) << "Information logging with LOG fuction from glog/logging.h";
  LOG(ERROR) << "Error message I want to write";

  Neural testingNeural = Neural();
  string theNameWeGot = testingNeural.getName();

  cout << "The name we got is: " << theNameWeGot << endl;

  cout << "After we set the name:" << endl;

  testingNeural.setName("my new name");

  theNameWeGot = testingNeural.getName();

  cout << "Now the name is: " << theNameWeGot << "." << endl;


  return (0);
}
