## 📜 Regras de Cálculo — Tabelas de 2026

As tabelas abaixo consideram as regras aplicáveis a partir de janeiro de 2026 para empregados, empregados domésticos e trabalhadores avulsos. Os valores devem ser mantidos sincronizados com a implementação da calculadora.

### 1. INSS — Previdência Social

A contribuição previdenciária é calculada de forma **progressiva**, aplicando-se cada alíquota somente à parcela do salário correspondente àquela faixa.

| Faixa salarial (R$) | Alíquota |
| :--- | :---: |
| Até 1.621,00 | 7,5% |
| De 1.621,01 até 2.902,84 | 9% |
| De 2.902,85 até 4.354,27 | 12% |
| De 4.354,28 até 8.475,55 | 14% |

O salário de contribuição está limitado ao teto previdenciário de R$ 8.475,55. Considerando as faixas e o arredondamento monetário, a contribuição máxima é de aproximadamente R$ 988,09.

**Fonte oficial:** [Tabela de contribuição mensal do INSS](https://www.gov.br/inss/pt-br/direitos-e-deveres/inscricao-e-contribuicao/tabela-de-contribuicao-mensal).

### 2. IRRF — Imposto de Renda Retido na Fonte

A tabela progressiva mensal do IRRF, vigente a partir de janeiro de 2026, é aplicada à base de cálculo do imposto.

| Base de cálculo mensal (R$) | Alíquota | Parcela a deduzir (R$) |
| :--- | :---: | ---: |
| Até 2.428,80 | Isento | 0,00 |
| De 2.428,81 até 2.826,65 | 7,5% | 182,16 |
| De 2.826,66 até 3.751,05 | 15% | 394,16 |
| De 3.751,06 até 4.664,68 | 22,5% | 675,49 |
| Acima de 4.664,68 | 27,5% | 908,73 |

O imposto calculado pela tabela progressiva corresponde a:

**IRRF = (Base de cálculo × Alíquota) − Parcela a deduzir**

A base de cálculo deve considerar as deduções legais permitidas ou o desconto simplificado mensal, conforme a opção aplicável e mais vantajosa.

#### Desconto simplificado mensal

O limite do desconto simplificado mensal em 2026 é de **R$ 607,20**. Esse desconto substitui as deduções legais utilizadas na determinação da base de cálculo, quando aplicável.

#### Redução adicional do IRRF em 2026

Além da tabela progressiva, existe uma regra de redução do imposto:

- **Rendimentos tributáveis mensais de até R$ 5.000,00:** redução suficiente para zerar o imposto devido, respeitado o limite do imposto calculado.
- **Rendimentos acima de R$ 5.000,00 até R$ 7.350,00:** redução decrescente, conforme a fórmula legal.
- **Rendimentos acima de R$ 7.350,00:** não há essa redução adicional.

Para rendimentos entre R$ 5.000,01 e R$ 7.350,00, a redução é calculada pela fórmula:

`Redução = 978,62 − (0,133145 × rendimentos tributáveis mensais)`

A redução não pode ultrapassar o valor do imposto devido.

**Fonte oficial:** [Receita Federal — Tabelas de tributação de 2026](https://www.gov.br/receitafederal/pt-br/assuntos/meu-imposto-de-renda/tabelas/2026).

> **Importante:** este projeto tem finalidade demonstrativa e educacional. Os resultados dependem das regras implementadas, das deduções aplicáveis e das características de cada contribuinte. Consulte as fontes oficiais para verificar as regras vigentes.

---

## 📂 Como executar

### 🌐 Versão Web

Acesse a calculadora online:

🔗 [Calcular INSS e Imposto de Renda](https://awaldige.github.io/calculo-de-inss-e-imposto-de-renda/)

### 📸 Prévia da aplicação

![Prévia da calculadora — tela 1](https://github.com/user-attachments/assets/4c300971-63cf-4426-8808-dd61f4d2a492)

![Prévia da calculadora — tela 2](https://github.com/user-attachments/assets/9592b228-5d23-4dcb-a8c7-668637f30290)

![Prévia da calculadora — tela 3](https://github.com/user-attachments/assets/acfbfab8-19e9-437b-b4d9-60ea9388f922)

### 💻 Versão Terminal — Linguagem C

**1. Clone o repositório:**

```bash
git clone https://github.com/awaldige/calculo-de-inss-e-imposto-de-renda.git
cd calculo-de-inss-e-imposto-de-renda
```

**2. Compile o programa:**

Com o compilador GCC instalado, execute:

```bash
gcc salario_liquido.c -o salario
```

**3. Execute a aplicação:**

No Linux ou macOS:

```bash
./salario
```

No Windows, pelo terminal:

```powershell
.\salario.exe
```

> Os comandos pressupõem que o arquivo `salario_liquido.c` esteja na raiz do repositório e que o compilador GCC esteja instalado.

---

## 🛠️ Tecnologias utilizadas

- **Linguagem C:** implementação da lógica de processamento e dos cálculos salariais.
- **HTML5:** estrutura da interface web.
- **CSS3:** estilização e apresentação visual da calculadora.
- **GitHub Pages:** publicação da versão web, conforme a configuração do projeto.

## 👨‍💻 Desenvolvimento

👨‍💻 Autor
André Waldige — AW TECHNOLOGY

GitHub: (https://github.com/awaldige)

Portfólio: (https://andre-waldige.vercel.app)

E-mail: awaldige@gmail.com





