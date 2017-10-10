
# include <iostream>

using namespace std;


int main() {
	int n, nrpoz = 0, nrneg = 0;
	
	cout << "n =";
	cin >> n;
	
	int *v = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "v["<<i<<"] =";
		cin >> v[i];
	
		if (v[i] > 0) {
			nrpoz++;
		} else if (v[i] < 0) {
			nrneg++;
		}
	}

	int *vp = new int[nrpoz];
	int *vn = new int[nrneg];
	nrpoz = 0;
	nrneg = 0;	
	for (int i = 0; i < n; i++) {
		if (v[i] > 0) {
			vp[nrpoz++] = v[i];
		} else if (v[i] < 0) {
			vn[nrneg++] = v[i];
		}
	}
	
	for (int i = 0; i < nrpoz; i++) {
		cout << vp[i] << " ";	
	}
	
	cout << endl;
	
	for (int i = 0; i < nrneg; i++) {
		cout << vn[i] << " ";	
	}
	
	delete [] v;
	delete [] vp;
	delete [] vn;
	
	return 0;
}