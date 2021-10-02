#include <stdio.h>
#include <stdlib.h>

const double PI = 3.1415926536;

int main(int argc, char* argv[]) {
	if (argc != 4) {
		printf("usage: esr <tangent-of-loss-angle> <test-freq> <capacitor-value-uF>\n");
		return 1;
	}

	const double tan_loss_theta = atof(argv[1]);
	const double test_freq = atof(argv[2]);
	const double capacitor_value = atof(argv[3]);
	
	const double esr = tan_loss_theta / 
		(2 * PI * test_freq * (capacitor_value / 1000000.0));

	printf("ESR: %lf\n", esr);
		
	return 0;
}
