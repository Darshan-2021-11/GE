#pragma once

#ifdef GE_PLATFORM_WINDOWS

int main(int argc, char** argv) {
	(void) argc;
	(void) argv;

	GE::Log::Init();
	GE::Log::GetCoreLogger()->warn("Initialized log!");
	GE::Log::GetClientLogger()->info("This is Client logger!");
	auto app = GE::createApplication();
	app->Run();
	delete app;
}

#endif // GE_PLATFORM_WINDOWS
