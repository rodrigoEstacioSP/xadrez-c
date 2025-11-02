all:
	gcc -o ./exec *.c
	echo "Start..."
	./exec
	rm exec