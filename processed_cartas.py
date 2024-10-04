
def cria_cartas(bits: int = 8): 
	cartas = [] 
	for i in range(bits): 
		cartas.insert(len(cartas), 2 ** i) 

	return cartas 


def bin_to_dec_cartas(binario: str, cartas: list[int]): 
	acc = 0 
	padded_bin = binario.zfill(len(cartas) + 1 ) 
	print(padded_bin) 
	for i in range(len(padded_bin)): 
		#print(i) 
		#print(padded_bin[i]) 
		if(padded_bin[i] == "1"): 

			print(f"a carta selecionada foi {cartas[len(cartas) - i]} na posicao {len(cartas) - i}") 
			acc += cartas[len(cartas) - i] 



	return acc 


def dec_to_bin_cartas(decimal: int, cartas: list[int]): 
	n_dec = decimal 
	bin_str = "" 
	print(n_dec) 

	for i in reversed(range(len(cartas))): 
		if(cartas[i] <= n_dec ): 
			n_dec -= cartas[i] 
			print(f"carta: {cartas[i]} - i: {i} - n_dec: {n_dec}") 
			bin_str += "1" 

		else: 
			print(n_dec) 
			bin_str += "0" 



	return bin_str 


teste = "00110" 

cartas = cria_cartas() 
print(cartas) 
print("---") 
v_dec = bin_to_dec_cartas(teste, cartas) 
print(v_dec) 
print("---") 
v_bin = dec_to_bin_cartas(v_dec, [1, 2, 4, 8, 16, 32, 64, 128]) 
print(v_bin) 

print(f"valor convertido: {v_bin} - original: {teste}") 

if (teste.zfill(8) != v_bin): 
	print("Erro de Conversão") 

