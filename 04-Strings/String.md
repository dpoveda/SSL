# Especificación matemática de operaciones con strings 

## GetLength ó GetLongitud:  
$$GetLength:\Sigma^*\rightarrow\mathbb N_0/GetLength(s)=\left\{\begin{array} {r}
					                               0,  && s=\lambda    \\
				             1+GetLength(t),&& s=h.t&\land& h\in\Sigma\\
													\end{array} \right. $$
  
  
## IsEmpty ó IsVacía  
$$IsEmpty:\Sigma^*\rightarrow B/IsEmpty(s)=\left\{\begin{array} {r}
					                               True,  && s=\lambda    \\
				             False,&& s\neq\lambda\\
													\end{array} \right. $$

## Power ó Potenciar  

## Una operación a definir libremente.   

List item

$(a,b); ]a,b[; \{a,b\}$
$\tilde{S}, \overline{x}, \overline{X}, \hat{p},\land,\rightarrow$
$\left[\overline{X} -z_{1-\frac{\alpha}{2}} \frac{\sigma}{\sqrt{n}}, \overline{X}+z_{1-\frac{\alpha}{2}}\frac{\sigma}{\sqrt{n}} \right]$

$\left[\overline{X} -z_{1-\frac{\alpha}{2}} \frac{\sigma}{\sqrt{n}}, \overline{X}+z_{1-\frac{\alpha}{2}}\frac{\sigma}{\sqrt{n}} \right\}$


$$\int_0^{2\pi} \sin x~dx$$

$$\left(\right)\left]\right]$$
$`H_{0}: \mu=\mu_0$` contra la alternativa bilateral `$H_1: \mu\neq\mu_0`$
$\quad\forall n\in\mathbb N$
$\mathbb N$
$$a \pm b$$
$$\begin{array}
{r}
1tjgj\\
 fdfd\\
\end{array}
$$


$$
\Gamma(z) = \int_0^\infty t^{z-1}e^{-t}dt\,.
$$
$\Sigma_{a}^{b} x^2 dx$




5. Parte II — Biblioteca para el Tipo String: Desarrollar una biblioteca con las
siguientes operaciones de strings:
a. GetLength ó GetLongitud
b. IsEmpty ó IsVacía
c. Power ó Potenciar
d. Una operación a definir libremente.
Notar que en vez de la operación concatenar que propone [MUCH2012] se
debe desarrollar Power ó Potenciar que repite un string n veces.
La parte pública de la biblioteca se desarrolla en el header "String.h", el
cual no debe incluir <string.h>. El programa que prueba la biblioteca, por
supuesto, incluye a "String.h", pero sí puede incluir <string.h> para facilitar
las comparaciones.
<!--stackedit_data:
eyJoaXN0b3J5IjpbMjA3NDA0MTExNCw0MDc4OTQ3NTcsMTkxMz
YyMTQwNiwtNzg2Mjk3NDI3LC0xMTI5NjE2NjE2LC0xMTMwNzcy
NzM1LDc4NjU0NTEyOCwtNDI1NjcxMDgxXX0=
-->