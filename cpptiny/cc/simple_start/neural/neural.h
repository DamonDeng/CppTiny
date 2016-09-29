#ifndef DAMONDENG_NEURAL
#define DAMONDENG_NEURAL

#include <iostream>

using namespace std;

namespace dneural {




  class Neural{
    public:
      Neural();
      string getName();
      void setName(string inputName);

    private:
      string name;

  };

}

#endif
