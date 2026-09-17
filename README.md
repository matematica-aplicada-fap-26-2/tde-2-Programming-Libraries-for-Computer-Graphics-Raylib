# Computação Gráfica — Raylib

Este repositório foi criado para o desenvolvimento de um trabalho acadêmico da disciplina de **Matemática Aplicada à Computação**.

O projeto tem como objetivo apresentar a biblioteca **Raylib**, explorando seus recursos para o desenvolvimento de aplicações gráficas e jogos em 2D e 3D por meio de exemplos práticos em C.

Ao longo do trabalho, o repositório reúne os códigos utilizados na apresentação, demonstrando diferentes recursos da Raylib.

## Exemplos de código

Os exemplos usados na apresentação estão separados na pasta `exemplos/`.

### Arquivos disponíveis:

- `exemplos/01-basico/basico.c`: criação de janela e exibição de texto;
- `exemplos/02-formas-2d/formas_2d.c`: criação e desenho de formas geométricas em 2D;
- `exemplos/03-movimentacao/movimentacao.c`: movimentação de objetos utilizando o teclado;
- `exemplos/04-colisao/colisao.c`: detecção de colisão entre um círculo e um retângulo;
- `exemplos/05-texturas-sprites/texturas_sprites.c`: carregamento e utilização de texturas e spritesheet;
- `exemplos/06-graficos-3d/graficos_3d.c`: criação de objetos e ambiente gráfico em 3D.

Para compilar os exemplos no Windows, é necessário utilizar o **W64Devkit** e ter os arquivos da Raylib disponíveis nas pastas `include/` e `lib/`.

A compilação pode ser realizada com:

```bash
gcc -o exemplo.exe exemplo.c -Iinclude -Llib -lraylib -lgdi32 -lwinmm
```

## Recursos oficiais

- **Site oficial:** https://www.raylib.com/
- **GitHub:** https://github.com/raysan5/raylib

## Contexto acadêmico

- **Disciplina:** Matemática Aplicada à Computação
- **Tema:** Frameworks de gráficos 2D e 3D para jogos
- **Biblioteca escolhida:** Raylib
- **Finalidade:** Trabalho acadêmico
