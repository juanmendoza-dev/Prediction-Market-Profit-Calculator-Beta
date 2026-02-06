# Prediction Market Calculator (Poly / Kalshi)

A work-in-progress prediction market calculator inspired by **Polymarket** and **Kalshi**.  
The goal is to estimate **profit and loss based on shares bought and entry price**, not to simulate a full market.

This project is being built in **both C++ and Python**, each with a different role.

> **Status:** BETA, still experimenting and building things out.

---

## What This Is

Binary prediction markets work by buying shares that resolve to **$1 or $0**.  
This tool is meant to help answer questions like:

- How many shares can I buy with my capital?
- What’s my profit if the market resolves in my favor?
- What happens if I exit early?
- Is a trade worth taking at this price?

---

## C++ Version

The C++ version is meant to be the **fast and efficient**.

### Why C++

- Faster calculations  
- Lower memory usage  
- Easier to scale to lots of predictions  
- Works well as a pure terminal tool  

### Current State

- Basic CLI input  
- Capital and position input  
- Early project scaffold  

### Planned Features

- Everything run from the terminal  
- Different model modes (safe, risky, custom)  
- Profit / loss calculations  
- Optimal time to sell (experimental)  
- Batch calculations  

---
