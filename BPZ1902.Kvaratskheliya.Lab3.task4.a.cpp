module BPZ1902.Kvaratskheliya.Lab3.Task4:a;
namespace RBPO {
	namespace Lab3 {
		namespace Task4 {
			double a(int i) {
				return pow(-1.0, i) * ((i + 1) / (pow(2, double(i - 1))));
			}
		}
	}
};
