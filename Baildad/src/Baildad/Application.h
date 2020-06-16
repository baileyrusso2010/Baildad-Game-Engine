#pragma once
#include "Core.h"

namespace Baildad {

	class BAILDAD_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	Application* CreateApplication();
}