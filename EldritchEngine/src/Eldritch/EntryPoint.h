#pragma once

#ifdef EL_PLATFORM_WINDOWS

extern Eldritch::Application* Eldritch::CreateApplication();

int main(int argc, char** argv) {
	printf("Eldritch Engine\n");

	Eldritch::Log::Init();
	EL_CORE_WARN("Initialized Core Logger");
	int a = 5;
	EL_INFO("Hello Var={0}", a);

	auto app = Eldritch::CreateApplication();
	app->Run();
	delete app;
}

#endif