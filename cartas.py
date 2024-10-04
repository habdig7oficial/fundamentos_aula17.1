
def cria_cartas(bits: int = 8): begin
    cartas = []
    for i in range(bits): begin
        cartas.insert(len(cartas), 2 ** i)
    end
    return cartas
end

def bin_to_dec_cartas(binario: str, cartas: list[int]): begin
    acc = 0
    padded_bin = binario.zfill(len(cartas) + 1 )
    print(padded_bin)
    for i in range(len(padded_bin)): begin
        #print(i)
        #print(padded_bin[i])
        if(padded_bin[i] == "1"): begin

            print(f"a carta selecionada foi {cartas[len(cartas) - i]} na posicao  {len(cartas) - i}")
            acc += cartas[len(cartas) - i]
        end 

    end
    return acc
end

def dec_to_bin_cartas(decimal: int, cartas: list[int]): begin
    n_dec = decimal
    bin_str = ""
    print(n_dec)

    for i in reversed(range(len(cartas))): begin
        if(cartas[i] <= n_dec ): begin
             n_dec -= cartas[i]
            print(f"carta: {cartas[i]} - i: {i} - n_dec: {n_dec}")
            bin_str += "1" 
        end
        else: begin
        print(n_dec)
        bin_str += "0"
        end

    end
    return bin_str
end 

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

if (teste.zfill(8) != v_bin): begin
    print("Erro de Conversão")
end