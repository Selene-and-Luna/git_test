#include <iostream>
using namespace std;
class Main{
	private:
		string s;
	public:
		Main(){
			this->s = "";
		}
		void prints(){
			cout << this->s << '\n';
		}
		void changes(){
			string s;
			cin >> s;
			this->s = s;
		}
		string getstring(){
			return this->s;
		}
};

int main(int argc, char *argv[]){
	Main m;
	m.changes();
	m.prints();
	cout << "Hello World\n";
}
