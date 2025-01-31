Cálculo de Salário Líquido 💰
Este programa em C calcula o salário líquido de um trabalhador no Brasil, descontando os valores do INSS e do Imposto de Renda (IR) de acordo com as alíquotas oficiais.

🚀 Objetivo
O objetivo principal deste código é calcular o salário líquido com base no salário bruto informado pelo usuário, aplicando corretamente as faixas de contribuição do INSS e as deduções do Imposto de Renda (IR).

📌 Funcionalidades
Calcula o desconto do INSS com base na tabela progressiva.
Calcula o Imposto de Renda (IR) sobre a base de cálculo após o desconto do INSS.
Apresenta os valores detalhados do INSS, IR e salário líquido.
🔧 Como funciona?
O usuário insere o salário bruto.
O programa aplica as alíquotas progressivas do INSS.
O programa calcula o Imposto de Renda, levando em conta as deduções aplicáveis.
O programa exibe os valores de INSS, IR e salário líquido.
📜 Cálculo do INSS
O INSS é calculado de forma progressiva, com as seguintes faixas:

Faixa Salarial (R$)	Alíquota (%)
Até 1.412,00	7,5%
De 1.412,01 a 2.666,68	9%
De 2.666,69 a 4.000,03	12%
De 4.000,04 a 7.786,02	14%
Acima de 7.786,02	Teto máximo: R$ 908,86
✅ Se o salário for maior que R$ 7.786,02, o INSS é fixado no valor máximo de R$ 908,86.

📜 Cálculo do Imposto de Renda (IR)
O IR é calculado sobre o salário base, que é o salário bruto já com o desconto do INSS.

Faixa de Base de Cálculo (R$)	Alíquota (%)	Parcela Dedutível (R$)
Até 2.259,20	Isento	0,00
De 2.259,21 a 2.826,65	7,5%	169,44
De 2.826,66 a 3.751,05	15%	381,44
De 3.751,06 a 4.664,68	22,5%	662,77
Acima de 4.664,68	27,5%	896,00
✅ O IR é calculado após o desconto do INSS e inclui a parcela dedutível.

▶ Exemplo de Execução
ruby
Copiar
Editar
Cálculo de Salário Líquido com desconto do IR e INSS

Digite seu salário bruto: 5000

Desconto do INSS: R$ 495.26
Desconto do Imposto de Renda: R$ 278.26
Salário Líquido: R$ 4226.48
📂 Como usar o código
Clone o repositório ou copie o código para um arquivo .c:
bash
Copiar
Editar
git clone https://github.com/seu-usuario/seu-repositorio.git
cd seu-repositorio
Compile o código usando GCC:
bash
Copiar
Editar
gcc salario_liquido.c -o salario
Execute o programa:
bash
Copiar
Editar
./salario
🛠 Tecnologias Utilizadas
Linguagem C
Compilador GCC
📜 Licença
Este projeto está sob a licença MIT. Você pode usá-lo e modificá-lo livremente.


