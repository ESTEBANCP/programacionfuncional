/*Evalua si un regalo seria el correcto para un animal*/
/*Probado con el compilador SWI-Prolog 64 bits, version 8.1.1-20-g576555c*/
/* animal(Anim) <- Anim es un animal */
animal(mono).
animal(gallina).
animal(arana).
animal(mosca).
animal(cocodrilo).
animal(perro).
animal(gato).
animal(vaca).
animal(raton).

/* gusta(X,Y) <- a X le gusta Y */
gusta(mono,banana).
gusta(arana,mosca).
gusta(alumno,logica).
gusta(arana,hormiga).
gusta(cocodrilo,X) :- animal(X).
gusta(mosca,espejo).
gusta(cocodrilo,carne).

/* regalo(X,Y) <- Y es un buen regalo para X */
regalo(X,Y) :- animal(X), gusta(X,Y).
