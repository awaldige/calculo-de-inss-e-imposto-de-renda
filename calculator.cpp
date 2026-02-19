#include <stdio.h>
#include <locale.h>

int main() {
    // Configura acentuação para Português
    setlocale(LC_ALL, "Portuguese");

    float salario, inss = 0.0, ir = 0.0, sal_liquido, base_ir;
    float desconto_simplificado = 607.20; // Valor base 2026 (estimado sobre novo mínimo)

    printf("--- CALCULADORA DE SALÁRIO LÍQUIDO 2026 ---\n");
    printf("Digite seu salário bruto: R$ "); 
    if (scanf("%f", &salario) != 1) {
        printf("Erro: Valor inválido.\n");
        return 1;
    }

    // 1. CÁLCULO DO INSS (Tabela Progressiva 2025/2026)
    // As faixas mudam conforme o salário mínimo (R$ 1.518,00)
    if (salario <= 1518.00) {
        inss = salario * 0.075;
    } else if (salario <= 2793.88) {
        inss = (1518.00 * 0.075) + ((salario - 1518.00) * 0.09);
    } else if (salario <= 4190.83) {
        inss = (1518.00 * 0.075) + (1275.88 * 0.09) + ((salario - 2793.88) * 0.12);
    } else if (salario <= 8157.41) {
        inss = (1518.00 * 0.075) + (1275.88 * 0.09) + (1396.95 * 0.12) + ((salario - 4190.83) * 0.14);
    } else {
        inss = 970.00; // Teto aproximado para 2026
    }

    // 2. CÁLCULO DO IMPOSTO DE RENDA (IRRF)
    // A base de cálculo é o Salário Bruto - INSS
    base_ir = salario - inss;

    // Lógica do desconto simplificado (se for mais vantajoso que as deduções)
    // Se (Salário - 607.20) for menor que (Salário - INSS), o governo usa o menor
    float base_com_desconto_padrao = salario - desconto_simplificado;
    if (base_com_desconto_padrao < base_ir && base_com_desconto_padrao > 0) {
        // Opcional: implementar escolha de base mais benéfica
    }

    if (base_ir <= 2259.20) {
        ir = 0.0;
    } else if (base_ir <= 2826.65) {
        ir = (base_ir * 0.075) - 169.44;
    } else if (base_ir <= 3751.05) {
        ir = (base_ir * 0.15) - 381.44;
    } else if (base_ir <= 4664.68) {
        ir = (base_ir * 0.225) - 662.77;
    } else {
        ir = (base_ir * 0.275) - 896.00;
    }

    // Imposto não pode ser negativo
    if (ir < 0) ir = 0;

    // 3. RESULTADO FINAL
    sal_liquido = salario - inss - ir;

    printf("\n========================================");
    printf("\nRESUMO DO CONTRACHEQUE:");
    printf("\nSalário Bruto   : R$ %10.2f", salario);
    printf("\n(-) INSS        : R$ %10.2f", inss);
    printf("\n(-) IRRF        : R$ %10.2f", ir);
    printf("\n----------------------------------------");
    printf("\n(=) SALÁRIO LÍQ.: R$ %10.2f", sal_liquido);
    printf("\n========================================\n");

    return 0;
}
