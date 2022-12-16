main:
	bison -d project.y
	flex project.l
	gcc project.tab.c lex.yy.c
	./a.out <input.txt> output.txt