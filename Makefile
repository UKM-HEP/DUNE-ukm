COMPILER=$(shell root-config --cxx)
FLAGS=$(shell root-config --cflags --libs)  -g -O3 -Wall -Wextra -Wpedantic -O0
BASE_DIR=${PWD}
SRC_DIR = $(BASE_DIR)/src/
INCLUDES = -I $(SRC_DIR)

.PHONY = all clean

all: postproc

postproc: src/postproc.C
		@[ -d $(BASE_DIR)/bin ] || mkdir -p $(BASE_DIR)/bin
		$(COMPILER) $(FLAGS) $(INCLUDES) $< -o bin/$@

clean:
		rm -rf core src/*.o bin/