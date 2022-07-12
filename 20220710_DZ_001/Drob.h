#pragma once

class Drob
{
	int num, denom;

public:

	Drob(): Drob(0){}
	Drob(int num) : Drob(num , 1) {}
	Drob(int num, int denom)
	{
		setNum(num);
		setDenom(denom);
	}

	void setNum(int num)
	{
		this->num = num;
	}

	void setDenom(int denom)
	{
		this->denom = denom != 0 ? denom : 1;
	}

	int getNum()
	{
		return this->num;
	}

	int getDenom()
	{
		return this->denom;
	}

	Drob addFractions(Drob b)
	{
		Drob res;
		res.num = this->num * b.denom + b.num * this ->denom;
		res.denom = this->denom * b.denom;
		return res;
	}

	Drob subFractions(Drob b)
	{
		Drob res;
		res.num = this->num * b.denom - b.num * this->denom;
		res.denom = this->denom * b.denom;
		return res;		
	}
	
	Drob multFractions(Drob b)
	{
		Drob res;
		res.num = this->num * b.num;
		res.denom = this->denom * b.denom;
		return res;		
	}

	Drob divFractions(Drob b)
	{
		Drob res;
		res.num = this->num * b.denom;
		res.denom = this->denom * b.num;
		return res;
	}
};