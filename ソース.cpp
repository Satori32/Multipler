#include <iostream>
#include <cmath>

template<class T>
struct Multipler {
	T Base = 1;
};

template<class T>
bool ConstructMultipler(Multipler<T>& In, const T& Base) {
	In.Base = Base;
	return true;
}

template<class T>
T Multi(const Multipler<T>& In ,const T& M) {
	return In.Base * M;
}
template<class T>
Multipler<T> MultiM(const Multipler<T>& In ,const T& M) {
	Multipler<T> Mu;
	ConstructMultipler(Mu, In.Base * M);
	return Mu;
}
template<class T>
T Exponentiation(const Multipler<T>& In ,const T& M) {
	return std::pow(In.Base,M);
}

int main() {
	Multipler<int> M;

	ConstructMultipler(M, 3);
	auto X = MultiM<int>(MultiM(M, 4), 3);

	auto A = Exponentiation(M, 8);

	return 0;
}