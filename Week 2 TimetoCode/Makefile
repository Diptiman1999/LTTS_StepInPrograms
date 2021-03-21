Compiler=gcc

PROJECT_NAME= Complex

INC=unity

SRC= sum.c\
diff.c\
multiply.c\
divide.c\
test_complex.c

TEST =unity/unity.c

$(PROJECT_NAME).exe: $(SRC) $(TEST)
	$(Compiler) -I $(INC) $(SRC) $(TEST) -o $(PROJECT_NAME).exe

run:
	.\$(PROJECT_NAME).exe
