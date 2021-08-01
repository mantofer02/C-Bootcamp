APPNAME = ctoa
CFLAGS = -Wall -Wextra
LIBS = -lm
EXECUTABLES = $(APPNAME)


all: $(EXECUTABLES) gitignore

$(APPNAME): *.cpp
	g++ $(CFLAGS) *.cpp -o $(APPNAME)

.PHONY: memcheck
memcheck:
	valgrind ./$(APPNAME)

.PHONY: lint
lint:
	cpplint --filter=-readability/casting *.cpp

.PHONY: gitignore
gitignore:
	echo $(EXECUTABLES) | tr " " "\n" > .gitignore

.PHONY: clean
clean:
	rm -rf $(EXECUTABLES)

.PHONY: rebuild
rebuild: clean $(EXECUTABLES)