
#include "stack.hpp"

//***********************************************
// Member function add. add pops                *
// the first two values off the stack and       *
// adds them. The sum is pushed onto the stack. *
// pre: no parameters                           *
// post: return the  new stack entry of sum     *
//***********************************************
template<class T>
void Stack<T>::add()
{
    T num, sum;

    // Pop the first two values off the stack.
    this->pop(sum);
    this->pop(num);

    // Add the two values, store in sum.
    sum += num;

    // this->push sum back onto the stack.
    this->push(sum);
}

//***********************************************
// Member function sub. sub pops the            *
// first two values off the stack. The          *
// second value is subtracted from the          *
// first value. The difference is pushed        *
// onto the stack.                              *
// pre: no parameters                           *
// post: return the  new stack entry of diff    *
//***********************************************
template<class T>
void Stack<T>::sub()
{
    T num, diff;

    // Pop the first two values off the stack.
    this->pop(diff);
    this->pop(num);

    // Subtract num from diff.
    diff -= num;

    // Push diff back onto the stack.
    this->push(diff);
}
template<class T>
void Stack<T>::mult()
{
    T num, prod;
    // Pop the first two values off the stack.
    this->pop(prod);
    this->pop(num);

    // Multiply the two values, store in prod.
    prod *= num;

    // Push prod back onto the stack.
    this->push(prod);
}
template<class T>
void Stack<T>::div()
{

    T num, den, quotient;

    // Pop the first two values off the stack.
    this->pop(den);
    this->pop(num);
    // Divide the 2 values and store into the quotient.
    quotient = num/den;

    // Push quotient back onto the stack.
    this->push(quotient);
}
//Adds all the values on the stack
template<class T>
void Stack<T>::addAll()
{
    T num, sum, totalSum;
    sum = 0;
    //set initial sum to 0
    bool emptyStack;
    //Check to see if the stack is empty before adding.
    emptyStack = NumStack<T>::isEmpty();
    while(!emptyStack)
       {
            //Pop this cherry ;P
            //Pop the top number and store it to num
            this->pop(num);
            sum += num;
            //set sum equal to sum + num
            emptyStack = NumStack<T>::isEmpty();
            //make sure the stack is not empty

       }
       totalSum = sum;

    // Push sum back onto the stack.
    this->push(totalSum);
}
template<class T>
void Stack<T>::multAll()
{
    T num = 0, prod = 0, totalProd = 0;
    bool emptyStack;
    emptyStack = NumStack<T>::isEmpty();
    this->pop(prod);
    while(!emptyStack)
       {
            this->pop(num);
            prod *= num;
            emptyStack = NumStack<T>::isEmpty();

       }
       totalProd = prod;

    // Push Prod back onto the stack.
    this->push(totalProd);
}
template class Stack<int>;
template class Stack<double>;
