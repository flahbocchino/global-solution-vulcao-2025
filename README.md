# 🌋 Global Solution 2025 – Simulação de Monitoramento de Vulcão com ESP32 e Python

## 👥 Nomes:
- Felipe Menezes — RM557891  
- Flavia Bocchino — RM564213  
- Pedro Zani — RM564956

---

## 🌍 Evento Natural Escolhido

**Erupção do vulcão Eyjafjallajökull**  
📍 Local: Islândia  
📆 Ano analisado: 2010  
🔗 Fonte: [disasterscharter.org](https://disasterscharter.org/web/guest/activations/-/article/activation-257)

---

## 🧱 Construção da Solução e MVP (SUMÁRIO)

1. Etapa 1: Definir a Lógica da Solução (baseada em sensores)  
2. Etapa 2: ESP32 + Sensor (simulado no Wokwi)  
3. Etapa 3: Análise em Python (Google Colab ou local)  
4. Etapa 4: Organizar o Repositório no GitHub  
5. Etapa 5: Montar o PDF final (entregável obrigatório)  
6. Etapa 6: Gravar o vídeo (até 5 minutos)

---

## 🧠 ETAPA 1 – O QUE A NOSSA SOLUÇÃO FAZ?

### 📌 Problema que queremos resolver

Erupções vulcânicas como a que ocorreu na Islândia, em 2010, podem causar:
- Risco para quem mora perto do vulcão
- Cancelamento de voos por causa de cinzas no céu
- Danos ao meio ambiente e à economia

Mas como saber se um vulcão vai entrar em erupção?

### 💡 O que nossa solução propõe

Criamos um sistema inteligente que simula o monitoramento de um vulcão, usando:

1. Sensor conectado a um chip ESP32 (cérebro do sistema)  
2. Código que mede temperatura e umidade do ar  
3. Análise em Python para verificar risco de erupção  
4. Emissão de alerta automático, se necessário  
5. Geração de gráfico para visualização de dados

---

## ⚙️ Como o sistema funciona – Passo a passo

| Etapa | O que acontece |
|-------|----------------|
| 1️⃣ | O sensor mede a temperatura e a umidade do ar próximo ao vulcão |
| 2️⃣ | O ESP32 envia essas informações para o código |
| 3️⃣ | O código compara os dados com valores de risco |
| 4️⃣ | Se os dados forem suspeitos, o sistema gera um alerta |
| 5️⃣ | Um gráfico é gerado para visualização científica |

---

## 🧪 Exemplo simples da lógica

Critérios simulados:
- Temperatura > **45°C**
- Umidade < **20%** (em vez de pressão, pela limitação do sensor)

Se essas condições forem atendidas, o sistema simula um **alerta de risco de erupção**.

Isso representa uma **estrutura condicional**:
> "Se acontecer isso, então faça aquilo."

---

## 🎯 Por que isso é útil?

Mesmo sendo uma simulação, o sistema:

- Mostra como funcionam sistemas reais de alerta
- Pode ser adaptado com sensores reais em áreas de risco
- Mostra como a tecnologia pode **salvar vidas**
- Usa o sensor DHT22 para medir condições ambientais críticas

---

## 🛠️ O que usamos

- **ESP32**: chip microcontrolador que executa o código
- **DHT22**: sensor digital de temperatura e umidade
- **Python**: para análise dos dados simulados
- **Google Colab**: para gerar gráfico e identificar alertas
- **Gráficos**: ajudam a visualizar os dados
- **Condições pré-definidas**: base para identificar risco

---

## 🔧 Etapa 2 – Simulação ESP32 + Sensor

Utilizamos o simulador [Wokwi](https://wokwi.com) para montar o circuito ESP32 + DHT22.

- O código coleta dados do sensor a cada 2 segundos
- Exibe a temperatura e umidade no monitor serial
- Mostra alertas quando condições críticas são atingidas

🔗 [Acessar simulação no Wokwi](https://wokwi.com/projects/322410731508073042)

---

## 📊 Etapa 3 – Análise em Python (Google Colab)

- Geramos dados simulados de temperatura e umidade ao longo do tempo
- Aplicamos a mesma lógica condicional para identificar alertas
- Criamos gráfico com faixas de alerta para visualização

🔗 [Abrir notebook no Google Colab](https://colab.research.google.com/drive/10QBsKOzkt7o22LbwNVf5SHl-4IHNIYoG?usp=sharing)

---

## 🗂️ Estrutura de Pastas no Repositório
global-solution-vulcao-2025/
│
├── ESP32/
│ ├── esp32-dht22.ino
│ └── diagram.json (opcional)
│
├── Python/
│ ├── analise_dados_vulcao.ipynb
│ ├── grafico_alerta_erupcao.png (opcional)
│ └── dados_simulados.csv (opcional)
│
├── Imagens/
│ ├── print_simulacao_wokwi.png (opcional)
│ ├── print_grafico_colab.png (opcional)
│
├── README.md
└── Global_Solution_2025.pdf

yaml
Copy
Edit


---

## 🏁 Conclusão

Este projeto simula como **dados ambientais** podem ser usados para prever riscos em tempo real. Ao integrar **sensores físicos e lógica computacional com análise gráfica**, mostramos como a tecnologia pode ser aplicada para prevenir desastres e salvar vidas.

---

