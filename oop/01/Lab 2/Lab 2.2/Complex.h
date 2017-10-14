class Complex
{
  double re, im;

public:
  void init(double re, double im);
  void print();
  void setRe(double re);
  void setIm(double im);
  Complex add(Complex c);
  // Complex conj();
};
