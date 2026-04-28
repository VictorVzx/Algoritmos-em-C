# Algoritmo de Zeller
Para que serve?
---
É um Algoritmo usado para descobrir o *dia da semana* com base na data, tem como formula: 

$$
\
h = \left( q + \left\lfloor \frac{13(m+1)}{5} \right\rfloor + K + \left\lfloor \frac{K}{4} \right\rfloor + \left\lfloor \frac{J}{4} \right\rfloor - 2J \right) \mod 7
$$
Onde:
```
q = dia
m = mês
K = ano do século (ano mod 100)
J = século (ano div 100)
```