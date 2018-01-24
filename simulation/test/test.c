#include "../minunit.h"
#include "../input_parameters.h"

MU_TEST(test_check) {
	mu_check(h() == 0.5);
}
MU_TEST_SUITE(test_suite) {
	MU_RUN_TEST(test_check);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return 0;
}