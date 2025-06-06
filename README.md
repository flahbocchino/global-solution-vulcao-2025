# 🌋 Global Solution 2025 – Simulação de Monitoramento de Vulcão com ESP32 e Python

## 👥 Integrantes
- Felipe Menezes (RM557891)  
- Flavia Bocchino (RM564213)  
- Pedro Zani (RM564956)

**Curso:** Inteligência Artificial – FIAP  
**Tema:** Desastres Naturais – Monitoramento de Vulcões  
**Data:** Junho de 2025 – São Paulo, Brasil  

---

## 🔍 Introdução

Este projeto simula, de forma didática, um sistema inteligente de alerta para erupções vulcânicas com base em sensores ambientais. Utilizamos o ESP32 com sensor DHT22 para coleta de dados de temperatura e umidade, e Python no Google Colab para análise gráfica e automatizada desses dados.

---

## 📌 Etapas do Projeto

1. **Lógica da Solução** – Temperatura > 45 °C e umidade < 20% disparam alerta.
2. **Simulação no Wokwi (ESP32 + DHT22)** – Coleta de dados e alerta no Monitor Serial.
3. **Análise de Dados (Python/Colab)** – Geração de dados, lógica condicional e gráficos.
4. **Resultados Esperados** – Detecção de risco e emissão automática de alertas.
5. **Organização do GitHub** – Repositório com código, simulações, imagens e documentação.
6. **Entrega Final (PDF + README)** – Arquivos formatados para avaliação.

---

## 🖥️ Tecnologias Utilizadas

- Wokwi (ESP32 + DHT22)
- Google Colab (Python)
- GitHub (Documentação e repositório)
- Markdown (.md)

---

## 📂 Estrutura do Repositório

📁 ESP32 → Código .ino (lógica do sensor)
📁 Imagens → Evidências visuais (.png)
📁 DocumentosFinais → PDF + Word do relatório
📄 README.md → Este arquivo de apresentação
📄 analise_dados.ipynb → Lógica e gráfico em Python

---

## 📈 Resultados e Testes

- O sistema simulou corretamente um alerta para a combinação:
  - `Temperatura: 45.08 °C`
  - `Umidade: 11.4%`
- O gráfico gerado exibiu os momentos de risco com marcações visuais.
- A simulação no Wokwi respondeu conforme esperado no monitor serial.

---

## 📎 Links Úteis

- 🔗 Repositório GitHub: [https://github.com/flahbocchino/global-solution-vulcao-2025](https://github.com/flahbocchino/global-solution-vulcao-2025)
- 🔗 Google Colab: [Notebook de Análise](https://colab.research.google.com/drive/1iYSYdviyoVSrE-5FApap5HjHP_1VGkEz?usp=sharing)
- 🔗 Simulação no Wokwi: [Circuito ESP32 + DHT22](https://wokwi.com/projects/322410731508073042)

---

## 📸 Evidências Visuais

As imagens estão organizadas na pasta `Imagens/`, e a tabela com a numeração, nome dos arquivos e legendas está disponível no arquivo `README_figuras.md`.

---

## ✅ Conclusão

O projeto demonstrou com sucesso como sensores simples, lógica embarcada e análise computacional podem compor um sistema de alerta para eventos extremos como erupções vulcânicas. A proposta serve como modelo educacional funcional e pode ser expandida para aplicações reais com componentes físicos e sensores adicionais.

