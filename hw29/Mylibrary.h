//
//  Mylibrary.h
//  hw29
//
//  Created by Дима on 15.10.23.
//

#ifndef Mylibrary_h
#define Mylibrary_h

#pragma once
#include<iostream>
#include<string.h>
using namespace std;

struct IFly   // интерфейс для летающих
{
    virtual void Fly() = 0;
};
struct ISwim   // интерфейс для всех животных
{
    virtual void Swim() = 0;
};

struct IAnimal {                //интерфейс для всех животных
    virtual void Sound() = 0;
    virtual void Eat() = 0;
    virtual void Continent()const = 0;
};


class Animal: public IAnimal  // интерфейс для плавающих
{
protected:
    string name;
    int kg;
    string continent;
public:
    Animal() = default;
    Animal(string n, int k, string cont): name(n), kg(k), continent(cont){}
    void Print()
    {
        cout << "Name: " << name << "Kg: " << kg << "continent: " << continent <<endl;
    }
  
};

class Pinguin: public Animal, public ISwim
{

public:
    Pinguin() = default;
    Pinguin(string n, int k, string cont) :Animal(n, k, cont)
    {
    }
    // Â‡ÎËÁ‡ˆËˇ ËÌÚÂÙÂÈÒ‡ IAnimal
    virtual void Eat()
    {
        cout << "Pinguins eat fish" << endl;
    }
    virtual void Sound()
    {
        cout << "Pinguins sound" << endl;
    }
    virtual void Continent()
    {
        cout << "Pinguins live in " << continent << endl;
    }
    // Â‡ÎËÁ‡ˆËˇ ËÌÚÂÙÂÈÒ‡ ISwim

    virtual  void Swim()
    {
        cout << "Pinguins swim" << endl;
    }

};

class Parrot: public Animal, public IFly{
public:
    Parrot() = default;
    Parrot(string n, int k, string cont) : Animal(n, k, cont) {
    }
    virtual void Sound() {
        cout << "Parrots sound" << endl;
    }
    virtual void Eat() {
        cout << "Parrots eat" << endl;
    }
    virtual void Continent()const {
        cout << "Parrots live in: " << continent << endl;
    }
    virtual void Fly() {
        cout << "Parrots can fly" << endl;
    }
};

#endif /* Mylibrary_h */
