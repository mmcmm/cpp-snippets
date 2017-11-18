
class Fractie {
	int nr, num;
public:	
	Fractie();
	Fractie(int nr, int num);
	void afisare();
	void setNr(int v);
	void setNum(int v);
	int getNr();
	int getNum();
	Fractie operator+(Fractie f2);
	friend Fractie operator*(Fractie f1, Fractie f2);
	friend Fractie operator*(int v, Fractie f);
	Fractie& operator~();
};