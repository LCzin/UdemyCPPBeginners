#pragma once

class Dog
{
public:
	void bark();
	Dog(); //Este � o constructor
	~Dog(); // Este � o destructor

private:
	bool happy;
};

class Cat
{
public:
	Cat(); //Este � o constructor
	~Cat(); // Este � o destructor
	void meouw();

private:
	bool happy;
};