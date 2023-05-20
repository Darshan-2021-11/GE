#pragma once

#ifdef GE_PLATFORM_WINDOWS

extern GE::Application* GE::createApplication();

int main(int argc, char**argv) {
	(void) argc;
	(void) argv;
	auto app = GE::createApplication();
	app->Run();
	delete app;
}

#endif // GE_PLATFORM_WINDOWS
