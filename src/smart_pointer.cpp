#include <iostream>
#include <memory>

struct Content {
private:
	std::string info;
public:
	Content(std::string l_info) : info(l_info) {}
	void getInfo() {
		std::cout << info << '\n';
	}
};

int main()
{

	/* 01 - STACK
	Content c("Olá, amigo?!");
	c.getInfo();
	*/

	/* 02 - MEMORIA BRUTA
	Content *c = new Content("Olá, Mundo!");
	c->getInfo();
	delete c;
	*/

	std::shared_ptr<Content> c = std::make_shared<Content>("Beleza, amigo!");
	c->getInfo();

	std::unique_ptr<Content> d = std::make_unique<Content>("Ok, né?");
	d->getInfo();

	return 0;
}
