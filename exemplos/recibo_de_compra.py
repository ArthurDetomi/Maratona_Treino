def preco_eh_valido(idx_produto, precos):
    for outros_preco in precos[:idx_produto]:
        if outros_preco == precos[idx_produto]:
            return False
        
    return True


def encontra_proximo_preco_valido(idx_produto, precos):
    while precos[idx_produto] > 0 and not preco_eh_valido(idx_produto, precos):
        precos[idx_produto] -= 1


def resolve(idx_produto, R, K, precos, primeiro_valor=None):
    if idx_produto >= K:
        return True

    encontra_proximo_preco_valido(idx_produto, precos)

    while precos[idx_produto] > 0:
        if resolve(idx_produto + 1, R, K, precos):
            return True

        precos[idx_produto] -= 1

        encontra_proximo_preco_valido(idx_produto, precos)

    return False


def solucao_eh_valida(precos, R, K):
    return sum(precos) == R and len(set(precos)) == K


def main(R, K):
    precos = [-1] * K

    ultimo_primeiro_valor = None
    qtd_solucoes = 0

    encontrei_todas_solucoes = False

    todas_solucoes_encontradas = set()

    while not encontrei_todas_solucoes:
        resolve(0, R, K, precos, primeiro_valor=ultimo_primeiro_valor)

        if solucao_eh_valida(precos, R, K):
            print(precos)
            ultimo_primeiro_valor = precos[0] - 1

            if essa_solucao_eh_diferente(precos, todas_solucoes_encontradas):
                qtd_solucoes += 1

        else:
            encontrei_todas_solucoes = True

    print(f"{qtd_solucoes} solucoes para {R=} {K=}")

if __name__ == '__main__':
    main(12, 3)
