#!/bin/bash

clean:
	rm -f lib/*.o
	rm -f test/*-test

test-good: Demand.o Good.o
	g++ lib/Demand.o lib/Good.o test/src/Good.test.cpp -o test/good-test
	./test/good-test

test-goods-network: Demand.o Good.o Bread.o Flour.o GoodsNetwork.o
	g++ lib/Demand.o lib/Good.o \
	lib/TangibleGoods/Bread.o lib/TangibleGoods/Flour.o \
	lib/GoodsNetwork.o test/src/GoodsNetwork.test.cpp \
	-o test/goods-network-test

Bread.o:
	g++ -c src/TangibleGoods/Bread.cpp -o lib/TangibleGoods/Bread.o

Demand.o:
	g++ -c src/Demand.cpp -o lib/Demand.o

Flour.o:
	g++ -c src/TangibleGoods/Flour.cpp -o lib/TangibleGoods/Flour.o

Good.o:
	g++ -c src/Good.cpp -o lib/Good.o

GoodsNetwork.o:
	g++ -c src/GoodsNetwork.cpp -o lib/GoodsNetwork.o
