///////////////////////////////////////////////////////////
//  ConcreteProductA.h
//  Implementation of the Class ConcreteProductA
//  Created on:      01-十月-2014 18:41:33
//  Original author: colin
///////////////////////////////////////////////////////////

#if !defined(EA_7A08FFBB_5AD4_4f9c_AE53_998AC5E88F34__INCLUDED_)
#define EA_7A08FFBB_5AD4_4f9c_AE53_998AC5E88F34__INCLUDED_

#include "Product.h"

class ConcreteProductA : public Product
{

public:
	ConcreteProductA();
    // 虚析构函数(有道笔记搜一下), 非基类，可以不写virtual吧
	virtual ~ConcreteProductA();

    // virtual可以省略，但是写出，就是代码更清晰了
	virtual void Use();

};
#endif // !defined(EA_7A08FFBB_5AD4_4f9c_AE53_998AC5E88F34__INCLUDED_)
