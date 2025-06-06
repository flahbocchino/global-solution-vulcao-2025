# 🌋 Global Solution 2025 – Simulação de Monitoramento de Vulcão com ESP32 e Python

## 👥 Integrantes
- Felipe Menezes (RM557891)  
- Flavia Bocchino (RM564213)  
- Pedro Zani (RM564956)

**Curso**: Inteligência Artificial – FIAP  
**Tema**: Desastres Naturais – Monitoramento de Vulcões  
**Data**: Junho de 2025 — São Paulo, Brasil  

---

## 📖 Introdução

Erupções vulcânicas representam um risco à saúde humana, causam impactos ambientais e prejuízos econômicos. A erupção do vulcão Eyjafjallajökull, na Islândia, em 2010, é um exemplo clássico: ela interrompeu voos em toda a Europa devido à grande emissão de fumaça e cinzas.

Mas como prever uma erupção?  
Cientistas monitoram dados como temperatura, pressão atmosférica e emissão de gases. Neste projeto, simulamos esse processo com sensores, microcontrolador ESP32 e análise de dados em Python.

---

## 📌 Sumário das Etapas

1. **Etapa 1** – Definir a Lógica da Solução  
2. **Etapa 2** – Simulação no Wokwi (ESP32 + DHT22)  
3. **Etapa 3** – Análise de Dados em Python (Colab)  
4. **Etapa 4** – Resultados Esperados  
5. **Etapa 5** – Organização no GitHub  
6. **Etapa 6** – Montagem do PDF final  
7. **Etapa 7** – Referências (links de apoio)  
8. **Etapa 8** – Evidências Visuais (prints)  
9. **Etapa Complementar** – Arquitetura da Solução  
10. **Etapa Complementar** – Circuito e Código ESP32  
11. **Etapa Complementar** – Lógica de Análise em Python  
12. **Etapa Final** – Conclusão  

---

## 🔧 Etapa 1 – Lógica da Solução

- Sensor DHT22 mede temperatura e umidade
- ESP32 analisa os dados
- Se `temp > 45°C` **e** `umidade < 20%`, o sistema dispara um **alerta**
- A lógica segue uma estrutura condicional:  
  **"Se isso acontecer, então faça aquilo."**

---

## 🧪 Etapa 2 – Simulação com ESP32 + DHT22

- Utilizamos o Wokwi para montar e testar o circuito
- Código roda no microcontrolador e analisa os dados a cada 2 segundos
- Alerta exibido no **monitor serial** em caso de risco

---

## 📊 Etapa 3 – Análise com Python no Colab

- Criamos dados simulados de temperatura e umidade
- Aplicamos a mesma lógica do ESP32 em um script Python
- Geramos gráficos para visualizar os pontos de alerta
- Exibimos mensagens automáticas em caso de risco

---

## 🎯 Etapa 4 – Resultados Esperados

O objetivo foi criar uma simulação funcional de um sistema de alerta precoce para erupções vulcânicas.  
Espera-se que:

- O ESP32 identifique risco com base nos dados coletados
- O sistema exiba alertas automáticos no monitor serial
- O Python reforce a análise com gráficos e mensagens

---

## 📁 Etapa 5 – Organização no GitHub

Repositório estruturado com:

- Código do ESP32 (`.ino`)
- Notebook do Colab (`.ipynb`)
- Gráficos gerados (`.png`)
- Prints das simulações
- PDF final e README

> 🔗 [Repositório GitHub](https://github.com/flahbocchino/global-solution-vulcao-2025)

---

## 📄 Etapa 6 – Montagem do PDF

Documento final com:

- Todas as etapas explicadas
- Explicações técnicas e acessíveis
- Imagens, prints e gráficos
- Referências externas e links

---

## 🔗 Etapa 7 – Referências

- GitHub:  
  https://github.com/flahbocchino/global-solution-vulcao-2025  
- Google Colab:  
  https://colab.research.google.com/drive/10QBsKOzkt7o22LbwNVf5SHl-4IHNIYoG?usp=sharing  
- Wokwi:  
  https://wokwi.com/projects/322410731508073042

---

## 🖼️ Etapa 8 – Evidências Visuais

Acesse a pasta `Imagens/` para visualizar todos os prints organizados e descritos.

---

## 🧩 Etapa Complementar – Arquitetura da Solução

Imagem do circuito montado no Wokwi representa como os componentes se conectam na prática.

---

## 💻 Etapa Complementar – Código ESP32

Trecho `.ino` realiza leitura de temperatura e umidade.  
Se os valores ultrapassarem os limites críticos, o sistema emite alerta simulado.

---

## 📈 Etapa Complementar – Lógica em Python

O script no Colab analisa os dados, identifica os pontos de risco e gera gráficos ilustrativos.  
Essa etapa simula o trabalho dos cientistas que analisam medições em tempo real.

---

## ✅ Conclusão

A simulação provou que é possível montar um sistema acessível e funcional para monitorar riscos de erupções vulcânicas.  
A união entre sensores, microcontrolador e análise em Python criou um **MVP educativo** com grande potencial de adaptação para uso real.

---
