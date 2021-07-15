add-nbo: task.o
	gcc task.o -o add-nbo

add-nob.o: task.cpp
	gcc -c task.cpp
