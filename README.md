Welcome! 

This is a small project that I am working on. I am trying to accomplish some of the following goals:
1. Understand Gauge Theory from a mathematical point of view
2. Visualize gauge invariance, gauge transformations, and gauge fields
3. Connect this understanding to General Relativity and it's relationship to the Lorentz Group
4. Understand the implementation of C++ code into python
5. Work with Mathematical Animations and 3D visualization in python


Note that this project uses the python package manager uv. 
Example code:

Virtual Env: source .venv/bin/activate.fish
Install package: uv pip install ___
Run script: uv run ___

More can be found on the website. Primarily we will be working with Matplotlib and Manim in python. 



The vision for this project is to not only be able to further my understanding of gauge theory but also visualize gauge theory in an intuitive way.

There are two (or three) things that I want to accomplish.
1. Visualize Gauge theory in QFT / EM
2. Understand and Demonstrate How GR is a "gauge theory" of the lorentz group
3. Extend (2) to the theory gravity with supersymmetry

Obviously, there are many details for each of these goals. They should be fleshed out while maintaining this project.
Also. It should be noted that for animations / visualizations it is probably better to do it in
python with the vast API plotting functions such as matplotlib and manim.

However, I am thinking that maybe if we are going to be doing heavy mathematical operations then we want to do them in C++. Luckily, there is really good python support for implementing C++ code / plugging this file directly into the file for python. I still need to work on how to integrate this though


Ideas for part 1:
----------------
Say we want to visualize a gauge in QFT. What exactly even constitutes a gauge?
In my opinion, what we really want to capture is what happens when transforming between gauges, and investigating what is left invariant.
For example, physical observables are left invariant. However, are the dynamics of off shell particles changed? How are they changed? What do those changes look like?


*~ James 3/1/25*

# 3/2/25

Lets try to investigate the theory of electro-weak. This theory is a SU(2) x U(1) gauge theory. U(1) is electromagnetism in the form of QED, and SU(2) is nuclear decay in the form of the weak interaction

First off, lets try to visualize both SU(2) and U(1) local symmetries independently, using manim
This entails:
--> Fields changing under this local transformation (i.e., flags or something)
--> The visualization of U(1) and SU(2), ie their Lie groups and covers
--> The Gauge covariant derivative and a visual of how the gauge field "mediates" interactions

# 3/5/25
Note that theory and lagrangian I am using interchangeably when in the context of qft. 

Starting off with the definition of a gauge. In mathematical terms, a gauge is used to get rid of redundant degrees of freedom. An example of this is electromagnetism. Whether or not you choose the coulomb gauge or the lorentz gauge, the physics of the system is identical but the mathematical way of writing down equations looks different. This is what is meant by a redundant degree of freedom. 

There exists transformations between different gauges, which we call gauge transformations. The set of all unique gauge transformations form a lie group. A lie group can be roughly summarized as a group which is also a differentiable manifold, i.e. a "continuous group". Since we are already not being rigorous, we can say that the differentiable manifold portion of the lie group implies that the group operation is also differentiable. In the context of physics (QFT in particular), the lie groups we will be studying belong to the family $GL(n,\mathbb{F})$. Namely, the general linear group of $n \times n$ matrices with entries that belong to the field $\mathbb{F}$. 

For a Lie Group there exists a set of generators; the reason why they are called this is because every transformation in the lie group $G$ can be expressed as $e^{\theta * T}$, where T belongs to the set of generators. Repeating the first sentence: the set of all T objects belong to a set called the Lie Algebra of $G$, and can "generate" every element in $G$ by exponentiating with some factor times the generator. It is often useful, when talking about Lie Groups, to in fact study the Lie Algebras of the groups in question. 

The connection to physics is that the Lie Group can be characterized as the symmetry group (or just symmetry) of a lagrangian $mathcal{L}$. This symmetry group is also referred to as the gauge group of the theory you are describing. Each element of the Lie Algebra corresponds to a gauge field in the theory. Gauge fields are included into the lagrangian $\mathcal{L}$ to ensure invariance under local transformations of the gauge theory. This is what is called gauge invariance --> Our theory remains unchanged when performing a transformation belonging to our gauge group --> the physics is unchanged. When our theory is quantized (we will be using path integral quantization), the gauge fields behave as bosons with contributions from gauge fixing (explained below), coining the term gauge bosons. 


