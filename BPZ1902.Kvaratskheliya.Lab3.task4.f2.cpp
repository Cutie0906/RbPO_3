module BPZ1902.Kvaratskheliya.Lab3.Task4:f2;
namespace RBPO {
	namespace Lab3 {
		namespace Task4 {
			double f2(double x) {
				if (x > 3.6) return (45 * pow(x, 2) - 5 * x);
				else return (5 * x / (10 * pow(x, 2) + 1));
			}
		}
	}
}