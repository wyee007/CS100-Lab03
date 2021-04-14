#ifndef __ADD_HPP__
#define __ADD_HPP__
#include "op.hpp"
using namespace std;
class Add : public Base{
	public:
		Add(Base* firstNum, Base* secondNum) : Base() {
			firstString = firstNum -> stringify();
			secondString = secondNum -> stringify();
			firstNumber = firstNum -> evaluate();
			secondNumber = secondNum -> evaluate();
		}
                virtual string stringify() {
                        string temp2 = "(" + firstString + ") + ("  + secondString + ")";
                        return temp2;
		}

		virtual double evaluate(){
			double temp = firstNumber + secondNumber;
			return temp;
		}
	
	private:
		double firstNumber;
		double secondNumber;
		string firstString;
		string secondString;
	};
#endif
