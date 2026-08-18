#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

// A equipe 1 deverá resolver essa parte
typedef struct data{
    int dia;
    int mes;
} Data;

typedef struct contato{
    char nome[40];
    char telefone[15];
    char celular[15];
    char email[40];
    Data dataAniversario;
} Contato;

typedef struct node{
    Contato contato;
    struct node *next;
    struct node *previous;
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

