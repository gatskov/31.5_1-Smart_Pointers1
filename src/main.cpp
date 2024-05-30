#include "dog.h"

std::shared_ptr<Toy> ball = std::make_shared<Toy>("Ball");
std::shared_ptr<Toy> bone = std::make_shared<Toy>("Bone");
std::shared_ptr<Toy> stick = std::make_shared<Toy>("Stick");
std::shared_ptr<Toy> ring = std::make_shared<Toy>("Ring");

Dog Drushok(ball);
Dog Recks(bone);
Dog Pushok(stick);
Dog Myshtar(ring);

void PrintToy();

int main()
{
	std::cout << "+- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -+\n";
	std::cout << "| 31.5 Practical Work.Task 1. Using a smart pointer |\n";
	std::cout << "+- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -+\n\n";

	PrintToy();
	Drushok.dropToy(ball);
	PrintToy();

	Myshtar.dropToy(ring);
	PrintToy();

	Drushok.getToy(ring);
	PrintToy();

	Pushok.getToy(ball);
	PrintToy();

	Pushok.getToy(ball);
	PrintToy();

	return 0;
}
void PrintToy()
{
    std::cout << "Ball = " << ball.use_count() - 1 << ", "
              << "Bone = " << bone.use_count() - 1 << ", "
              << "Stick = " << stick.use_count() - 1 << ", "
              << "Ring = " << ring.use_count() - 1 << " \n"
              << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}