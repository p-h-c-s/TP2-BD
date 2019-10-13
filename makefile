# My first makefile

all: upload
	./upload data/$(data)
# printy: src/upload.o src/Block.o
# 	g++ -o printy src/upload.o src/Block.o 
upload:
	g++ src/upload.cpp src/Block.cpp src/hashFile.cpp src/Line.cpp -o upload
# Block.o: Block.cpp Block.h
# 	g++ -o Block.o src/Block.cpp

find: createFind
	./findrec $(id)

createFind:
	g++ src/findrec.cpp src/Block.cpp src/hashFile.cpp src/Line.cpp -o findrec

clean:
	rm -rf src/*.o upload