#include "Engine.h"
int main()
{
	Engine* engine = new Engine();
	


	int exitCode = engine->run();

	delete engine;

	return exitCode;
}