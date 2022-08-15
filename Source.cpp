
#include "expch.h";

namespace expc {
	using byte = unsigned char;
	using word = unsigned short;

	bool is_digits(const std::string& str)
	{
		return str.find_first_not_of("0123456789") == std::string::npos;
	}

	bool XOR(bool a, bool b) {
		return NOT(a OR b) AND(NOT a OR not b);
	}

	bool NAND(bool a, bool b) {
		return NOT(a AND b);
	}

	template <typename T>
	void print(T in) {
		cout << in;
	}
	template <typename T>
	void println(T in) {
		cout << in << endl;
	}

	template <typename T>
	string tostr(T in)
	{
		std::ostringstream strs;
		strs << in;
		std::string out = strs.str();
		return out;
	}

	//Function aborts when nonnumerics are passed to it
	template <typename T>
	int toint(T in) {
		string val = tostr(in);
		return stoi(val);
	}
	template <typename T>
	long tolong(T in) {
		string val = tostr(in);
		return stol(val);
	}
	template <typename T>
	long long tolonglong(T in) {
		string val = tostr(in);
		return stoll(val);
	}
	template <typename T>
	double todouble(T in) {
		string val = tostr(in);
		return stod(val);
	}
	template <typename T>
	float tofloat(T in) {
		string val = tostr(in);
		return stof(val);
	}
	template <typename T>
	long double tolongdouble(T in) {
		string val = tostr(in);
		return stold(val);
	}


}

using namespace expc;

int main() {
	byte a = 0b00111111;
	word b = 0xFafa;
	int c = 0xFAfaFAfa;
	long d = 50;
	double e = 50;
	float f = 50;
	string g = "string";


	println(typeid(a).name());
	println(typeid(b).name());
	println(typeid(c).name());
	println(typeid(d).name());
	println(typeid(e).name());
	println(typeid(f).name());
	println(typeid(g).name());
	println(typeid(typeid(5).name()).name());
	println("-------------");
	println(typeid(tostr(56.65)).name());
	println(tostr(56.65));
	println(tolonglong("6707.756565464"));
	println(tolong(67.875));
	println(tolonglong(-65764));
	println(tolongdouble(0b0101));
}

