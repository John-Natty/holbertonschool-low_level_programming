# C - Hash Tables

## Description

This project introduces **hash tables**, an important data structure used to store data efficiently using key-value pairs.

A hash table uses a **hash function** to compute an index into an array of buckets or slots, from which the desired value can be found quickly.

Hash tables are widely used in computer science because they allow fast data access, usually in constant time **O(1)** on average.

This project focuses on understanding:

- What a hash function is
- How hash tables work
- How collisions occur and how to handle them
- Advantages and limitations of hash tables
- Real-world use cases

---

## Learning Objectives

At the end of this project, you should be able to explain:

- What is a hash function
- What makes a good hash function
- What is a hash table and how it works
- What is a collision and how to handle collisions
- Advantages and disadvantages of hash tables
- Common use cases of hash tables

---

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- Compilation on Ubuntu 20.04 LTS using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89