 #include <stdio.h>

int main() {
    float salario, inss = 0.0, ir = 0.0, sal_liquido;

    printf("Cálculo de Salário Líquido com desconto do IR e INSS\n\n");
    printf("Digite seu salário bruto: "); 
    scanf("%f", &salario);

    // Cálculo do INSS baseado em alíquotas progressivas (dados atualizados)
    if (salario <= 1412.00) {
        inss = salario * 0.075;
    } else if (salario <= 2666.68) {
        inss = (1412.00 * 0.075) + ((salario - 1412.00) * 0.09);
    } else if (salario <= 4000.03) {
        inss = (1412.00 * 0.075) + (1254.68 * 0.09) + ((salario - 2666.68) * 0.12);
    } else if (salario <= 7786.02) {
        inss = (1412.00 * 0.075) + (1254.68 * 0.09) + (1333.35 * 0.12) + ((salario - 4000.03) * 0.14);
    } else {
        inss = 908.86; // Teto máximo do INSS
    }

    // Base de cálculo do Imposto de Renda (IR)
    float base_ir = salario - inss;

    // Cálculo do IR baseado em alíquotas e deduções (dados atualizados)
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

    // Cálculo do salário líquido
    sal_liquido = salario - inss - ir;

    // Exibição dos resultados
    printf("\nDesconto do INSS: R$ %.2f\n", inss);
    printf("Desconto do Imposto de Renda: R$ %.2f\n", ir);
    printf("Salário Líquido: R$ %.2f\n\n", sal_liquido);

    return 0;
}
     
