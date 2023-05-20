#pragma once
#include "Core.h"

namespace GE {

	class GE_API Application {
		public:
			Application();
			virtual ~Application();
			void Run();
	};

	// TO BE DEFINED IN CLIENT
	Application* createApplication();

}
