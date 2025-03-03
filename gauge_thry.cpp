#include <iostream>

/*  The vision for this project is to not only be able to further my understanding of gauge theory but also visualize gauge theory in an intuitive way. 
 *  
 *  There are two (or three) things that I want to accomplish. 
 *  1. Visualize Gauge theory in QFT / EM
 *  2. Understand and Demonstrate How GR is a "gauge theory" of the lorentz group
 *  3. Extend (2) to the theory gravity with supersymmetry
 *  
 *  Obviously, there are many details for each of these goals. They should be fleshed out while maintaining this project. 
 *  Also. It should be noted that for animations / visualizations it is probably better to do it in 
 *  python with the vast API plotting functions such as matplotlib and manim. 
 *
 *  However, I am thinking that maybe if we are going to be doing heavy mathematical operations then we want to do them in C++. Luckily, there is really good python support for implementing C++ code / plugging this file directly into the file for python. I still need to work on how to integrate this though
 *
 *
 *  Ideas for part 1:
 *  ----------------
 *  Say we want to visualize a gauge in QFT. What exactly even constitutes a gauge?
 *  In my opinion, what we really want to capture is what happens when transforming between gauges, and investigating what is left invariant. 
 *  For example, physical observables are left invariant. However, are the dynamics of off shell particles changed? How are they changed? What do those changes look like?
 *
 *
 *  3/2/25
 *  ------
 *  Lets try to investigate the theory of electro-weak. This theory is a SU(2) x U(1) gauge theory. U(1) is electromagnetism in the form of QED, and SU(2) is nuclear decay in the form of the weak interaction
 *
 *  First off, lets try to visualize both SU(2) and U(1) local symmetries independently, using manim
 *  This entails:
 *  --> Fields changing under this local transformation (i.e., flags or something)
 *  --> The visualization of U(1) and SU(2), ie their Lie groups and covers
 *  --> The Gauge covariant derivative and a visual of how the gauge field "mediates" interactions
 *
 */


int main(){
	

	return 0
}
