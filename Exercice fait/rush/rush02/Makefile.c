CC = gcc
CFLAGS = -Wall -Wextra -Werror

//variable que je nomme mame et qui va prendre une valeur qui est le nom de l'executable que je souhaite generer (nom de programme)
NAME = rush-02

SRC = //(nom de fichier .c) tu dois mettre la SOURCE de tous les dossiers et !!!!!! *c n'est pas permis !!!!!

all: $(NAME)

$(NAME):
  gcc -o $(NAME) $(SRC)

clean: // suprime les fichiers objet
  rm -f *.o

fclean: clean //fclean depend du clean
  rm -f $(NAME)

re: fclean all // reset
