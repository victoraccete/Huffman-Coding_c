#include "queue_and_tree.h"
#include "rep_table.h"

extern int FreqCounter[256];

//conta a quantidade de repetição de cada caractere
void count_rep(char *fileName);

void printFrequency(int array[256]);

// seta bit na posicao i
int set_bit(unsigned char c, int i);

//retorna o tamanho da árvore
int size_huff_tree(Node* huff);

//conta a quantidade de caracteres de escape (para incrementar o tamanho da árvore)
int count_escapes(Node* huff, int escapes);

// imprime a árvore no header do huffman
void print_tree_header(FILE* file, Node* huff);

// imprime o lixo no header do huffman
void print_trash_header(unsigned int size, FILE* file);

// imprime o header do huffman
int print_header(FILE* file, Node* huff);

int write_file_codification(Huff_table *ht, FILE *file, int size_tree, FILE *source_file);

void compress(char *dest_file_name, Huff_table *huff_table, Node* huffman_tree, char* source_file_name);
