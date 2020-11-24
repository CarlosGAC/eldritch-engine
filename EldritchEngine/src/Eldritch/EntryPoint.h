#pragma once

#ifdef EL_PLATFORM_WINDOWS

extern Eldritch::Application* Eldritch::CreateApplication();

int main(int argc, char** argv) {
	printf("Eldritch Engine\n");
	auto app = Eldritch::CreateApplication();
	app->Run();
	delete app;
}

#endif