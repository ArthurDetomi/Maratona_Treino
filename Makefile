CC = g++
CFLAGS = -Wall -Wextra

# Diretório dos programas
PROGRAM_DIRS = roteiro0 roteiro1 independente curso_cpp

# Busca recursiva por arquivos .cpp nos diretórios
SOURCES = $(foreach dir,$(PROGRAM_DIRS),$(wildcard $(dir)/*.cpp))

# Gera nomes dos executáveis
EXECUTABLES = $(SOURCES:.cpp=.out)

# Regra para compilar os programas
%.out: %.cpp
	$(CC) $(CFLAGS) -o $@ $<

all: $(EXECUTABLES)

clean:
	@echo 'Cleaning...'
	rm -f $(EXECUTABLES)
