#include <stdio.h>
#include "CuTest.h"

CuSuite * pruebasave();

void
RunAllTests(void)
{
	CuString * output = CuStringNew();
	CuSuite * suite = CuSuiteNew();
	CuSuiteAddSuite(suite, frontSuiteTest());
	CuSuiteRun(suite);
	CuSuiteSummary(suite, output);
	CuSuiteDetails(suite, output);
	printf("%s\n", output->buffer);
}

int
main(void)
{
	RunAllTests();
}

