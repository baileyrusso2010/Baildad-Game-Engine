#pragma once

#ifdef BD_PLATFORM_WINDOWS

extern Baildad::Application* Baildad::CreateApplication();

int main(int argc, char** argv) {
	auto app = Baildad::CreateApplication();
	app->Run();
	delete app;

}

#endif