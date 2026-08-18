#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

// A equipe 1 deverá resolver essa parte
typedef struct data{
} Data;

typedef struct contato{
} Contato;

typedef struct node{
} Node;

Node* criarAgenda();
Node* inserirContato(Node* agenda, Contato c);

// A equipe 2 deverá resolver essa parte
void listarContatos(Node* agenda);
Node* buscarContato(Node* agenda, char *nome);

// A equipe 3 deverá resolver essa parte
void atualizarContato(Node* agenda, char *nome, Contato c);

// A equipe 4 deverá resolver essa parte
Node* removerContato(Node* agenda, char *nome);

// A equipe 5 deverá resolver essa parte
void processamento(Node* agenda);

#endif // LINKEDLIST_H_INCLUDED
