#include "Line.h"

using namespace std;

Line::Line(int id, string titulo, int ano, string autores, int citacoes,
           string atualiz, string snippet) {
  this->id = id;
  this->ano = ano;
  this->citacoes = citacoes;

  memcpy(this->titulo, titulo.c_str(), 300);
  memcpy(this->autores, autores.c_str(), 150);
  memcpy(this->atualiz, atualiz.c_str(), 50);
  memcpy(this->snippet, snippet.c_str(), 1024);
}