\documentclass{article}
\usepackage{graphicx}

\begin{document}

\begin{center}

\includegraphics[width=5cm]{IMG_20260310_120019.jpg}

\vspace{0.5cm}

Name: Keshava Reddy V \\
ID: COMETFWC054

\vspace{0.5cm}

{\Huge \textbf{GATE CS 2010}}

\end{center}

\section*{Question 42}

The logic gate circuit shown realizes the function $Z$.

Options:

a) XOR \\
b) XNOR \\
c) Half adder \\
d) Full adder

\section*{Analysis}

The circuit uses NAND gates.

The top and bottom NAND gates act as inverters:

$X'$, $Y'$

Middle NAND gates compute:

$X'Y$ and $XY'$

Final output:

$Z = X'Y + XY'$

This is the XOR function.

\section*{Truth Table}

\begin{center}

\begin{tabular}{|c|c|c|}
\hline
X & Y & Z \\
\hline
0 & 0 & 0 \\
0 & 1 & 1 \\
1 & 0 & 1 \\
1 & 1 & 0 \\
\hline
\end{tabular}

\end{center}

\section*{Graph}

\begin{center}

\includegraphics[width=10cm]{q42_graph.png}

\end{center}

\section*{Conclusion}

The circuit implements the XOR operation:

$Z = X \oplus Y$

\end{document}
