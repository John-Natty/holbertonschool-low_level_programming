# C - Singly Linked Lists

## 📌 Description

Ce projet introduit la structure de données **Singly Linked List** en langage C.

Une **linked list** est une collection d’éléments appelés **nodes**, où chaque node contient :

* une donnée
* un pointeur vers le node suivant

Contrairement aux tableaux, les éléments ne sont pas stockés de manière continue en mémoire.
Cela permet d’ajouter ou supprimer des éléments plus facilement.

Ce projet permet de comprendre :

* l’allocation dynamique de mémoire avec `malloc`
* la gestion de mémoire avec `free`
* la manipulation de pointeurs
* la structure des listes chaînées
* la création et la modification de structures dynamiques

---

## 🧠 Structure utilisée

```c
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
```

### Explication des champs

| Champ  | Description                   |
| ------ | ----------------------------- |
| `str`  | chaîne de caractères stockée  |
| `len`  | longueur de la chaîne         |
| `next` | pointeur vers le node suivant |


## ⚙️ Compilation

Tous les fichiers sont compilés avec :

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o program
```
