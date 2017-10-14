# include <iostream>

using namespace std;

const int N = 100;
int n;
int v[100];	

void add(int elem, int pos) {
	if (pos == N) {
		cout << "Overflow" << endl;
	} else if (pos < 1 || pos > n) {
		cout << "Invalid" << endl;
	} else {
		for (int i = n - 1; i >= pos - 1; i--) {
			v[i + 1] = v[i];
		}
		v[pos - 1] = elem;
		n++;
	}
}

void del(int pos) {
    if (pos < 1 || pos > n) {
		cout << "Invalid" << endl;
	} else {
		for (int i = pos; i < n; i++) {
			v[i] = v[i + 1];
		}
		n--;
	}
}

void access(int pos) {
   if (pos < 1 || pos > n) {
		cout << "Invalid" << endl;
	} else {
		cout << v[pos] << endl;
	}
}

void modify(int elem, int pos) {
   if (pos < 1 || pos > n) {
		cout << "Invalid" << endl;
	} else {
		v[pos] = elem;
	}
}

void make() {
	for (int i = 0; i < n; i++) {
		cout << "v[" << i + 1 << "] = ";
		cin >> v[i];
	}
}

void show() {
	for (int i = 0; i < n; i++) {
		cout << "v[" << i + 1 << "] = " << v[i] << endl;
	}
}

int main() {
	int a;
	cout << "1. Add Element \n"
	        "2. Delete Element \n"
	        "3. Access Element \n"
	        "4. Modify Element \n"
	        "5. Create List \n"
	        "6. Show List \n";

	do {
		cout << "a = ";
		cin >> a;
		
		switch(a) {
			case 1:
				int val, pos;
				cout << "Val = ";
				cin >> val;
				cout << "Pos = ";
				cin >> pos;
				add(val, pos);
				break;
			case 2: 
			    int dpos;
				cout << "Index = ";
				cin >> dpos;
				del(dpos);
				break;
			case 3: 
				int apos;
				cout << "Index = ";
				cin >> apos;
				access(apos + 1);
				break;
			case 4: 
				int mpos, mval;
				cout << "Index = ";
				cin >> mpos;
				cout << "Val = ";
				cin >> mval;
				modify(mval, mpos + 1);
				break;
			case 5: 
				cout << "n = ";
				cin >> n;
				make();
				break;		
			case 6: 
				show();
				break;
			default: 
				cout << "Exit!";
		}
	} while (a);
}
