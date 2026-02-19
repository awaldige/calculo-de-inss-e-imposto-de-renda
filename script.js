function calcular() {
    const inputSalario = document.getElementById('salario');
    const salario = parseFloat(inputSalario.value);

    if (isNaN(salario) || salario <= 0) {
        alert("Por favor, insira um valor de salário válido.");
        return;
    }

    // --- 1. CÁLCULO DO INSS (Tabela Progressiva 2026) ---
    let inss = 0;
    if (salario <= 1518.00) {
        inss = salario * 0.075;
    } else if (salario <= 2793.88) {
        inss = (1518.00 * 0.075) + ((salario - 1518.00) * 0.09);
    } else if (salario <= 4190.83) {
        inss = (1518.00 * 0.075) + (1275.88 * 0.09) + ((salario - 2793.88) * 0.12);
    } else if (salario <= 8157.41) {
        inss = (1518.00 * 0.075) + (1275.88 * 0.09) + (1396.95 * 0.12) + ((salario - 4190.83) * 0.14);
    } else {
        inss = 970.00; // Teto
    }

    // --- 2. CÁLCULO DO IRRF ---
    
    // Opção A: Base legal padrão (Salário - INSS)
    const baseComum = salario - inss;
    
    // Opção B: Desconto Simplificado (Valor fixo de R$ 607,20 em 2026)
    // Esse desconto substitui o INSS e outras deduções na base de cálculo
    const descontoSimplificado = 607.20; 
    const baseSimplificada = salario - descontoSimplificado;

    // O sistema escolhe a base MAIOR (pois quanto maior a base, maior o desconto aplicado antes da alíquota)
    // Na verdade, escolhemos a base que resultar no MENOR imposto.
    let baseCalculo = Math.min(baseComum, baseSimplificada);
    
    // Se a base simplificada for menor, usamos ela!
    if (baseSimplificada < baseComum && baseSimplificada > 0) {
        baseCalculo = baseSimplificada;
    } else {
        baseCalculo = baseComum;
    }

    let ir = 0;
    if (baseCalculo <= 2259.20) {
        ir = 0;
    } else if (baseCalculo <= 2826.65) {
        ir = (baseCalculo * 0.075) - 169.44;
    } else if (baseCalculo <= 3751.05) {
        ir = (baseCalculo * 0.15) - 381.44;
    } else if (baseCalculo <= 4664.68) {
        ir = (baseCalculo * 0.225) - 662.77;
    } else {
        ir = (baseCalculo * 0.275) - 896.00;
    }

    if (ir < 0) ir = 0;

    const salarioLiquido = salario - inss - ir;

    // --- 3. EXIBIÇÃO ---
    document.getElementById('res-inss').innerText = `- R$ ${inss.toLocaleString('pt-BR', {minimumFractionDigits: 2})}`;
    document.getElementById('res-ir').innerText = `- R$ ${ir.toLocaleString('pt-BR', {minimumFractionDigits: 2})}`;
    document.getElementById('res-liquido').innerText = `R$ ${salarioLiquido.toLocaleString('pt-BR', {minimumFractionDigits: 2})}`;
    
    document.getElementById('resultado').style.display = 'block';
}