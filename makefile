rps:
	gcc src/rps.c src/ic.c src/op.c -Wall -O3 -lgsl -lgslcblas -lm -o rps.out

clean:
	@rm -rf dat/*
	@rm -rf plt/*
	@rm -rf *.out

#Wall			--> Ativa mensagens de erro 
#O3				-->	Orimização do código
#lgsl			--> Chamar biblioteca gsl
#lsglblas	--> Chamar biblioteca gsl
#lm				-->	Biblioteca math.h
#o				-->	Dar nome ao arquivo rps.c
