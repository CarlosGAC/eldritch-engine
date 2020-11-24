#pragma once

#include "Core.h"

namespace Eldritch {
	class EL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in the Client
	Application* CreateApplication();
}

