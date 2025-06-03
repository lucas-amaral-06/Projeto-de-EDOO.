# Compilador
CXX := g++

# Diretórios
SRC_DIR := src
INC_DIR := include
BUILD_DIR := build
BIN_DIR := bin

# Arquivo final
TARGET := $(BIN_DIR)/app

# Flags
CXXFLAGS := -std=c++23 -Wall -Wextra -I$(INC_DIR)

# Bibliotecas necessárias para Crow
LDFLAGS := -lpthread

# Coleta todos os .cpp de src/
SRCS := $(wildcard $(SRC_DIR)/*.cpp)

# Cria os .o correspondentes em build/
OBJS := $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRCS))

# Regra principal
all: $(TARGET)

# Linkagem final
$(TARGET): $(OBJS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Compilação dos .cpp para .o
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(LDFLAGS)

# Limpeza dos binários e objetos
clean:
	rm -rf $(BUILD_DIR)/*.o $(TARGET)

.PHONY: all clean