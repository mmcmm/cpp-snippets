#include "Sportiv.h"

class Tenismen : public Sportiv
{
  int locATP;
  int nrTurnee;
  int *locuriTurnee;

public:
  Tenismen();

  void setLocATP(int locATP);
  int getLocAtp();
  void setNrTurnee(int nrTurnee);
  int getNrTurnee();

  Tenismen &operator+=(int t);
  int &operator[](int i);
};