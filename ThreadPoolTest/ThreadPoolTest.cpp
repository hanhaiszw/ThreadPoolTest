// ThreadPoolTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "ThreadPool.h"
#include "Aniaml.h"
#include <thread>

//线程池测试方法

using std::thread;
using std::cout;
using std::endl;

void test01(int param) {

	std::cout << param << std::endl;
	cout << "test01 thread is " << std::this_thread::get_id() << endl;
}
void test02(int param) {

	std::cout << param << std::endl;
	cout << "test02 thread is " << std::this_thread::get_id() << endl;
}

int main()
{
	// create thread pool with 4 worker threads
	ThreadPool pool(1);


	// enqueue and store future
	//auto result = pool.enqueue([](int answer) { return answer*2; }, 42);

	// get result from future
	//std::cout << result.get() << std::endl;

	auto result = pool.enqueue(test01, 32);
	auto result1 = pool.enqueue(test02, 16);

	auto result2 = pool.enqueue(test01, 8);
	//类的成员发送
	//Animal a(340);
	//auto result = pool.enqueue(&Animal::print, a, 1);

	cout << "主线程id is " << std::this_thread::get_id() << endl;
	system("pause");
    return 0;
}

