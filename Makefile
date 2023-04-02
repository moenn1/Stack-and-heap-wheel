PROJECT_NAME=MemoryManagement

# flags -Wall and -Werror are omitted with a reason :)
CFLAGS=-ggdb -O0 -Iproduct

MAIN_SOURCES=product/*.cpp

TEST_SOURCES=test/Test$(PROJECT_NAME).cpp \
             $(SHARED_SOURCES)

TEST_LIBS=-lgtest -lgtest_main -lpthread

GCC=g++

all: $(PROJECT_NAME)

$(PROJECT_NAME): $(MAIN_SOURCES) Makefile product/*.h
	@$(GCC) $(CFLAGS) $(MAIN_SOURCES) -o $@

clean:
	@rm -rf $(PROJECT_NAME)

test: $(PROJECT_NAME)Test
	@./$(PROJECT_NAME)Test