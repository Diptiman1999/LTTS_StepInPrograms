PROJECT_NAME = File_output

SRC = src/closefile.c \
src/display_data.c \
src/main.c \
src/openfile.c \
src/sort_csv.c \
src/store.c

TEST = test/test_main.c\
unity/unity.c


run: $(SRC) $(TEST) $(INC)
	gcc $(TEST) $(SRC) -I unity -I inc -o $(PROJECT_NAME)
	.\$(PROJECT_NAME).exe

