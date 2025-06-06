# Dynamical Systems

This is a school project where I show my abilities in object oriented programming for the TC1030 course.

## Features

- **Solve ODEs** numerically (Euler, RK4 methods)
- **Predefined Systems** like Lorenz attractor, Sprott attractor and more
- **Export trajectories** to visualize with Python or on the web

## Installation

1. Clone the repo

```bash
git clone https://github.com/Alex-Benitez16/Dynamical-Systems.git
cd Dynamical-Systems
```

2. Compile (requires **`gcc`**)

```bash
g++ source/*.cpp -Iinclude -std=c++11
```

3. **Run**

```bash
./a.out # Or its equivalent on your platform
```

## Visualization

If you wish to plot the attractor there are two main ways:

1. Execute the `plot.py` Python script

```bash
python output/plot.py
```

> This method requires pandas, matplotlib, and numpy

2. Visualize in the web

    - Open [Plotly Chart](https://chart-studio.plotly.com/create/#/).
    - Import the csv (found in the `/output` folder)
    - Select the `+ Trace` button
    - Under type select 3D line
    - Select the corresponding rows

## UML

![UML](./uml.png)

The project essentially contains three parts: an **ODE** (ordinary differential equation), a **solver**, and an **exporter**. This are also the three main classes. 

- **Solver**: The solver contains both the ODE (via aggregation) and the exporter (via composition). It contains the numerical methods to solve the equations and is responsible for making the right calls to the exporter.

- **Exporter**: The exporter manages the export operations to the csv, such as creating the file and filling it with the states.

- **ODE**: This is an abstract class where all the other systems inherit from. It contains an initial state and a virtual function for the equation, which will be overriden by the derived classes depending on the system.

## Samples

> Note: All the following attractors use the default parameters with rk4 default method.

### Lorenz Attractor

**Equation:**

![Lorenz](./img/CodeCogsEqn.png)

**Graph:**

![Lorenz Graph](./img/p_lorenz.png)

### Four Wing Attractor

**Equation:**

![Four Wing](./img/four_wing.png)

**Graph:**

![Four Wing Graph](./img/p_four_wings.png)


### Halvorsen Attractor

**Equation:**

![Halvorsen](./img/halvorsen.png)

**Graph:**

![Halvorsen Graph](./img/p_halvorsen.png)


### Rossler Attractor

**Equation:**

![Rossler](./img/rossler.png)

**Graph:**

![Rossler Graph](./img/p_rossler.png)


### Chen Attractor

**Equation:**

![Chen](./img/chen.png)

**Graph:**

![Chen Graph](./img/p_chen.png)


### Sprott Attractor

**Equation:**

![Sprott](./img/sprott.png)

**Graph:**

![Sprott Graph](./img/p_sprott.png)
