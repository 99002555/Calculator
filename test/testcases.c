#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <operation.h>
#define PROJECT_NAME "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_hcf(void);
void test_lcm(void);
void test_leftshift(void);
void test_rightshift(void);
void test_squares(void);
void test_cubes(void);
void test_average(void);
void test_swap(void);
void test_power(void);
void test_max(void);
void test_factorial(void);
void test_prime(void);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */


  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "subtract", test_subtract);
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);
  CU_add_test(suite, "squares", test_squares);
  CU_add_test(suite, "hcf", test_divide);
  CU_add_test(suite, "cubes", test_cubes);
  CU_add_test(suite, "lcm", test_divide);
  CU_add_test(suite, "power", test_power);
  CU_add_test(suite, "leftshift", test_divide);
   CU_add_test(suite, "max", test_max);
  CU_add_test(suite, "rightshift", test_divide);
   CU_add_test(suite, "factorial", test_factorial);
  CU_add_test(suite, "swap", test_swap);
   CU_add_test(suite, "prime", test_prime);
   CU_add_test(suite, "average", test_average);
   
   

/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */
void test_add(void) {
  CU_ASSERT(70 == add(20, 50));

  /* Dummy fail*/
  CU_ASSERT(1200 == add(250, 1500));
}

void test_subtract(void) {
  CU_ASSERT(-9 == subtract(0, 9));

  /* Dummy fail*/
  CU_ASSERT(1 == subtract(100, 90));
}

void test_multiply(void) {
  CU_ASSERT(0 == multiply(1, 0));

  /* Dummy fail*/
  CU_ASSERT(2 == multiply(2, 5));
}

void test_divide(void) {
  CU_ASSERT(0 == divide(1, 0));

  /* Dummy fail*/
  CU_ASSERT(3 == divide(5,4));
}

void test_squares(void)
 {
   CU_ASSERT(16 == squares(4));
   CU_ASSERT(9 == prime(-3));
 }

void test_cubes(void)
{
  CU_ASSERT(125== cubes(5));
}

void test_power(void)
{
  CU_ASSERT(32 == power(2,5));
}

void test_max(void)
{
  CU_ASSERT(9== max(2,9));
  CU_ASSERT(0==max(-1,0));
  }
 
 void test_factorial(void)
 {
 CU_ASSERT(720 == factorial(6));
 }
 
 void test_prime(void)
 {
   CU_ASSERT(-1 == prime(7));
   CU_ASSERT(1 == prime(9));
 }

void test_average(void)
{
CU_ASSERT(7.5 == average(6,3));
CU_ASSERT(5 == average(0,10));
}

void test_swap(void)
{
CU_ASSERT(swap(6,7)== swap(7,6));
}

void test_hcf(void)
{
CU_ASSERT(1== hcf(4,5));
}
void test_lcm(void)
{
  CU_ASSERT(24==lcm(6,8));
}
void test_leftshift(void)
{
  CU_ASSERT(18==leftshift(3,1));
}
void test_rightshift(void)
{
  CU_ASSERT(18==rightshift(3,1));
}


