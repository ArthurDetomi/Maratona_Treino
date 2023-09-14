import networkx as nx


def ler_grafo_e_retorna():
    arestas = []
    n_vertices = 0

    with open("test.txt", "r") as arquivo:
        for linha in arquivo:
            partes = linha.strip().split()  # Dividir a linha em partes usando espaços em branco
            # Verifique se há pelo menos dois números na linha
            if len(partes) >= 2:
                lista_de_numeros = [(parte) for parte in partes]
                arestas.append((lista_de_numeros[0], lista_de_numeros[1]))
                n_vertices += 1

    g = nx.Graph()
    g.add_edges_from(arestas)
    return g


def vizinho_sucessor(grafo, R_positivo):
    N_positivo = set()
    for vertice in R_positivo:
        for vizinho in nx.all_neighbors(grafo, vertice):
            if vizinho not in R_positivo:
                N_positivo.add(vizinho)
    return N_positivo

def vizinho_antecessor(grafo, R_negativo):
    N_negativo = set()
    for vertice in R_negativo:
        for antecessor in nx.predecessor(grafo, vertice):
            if antecessor not in R_negativo:
                N_negativo.add(antecessor)
    
    return N_negativo

def grafo_reduzido(grafo):
    componentes_f_conexas = []
    Y = set(nx.nodes(grafo))
    k = 0
    while len(Y):
        R_positivo, R_negativo, N_positivo, N_negativo = set(), set(), set(), set()
        v = Y.copy().pop()
        W = set() 
        
        R_positivo.add(v)
        R_negativo.add(v)
        
        while (W != (R_positivo | vizinho_sucessor(grafo, R_positivo))):
            N_positivo = vizinho_sucessor(grafo, R_positivo)
            R_positivo = N_positivo | R_positivo
            W = set(R_positivo)
        
        W = set()
        
        while (W != (R_negativo | vizinho_antecessor(grafo, R_negativo))):
            N_negativo = vizinho_antecessor(grafo, R_negativo)
            R_negativo = N_negativo | R_negativo
            W = set(R_negativo)
            
        componentes_f_conexas.append(R_negativo & R_positivo)
        Y = Y - componentes_f_conexas[k]
        k += 1
        
    return componentes_f_conexas

def main():
    grafo = ler_grafo_e_retorna()
    comp = grafo_reduzido(grafo)
    for i, val in enumerate(comp):
        val = sorted(val)
        print(f"Componente {i + 1}: {val}")

if __name__ == '__main__':
    main()
        
            
def main():
    grafo = ler_grafo_e_retorna()
    comp = grafo_reduzido(grafo)



if __name__ == '__main__':
    main()
