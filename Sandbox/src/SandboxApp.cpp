#include "Baildad.h"

class Sandbox : public Baildad::Application {
public:
	Sandbox() {


	}
	~Sandbox() {

	}
};

Baildad::Application* Baildad::CreateApplication() {
	return new Sandbox();
}

