# 💰 Cálculo de Salário Líquido (INSS & IRRF)

![C](https://img.shields.io/badge/Language-C-blue.svg)
![HTML5](https://img.shields.io/badge/Web-HTML5-orange.svg)
![License](https://img.shields.io/badge/License-MIT-green.svg)

Este projeto é uma ferramenta completa para o cálculo de salário líquido no Brasil. Ele aplica de forma precisa as **alíquotas progressivas** do INSS e as faixas do Imposto de Renda (IRRF) atualizadas.

> 🚀 **Acesse a versão Web: [CLIQUE AQUI PARA TESTAR]**

---

## 📌 Funcionalidades

O sistema processa o salário bruto e detalha todos os descontos obrigatórios:
- **Desconto INSS:** Cálculo progressivo baseado nas faixas de 7,5% a 14% (com teto máximo).
- **Desconto IRRF:** Cálculo sobre a base líquida (Salário - INSS) com parcelas dedutíveis.
- **Detalhamento:** Exibe o valor de cada imposto separadamente e o salário final.

---

## 📜 Regras de Cálculo (Tabelas 2026)

### 1. INSS (Previdência Social)
O cálculo é feito por faixas acumulativas:

| Faixa Salarial (R$) | Alíquota (%) |
| :--- | :--- |
| Até 1.518,00 | 7,5% |
| De 1.518,01 a 2.793,88 | 9,0% |
| De 2.793,89 a 4.190,83 | 12,0% |
| De 4.190,84 a 8.157,41 | 14,0% |
| **Acima de 8.157,41** | **Teto Máximo (R$ 970,00)** |

### 2. Imposto de Renda (IRRF)
Calculado após a dedução do INSS:

| Base de Cálculo (R$) | Alíquota (%) | Dedução (R$) |
| :--- | :--- | :--- |
| Até 2.259,20 | Isento | R$ 0,00 |
| De 2.259,21 a 2.826,65 | 7,5% | R$ 169,44 |
| De 2.826,66 a 3.751,05 | 15% | R$ 381,44 |
| De 3.751,06 a 4.664,68 | 22,5% | R$ 662,77 |
| Acima de 4.664,68 | 27,5% | R$ 896,00 |

---

## 📂 Como executar

Este repositório oferece duas formas de uso:

### 🌐 Versão Web (Interface Gráfica)
Basta abrir o arquivo `index.html` em qualquer navegador ou acessar pelo link do GitHub Pages configurado neste repositório.

### 💻 Versão Terminal (Linguagem C)
Para rodar o código-fonte original em C:

1. **Clone o repositório:**
   ```bash
   git clone [https://github.com/awaldige/calculo-de-inss-e-imposto-de-renda.git](https://github.com/awaldige/calculo-de-inss-e-imposto-de-renda.git)
   cd calculo-de-inss-e-imposto-de-renda
Compile:

Bash
gcc salario_liquido.c -o salario
Execute:

Bash
./salario
🛠 Tecnologias
Linguagem C: Lógica de processamento e cálculos estruturados.

HTML5/CSS3: Interface responsiva para a web.

JavaScript: Engine de cálculo para a versão online.

📜 Licença
Este projeto está sob a licença MIT. Sinta-se à vontade para clonar, estudar e sugerir melhorias!
