
# Algoritmos de Ordenação: Insertion Sort

Este projeto contém implementações dos algoritmos de ordenação **Insertion Sort** em C++. Possui exemplos práticos e, no caso otimizado, mostra o passo a passo da ordenação.

---

## ✅ Selection Sort

### 📌 Como funciona:
- Encontra o menor elemento e o coloca na primeira posição.
- Repete o processo para a sublista restante.
- É um algoritmo simples, porém ineficiente para grandes volumes de dados.

### 🔁 Complexidade:
- Pior caso: O(n²)
- Melhor caso: O(n²)
- Estável: ❌
- In-place: ✅

### 📂 Arquivos:
- `insertion_sort.cpp`: implementação básica.
- `select_sort_otimizado.cpp`: mostra o vetor a cada troca.

---

## ✅ Insertion Sort

### 📌 Como funciona:
- Considera que o primeiro elemento está ordenado.
- Insere os próximos elementos na posição correta da sublista ordenada.
- É eficiente para listas pequenas ou parcialmente ordenadas.

### 🔁 Complexidade:
- Pior caso: O(n²)
- Melhor caso (lista já ordenada): O(n)
- Estável: ✅
- In-place: ✅

### 📂 Arquivos:
- `insertion_sort.cpp`: versão com exibição do vetor a cada inserção.
- `insertion_sort_otimizado.cpp`: mostra o vetor apenas quando há mudanças reais.

---

## ▶️ Exemplo de execução:

Dado o vetor:

```
40, 1, 23, 20, 67, 44, 9, 18, 0, 99
```

O programa mostra:

- O vetor original
- O estado do vetor a cada passo do algoritmo
- O vetor final ordenado

---


## 📚 Objetivo

Este projeto visa auxiliar no entendimento dos algoritmos de ordenação e no acompanhamento de seu funcionamento passo a passo.
