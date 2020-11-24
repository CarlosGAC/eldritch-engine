#include <Eldritch.h>

class Sandbox : public Eldritch::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Eldritch::Application* Eldritch::CreateApplication() {
	return new Sandbox();
}

