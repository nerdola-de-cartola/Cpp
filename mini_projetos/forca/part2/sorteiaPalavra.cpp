#include <ctime>
#include <string>
#include "carregaPalavras.hpp"

std::string sorteiaPalavra() {
    srand(time(NULL));
    std::vector<std::string> palavras = carregaPalavras();
    int i = rand() % palavras.size();

    return palavras[i];
}