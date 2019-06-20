#pragma once

class Dog
{
public:
	void bark();
	Dog(); //Este é o constructor
	~Dog(); // Este é o destructor

private:
	bool happy;
};

class Cat
{
public:
	Cat(); //Este é o constructor
	~Cat(); // Este é o destructor
	void meouw();

private:
	bool happy;
};