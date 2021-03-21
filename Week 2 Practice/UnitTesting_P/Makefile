Compiler=gcc

PROJECT_NAME= Calculator

INC=unit

SRC= calculator.c\
test_calculator.c

TEST =unit/unity.c

$(PROJECT_NAME).exe: $(SRC) $(TEST)
	$(Compiler) -I $(INC) $(SRC) $(TEST) -o $(PROJECT_NAME).exe

run:
	.\$(PROJECT_NAME).exe
