#include "calculator.h"

int Calculator::Add (double a, double b)
{

    return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
	return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

/*
Ой, Лех, Лех, 
Мне без тебя так плохо,
На сердце суматоха
Я точно говорю...
Ой, Лех, Лех,
Не потерплю подвоха,
осталось только охать.
Я так тебя люблю!
*/