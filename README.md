# ✖️ Multiplicação em C
Este projeto contém um código simples de multiplicação em linguagem C. Ele demonstra como realizar a multiplicação de dois números inteiros fornecidos pelo usuário.

## ✔️ Tecnologias Utilizadas
- Linguagem de Programação: C
- Compilador: GCC (ou qualquer outro compilador C compatível)

## ❓ Como usar

### ☑️ Pré-requisitos

- Você precisa ter um compilador C instalado na sua máquina. Recomendamos o GCC.

### 📟 Compilação

Para compilar o código, você pode usar o GCC (ou qualquer outro compilador C de sua preferência). No terminal, navegue até o diretório onde o arquivo `multipicacaoDeNumerosInteiros-C.c` está localizado e execute o seguinte comando:

    gcc -o multiplicacaoDeNumerosInteiros-C multipicacaoDeNumerosInteiros-C.c

Isso irá gerar um executável chamado `multiplicacaoDeNumerosInteiros-C`.

### ▶️ Execução

Para executar o programa, use o comando:

    ./multiplicacaoDeNumerosInteiros-C

O programa solicitará que você insira dois números inteiros e, em seguida, exibirá o resultado da multiplicação.

## 📄 Código-fonte

Aqui está o código-fonte do programa de multiplicação:

    #include <stdio.h>

    int main() {
        int num1, num2, resultado;

        printf("Digite o primeiro número: ");
        scanf("%d", &num1);

        printf("Digite o segundo número: ");
        scanf("%d", &num2);

        resultado = num1 * num2;

        printf("O resultado de %d * %d é %d\n", num1, num2, resultado);

        return 0;
    }

## 📝 Licença

Este projeto está licenciado sob a MIT License - veja o arquivo [LICENSE](LICENSE) para mais detalhes.
