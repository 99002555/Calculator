#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_squares(void);
void test_cubes(void);
void test_power(void);
void test_max(void);
void test_factorial(void);
void test_prime(void);
void test_average(void);
void test_swap(void);

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
  CU_add_test(suite, "cubes", test_cubes);
  CU_add_test(suite, "power", test_power);
   CU_add_test(suite, "max", test_max);
   CU_add_test(suite, "factorial", test_factorial);
   CU_add_test(suite, "prime", test_prime);
   CU_add_test(suite, "average", test_average);
   CU_add_test(suite, "swap", test_swap);
   

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
  CU_ASSERT(30 == add(10, 20));

  /* Dummy fail*/
  CU_ASSERT(1500 == add(750, 7500));
}

void test_subtract(void) {
  CU_ASSERT(-3 == subtract(0, 3));

  /* Dummy fail*/
  CU_ASSERT(1 == subtract(1000, 900));
}

void test_multiply(void) {
  CU_ASSERT(0 == multiply(1, 0));

  /* Dummy fail*/
  CU_ASSERT(2 == multiply(2, 5));
}

void test_divide(void) {
  CU_ASSERT(0 == divide(1, 0));

  /* Dummy fail*/
  CU_ASSERT(3 == divide(2, 2));
}

void test_squares(void)
 {
   CU_ASSERT(25 == squares(5));
   CU_ASSERT(4 == prime(-2));
 }

void test_cubes(void)
{
  CU_ASSERT(27== cubes(3));
}

void test_power(void)
{
  CU_ASSERT(8 == power(2,3));
}

void test_max(void)
{
  CU_ASSERT(3, max(2,3));
  CU_ASSERT(2, max(-1,2));
  }
 
 void test_factorial(void)
 {
 CU_ASSERT(120 == factorial(5));
 }
 
 void test_prime(void)
 {
   CU_ASSERT(-1 == prime(5));
   CU_ASSERT(1 == prime(4));
 }

void test_average(void)
{
CU_ASSERT(3.5 == average(2,5));
CU_ASSERT(2 == average(0,4));
}

void test_swap(void)
{
CU_ASSERT(swap(2,3)== swap(3,2));
}
