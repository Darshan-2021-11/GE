#include <GE.h>

class SandBox : public GE::Application {
	public:
		SandBox() {

		}
		~SandBox() {

		}
};

GE::Application * GE::createApplication() {
	return new SandBox();
}
