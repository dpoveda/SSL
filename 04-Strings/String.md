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
$$Power:\Sigma^*\mathbf{x}\mathbb N_0\rightarrow\Sigma^*/Power(s,n)=\left\{\begin{array} {r}
					                               \lambda,  && s=\lambda&\lor&n=0   \\
				             s . Power(s, n-1),&&n>0\\
													\end{array} \right. $$

## Equal   
$$Equal:\Sigma^*\mathbf{x}\Sigma^*\rightarrow B/Equal(s,n)=\left\{\begin{array} {r}
					                               True,  && s=n    \\
				             False,&& s\neq n\\
													\end{array} \right. $$


